)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003DF04 at 0x8003DF04
 */
// Engine_HandleState

extern unsigned char D_800BF870[];
extern int D_800ED018;

extern void func_8010BE30(int*);
extern void func_80115598(int*);
extern void func_8013F0DC(int*);
extern void func_80136F28(int*);
extern void func_80141A94(int*);
extern void func_8012F938(int*);
extern void func_801142EC(int*);
extern void func_801141B0(int*);
extern void func_80116B9C(int*);
extern void func_80116778(int*);

/**
 * @brief Handles game state transitions or specific engine events based on D_800BF870 values.
 * 
 * This function is called every frame by Engine_ExecuteGameLoop. It checks the 
 * first and fourth bytes of the D_800BF870 array and executes a jump table 
 * (switch statement) to handle various engine sub-states.
 * 
 * @note Original address: 0x8003DF04
 */
void Engine_HandleState(void) {
    if (D_800BF870->type == 0x15) {
        func_8010BE30(&D_800ED018);
    } else if (D_800BF870->sub_type == 0) {
        switch D_800BF870->type {
            case 0:
                func_80115598(&D_800ED018);
                break;
            case 4:
                func_8013F0DC(&D_800ED018);
                break;
            case 5:
                func_80136F28(&D_800ED018);
                break;
            case 6:
                func_80141A94(&D_800ED018);
                break;
            case 7:
                func_8012F938(&D_800ED018);
                break;
            case 10:
                func_801142EC(&D_800ED018);
                break;
            case 11:
                func_801141B0(&D_800ED018);
                break;
            case 13:
                func_80116B9C(&D_800ED018);
                break;
            case 15:
                func_80116778(&D_800ED018);
                break;
        }
    }
}
