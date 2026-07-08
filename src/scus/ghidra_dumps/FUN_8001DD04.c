typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned char byte;

extern int DAT_80026d88;
extern char s___d__d____d__d__80010a40[];
extern char s_ClearImage2_80010a64[];
extern char s_LoadImage_80010a70[];

extern void FUN_8001e5ec(char*, char*);

void func_8001DD04(void) {
    volatile int i;
    volatile int val;
    val = 13;
    i = 0;
    while (i < 60) {
        val = val * 13;
        i++;
    }
}
