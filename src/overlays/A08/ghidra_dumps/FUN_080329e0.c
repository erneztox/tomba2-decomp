// FUN_080329e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080329e0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08032aa4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5fac))();
      return;
    }
    if ((DAT_800bf816 == '\0') || ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a))) {
      if (((param_1[0x28] & 0x80) == 0) && (iVar2 = func_0x0007778c(param_1), iVar2 != 0)) {
        func_0x000517f8(param_1);
      }
    }
    else if ((param_1[0x28] & 0x80) != 0) {
      param_1[1] = 1;
      func_0x00077e7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08032ba8 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5f94))();
          return;
        }
        if ((DAT_800bf816 == '\0') || ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a))) {
          if (((param_1[0x28] & 0x80) == 0) && (iVar2 = func_0x0007778c(param_1), iVar2 != 0)) {
            func_0x000517f8(param_1);
            halt_baddata();
          }
        }
        else if ((param_1[0x28] & 0x80) != 0) {
          param_1[1] = 1;
          func_0x00077e7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x00040410(param_1,param_1[3]);
      if (iVar2 == 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x40;
      *(undefined2 *)(param_1 + 0x82) = 0x80;
      param_1[4] = 1;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0x96;
      *(undefined2 *)(param_1 + 0x86) = 0x96;
      param_1[0x46] = 0;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      param_1[0x5f] = 0;
      param_1[0x5e] = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

