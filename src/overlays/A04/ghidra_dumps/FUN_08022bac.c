// FUN_08022bac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022bac(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (*(char *)(iVar4 + 4) == '\x03') {
      func_0x0013ebe4(param_1 + 0x2c,0,*(undefined1 *)(param_1 + 3));
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      cVar2 = *(char *)(iVar4 + 1);
      iVar4 = *(int *)(iVar4 + 0xc0);
      *(char *)(param_1 + 1) = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08022cdc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef61b4))();
        return;
      }
      func_0x000844c0(iVar4 + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
      *(short *)(param_1 + 0x2e) = *(short *)(iVar4 + 0x2c) + _DAT_1f8000c8;
      *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x30) + _DAT_1f8000ca;
      *(short *)(param_1 + 0x36) = *(short *)(iVar4 + 0x34) + _DAT_1f8000cc;
      if (*(char *)(param_1 + 6) == '\0') {
        *(undefined1 *)(param_1 + 6) = 1;
        *(ushort *)(param_1 + 0x50) =
             ((ushort)*(byte *)(param_1 + 3) * 2 + (ushort)*(byte *)(param_1 + 3)) * 0x100;
      }
      else if (*(char *)(param_1 + 6) == '\x01') {
        *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x40U & 0xfff;
        iVar4 = func_0x00083e80();
        sVar3 = (short)(iVar4 >> 2) + 0x1000;
        *(short *)(param_1 + 0x7a) = sVar3;
        *(short *)(param_1 + 0x7e) = sVar3;
        *(short *)(param_1 + 0x7c) = sVar3;
      }
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0x11;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0x1a) = 0x40;
      *(undefined1 *)(param_1 + 0x19) = 0x40;
      *(undefined1 *)(param_1 + 0x18) = 0x40;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x80144360,6);
      *(undefined1 *)(param_1 + 8) = 0xe0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x7a) = 0x1000;
      *(undefined2 *)(param_1 + 0x7c) = 0x1000;
      *(undefined2 *)(param_1 + 0x7e) = 0x1000;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

