#include "sys.h"

u8 gOSYieldData[OS_YIELD_DATA_SIZE];
FrameBuffer gZBuffer; // z buffer
u8 gTaskOutputBuffer[0x30000];
u8 gAudioHeap[0xB0000];
u16 gTextureRenderBuffer[0x3C40];
u16 gFillBuffer[3 * SCREEN_WIDTH];
FrameBuffer gFrameBuffers[3];
