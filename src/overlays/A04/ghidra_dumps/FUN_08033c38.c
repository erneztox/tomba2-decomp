// FUN_08033c38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033c38(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00121c70(param_1);
    if (*(char *)(param_1 + 0x2b) != '\0') {
      *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((DAT_800bf809 == '\0') && (DAT_1f800137 == '\0')) {
      uVar3 = func_0x00076d68(param_1);
      *(undefined2 *)(param_1 + 0x7c) = uVar3;
      *(ushort *)(param_1 + 0x4e) =
           *(short *)(param_1 + 0x4e) + (ushort)*(byte *)(*(short *)(param_1 + 0x7a) + -0x7febe4f4)
           & 0xfff;
      if (*(short *)(param_1 + 0x7c) == 1) {
        *(undefined2 *)(param_1 + 0x4e) = 0;
      }
      if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08033dac */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5ee0))();
        return;
      }
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      if (*(char *)(param_1 + 1) != '\0') {
        if ((*(char *)(*(short *)(param_1 + 0x7a) + -0x7febe500) != '\0') &&
           (*(short *)(*(int *)(param_1 + 0x38) + 4) == 1)) {
          func_0x00074590(0x8f,0,0);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x000519e0(param_1,0x10,_DAT_800ecfa8,0x801415bc);
      uVar2 = _DAT_800ecfb0;
      if (iVar4 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xb) = 0xf;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      func_0x0012f41c(param_1,1,0);
      func_0x0012cf08(param_1);
      *(undefined2 *)(param_1 + 100) = 200;
      *(undefined2 *)(param_1 + 0x66) = 0x5a;
      *(undefined2 *)(param_1 + 0x74) = 3;
      *(undefined2 *)(param_1 + 0x76) = 4;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08033e8c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5ec8))();
      return;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 == 3) {
    if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
      func_0x0007a624(param_1);
      return;
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

