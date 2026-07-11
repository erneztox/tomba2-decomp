/**
 * @brief Runs entity script loop: dispatches commands via opcode table at 0x800A3B78
 * @note Original: func_80041098 at 0x80041098
 */
// Entity_ScriptRun



undefined4 FUN_80041098(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  do {
    iVar3 = 0;
    if (param_1->anim_check < '\x01') {
      return 0;
    }
    iVar1 = (*(code *)(&PTR_FUN_800a3b78)[**(ushort **)(param_1 + 0x6c) & 0x7ff])(param_1);
    if (iVar1 == 1) {
LAB_80041150:
      uVar2 = 0;
LAB_80041160:
      iVar3 = FUN_80040fa0(param_1,uVar2);
    }
    else if (iVar1 < 2) {
      if (iVar1 == 0) {
        param_1->state_71 = param_1->state_71 | 1;
        return 1;
      }
    }
    else {
      if (iVar1 == 2) {
        uVar2 = 1;
        goto LAB_80041160;
      }
      if (iVar1 == 3) goto LAB_80041150;
    }
    if (iVar3 != 1) {
      return 0;
    }
  } while( true );
}
