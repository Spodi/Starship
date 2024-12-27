#pragma once

#include <stdint.h>

typedef uint16_t EventID;

typedef enum EventType {
    EVENT_TYPE_PRE,
    EVENT_TYPE_NORMAL,
    EVENT_TYPE_POST,
} EventType;

typedef enum EventPriority {
    EVENT_PRIORITY_LOW,
    EVENT_PRIORITY_NORMAL,
    EVENT_PRIORITY_HIGH,
} EventPriority;

typedef struct IEvent {
    bool cancelled;
} IEvent;

typedef void (*EventCallback)(IEvent*);

// ID             Type
// 00000000000000 00
#define EVENT_ID(id, type) ((id << 2) | type)

#ifdef __cplusplus
#include <array>
#include <vector>

class EventSystem {
public:
    static EventSystem* Instance;
    size_t RegisterListener(EventID id, EventPriority priority, EventCallback callback);
    void CallEvent(EventID id, IEvent* event);
private:
    std::array<std::vector<EventCallback>, 0xFFFF> mEventListeners;
};
#else
extern size_t EventSystem_RegisterListener(EventID id, EventPriority priority, EventCallback callback);
extern void EventSystem_CallEvent(EventID id, void* event);
#endif