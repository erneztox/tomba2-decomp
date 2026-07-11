// FUN_0802754c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802754c(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08027768 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6504))();
      return;
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
    if ((*(short *)(*(int *)(param_1 + 0x38) + 2) != 0) && ((_DAT_1f80017c & 0x1f) == 0)) {
      func_0x001327a4(param_1);
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if ((_DAT_800bfe56 & 0x20) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = func_0x000519e0(param_1,0x10,_DAT_800ecf94,0x8013b724);
    uVar2 = _DAT_800ecf90;
    if (iVar4 == 0) {
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[4] = param_1[4] + '\x01';
      if (DAT_800bf9c5 < 7) {
        if (DAT_800bf9c5 == 5) {
          uVar3 = 4;
          if (DAT_800bf928 == '\0') goto LAB_0802768c;
          param_1[5] = 5;
          *(undefined2 *)(param_1 + 0x56) = 0;
          func_0x00077c40(param_1,0x80140f7c,3);
        }
        else {
          if ((DAT_800bf9c5 == 4) || (DAT_800bf9c5 == 3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (DAT_800bf9c5 == 2) {
            param_1[5] = 1;
            *(undefined2 *)(param_1 + 0x56) = 0xfe00;
            func_0x00077c40(param_1,0x80140f7c,0x19);
          }
          else {
            param_1[5] = 0;
            *(undefined2 *)(param_1 + 0x56) = 0;
            func_0x00077c40(param_1,0x80140f7c,3);
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = 6;
      if (DAT_800bf928 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0802768c:
      param_1[5] = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

