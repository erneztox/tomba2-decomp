)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_80016598 at 0x80016598
 */
// Engine_UpdateInputState

extern u8 D_800BF870[];
extern u8 D_800ED065;
extern u8 D_800BF871;
extern u16 D_800BF822;
extern u8 D_801F800137;
extern u32 D_800ED058;
extern u8 D_800ED061;
extern u8 D_800ED059;
extern u8 D_800BF816;
extern u8 D_800ED060;
extern u16 D_800BF880;
extern u32 D_1F800138;

extern void func_80025744(u32);
extern void func_80025934(u32, u32, u32);
extern void func_80113628(u32);
extern void func_801140A0(u32);
extern void func_80025B78(u32);
extern void func_801121AC(void);
extern void func_8010F8CC(void);

/**
 * @brief Reads controller input and updates engine input state flags.
 * @note Original address: 0x80016598
 */
void Engine_UpdateInputState(void) {
    u8 bVar1;
    
    if (D_800ED065 != 0) {
        if ((D_800BF870[0] != 5 || D_800BF870[1] > 3) && D_800BF870[0] != 3) {
            if (D_800BF870[0] != 0x14 && D_801F800137 != 1 && (D_800BF822 & 4) == 0) {
                func_80025744(D_800ED058);
            }
        }
    }
    
    bVar1 = D_800ED061 & 3;
    if (bVar1 == 1) {
        if ((D_800BF870[0] != 5 || D_800BF870[1] > 3) && 
            (D_800BF870[0] != 2 && D_800BF870[0] != 7 && D_800BF870[0] != 0x14)) {
            if (D_800ED059 != 0) {
                func_80025934(D_800ED058, 0, 0);
            }
        }
    } else if (bVar1 > 1 && bVar1 == 3) {
        func_80025934(D_800ED058, 0, 0);
    }
    
    if (D_800ED059 != 0 && D_800BF870[0] != 3) {
        if (D_800BF870[0] < 4) {
            if (D_800BF870[0] == 2) {
                if (D_800BF816 == 0 && D_800ED060 == 0) {
                    func_80113628(D_800ED058);
                }
            }
        } else {
            if (D_800BF870[0] == 7) {
                if (D_800BF816 == 0 && D_800ED060 == 0) {
                    func_801140A0(D_800ED058);
                }
            }
        }
        
        if ((D_800BF880 & 0x600) == 0 && (D_800BF880 & 0x100) == 0 && D_800BF816 == 0) {
            func_80025B78(D_800ED058);
        }
    }
    
    if (*(s16*)(D_1F800138 + 0x4C) == 6 && *(s16*)(D_1F800138 + 0x4E) != 0) {
        if (D_800BF870[0] == 5) {
            func_801121AC();
        } else if (D_800BF870[0] == 0x14) {
            func_8010F8CC();
        }
    }
}
