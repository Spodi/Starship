#include "global.h"

void Fortuna_8018927C(void*);
void Bolse_8018D394(void*);
void Bolse_8018D454(void*);
void Bolse_8018D7F0(void*);
void Bolse_8018D960(void*);
void Bolse_8018E710(void*);
void Bolse_8018E870(void*);
void Bolse_80191BAC(void*);
void Bolse_80191DB0(void*);

UNK_TYPE D_i4_801A03C0;
s32 D_i4_8019EDD0 = 0;

void OvlI4_CallFunction(u32 arg0, void* arg1) {
    switch (arg0) {
        case 0x5A:
            Fortuna_8018927C(arg1);
            break;
        case 0x5B:
            Bolse_8018E710(arg1);
            break;
        case 0x5C:
            Bolse_8018E870(arg1);
            break;
        case 0x5D:
            Bolse_80191BAC(arg1);
            break;
        case 0x5E:
            Bolse_80191DB0(arg1);
            break;
        case 0x5F:
            Bolse_8018D7F0(arg1);
            break;
        case 0x60:
            Bolse_8018D960(arg1);
            break;
        case 0x61:
            Bolse_8018D394(arg1);
            break;
        case 0x62:
            Bolse_8018D454(arg1);
        default:
            PRINTF("i4 指定外！\n"); // Not specified!
            break;
    }
}
