)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003D0BC at 0x8003D0BC
 */
// Engine_DispatchStateUpdate

extern unsigned char D_800BF870;

extern void func_801401B8(void*);
extern void func_80132358(void*);
extern void func_80124CB8(void*);
extern void func_801185F0(void*);
extern void func_8013606C(void*);
extern void func_8013CD34(void*);
extern void func_8012DA14(void*);
extern void func_8012A7CC(void*);
extern void func_8011024C(void*);
extern void func_80113050(void*);
extern void func_80113DB4(void*);
extern void func_80113628(void*);
extern void func_80114320(void*);
extern void func_80115364(void*);
extern void func_8010C2A4(void*);
extern void func_8010B5BC(void*);
extern void func_8010BA40(void*);
extern void func_8010AA20(void*);
extern void func_80115F1C(void*);
extern void func_8010B0B8(void*);

/**
 * @brief Dispatches the per-frame update call for the current game state.
 *
 * Reads D_800BF870 (current game/engine state ID) and calls the appropriate
 * state-specific update function. This is a global state machine dispatcher.
 *
 * @param param The parameter passed through to the state handler (typically 0x800F2418).
 * @note Original address: 0x8003D0BC
 */
void Engine_DispatchStateUpdate(void *param) {
    switch (D_800BF870) {
        case 0:
            func_801401B8(param);
            break;
        case 1:
            func_80132358(param);
            break;
        case 2:
            func_80124CB8(param);
            break;
        case 4:
            func_801185F0(param);
            break;
        case 5:
            func_8013606C(param);
            break;
        case 6:
            func_8013CD34(param);
            break;
        case 7:
            func_8012DA14(param);
            break;
        case 8:
            func_8012A7CC(param);
            break;
        case 10:
            func_8011024C(param);
            break;
        case 0xB:
            func_80113050(param);
            break;
        case 0xC:
            func_80113DB4(param);
            break;
        case 0xD:
            func_80113628(param);
            break;
        case 0xE:
            func_80114320(param);
            break;
        case 0xF:
            func_80115364(param);
            break;
        case 0x10:
            func_8010C2A4(param);
            break;
        case 0x11:
            func_8010B5BC(param);
            break;
        case 0x12:
            func_8010BA40(param);
            break;
        case 0x13:
            func_8010AA20(param);
            break;
        case 0x14:
            func_80115F1C(param);
            break;
        case 0x15:
            func_8010B0B8(param);
            break;
    }
}
