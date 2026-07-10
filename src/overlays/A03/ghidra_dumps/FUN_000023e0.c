// FUN_000023e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000023e0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
        return;
      }
      if (*(char *)(param_1 + 5) == '\0') {
        iVar2 = func_0x00072ddc(0,3,4,0x26);
        *(undefined4 *)(iVar2 + 0x1c) = 0x8010e590;
        *(undefined4 *)(iVar2 + 0x10) = 0x800e7e80;
        _DAT_800e7e90 = iVar2;
        *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
        *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 7);
        uVar3 = *(undefined4 *)(param_1 + 0x9c);
        uVar4 = *(undefined4 *)(param_1 + 0xa0);
        uVar5 = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(param_1 + 0x98);
        *(undefined4 *)(iVar2 + 0x9c) = uVar3;
        *(undefined4 *)(iVar2 + 0xa0) = uVar4;
        *(undefined4 *)(iVar2 + 0xa4) = uVar5;
        uVar3 = *(undefined4 *)(param_1 + 0xac);
        uVar4 = *(undefined4 *)(param_1 + 0xb0);
        uVar5 = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)(iVar2 + 0xac) = uVar3;
        *(undefined4 *)(iVar2 + 0xb0) = uVar4;
        *(undefined4 *)(iVar2 + 0xb4) = uVar5;
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x00077ebc(param_1);
        func_0x00051300(param_1);
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      else if (*(char *)(param_1 + 5) != '\x01') {
        halt_baddata();
      }
      func_0x0010e160(param_1);
      if (DAT_1f800137 != '\x02') {
        return;
      }
      if (DAT_800bf80d != '\x02') {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x0010bdec(param_1);
    func_0x0010b738();
    _DAT_8011bae8 = 0xfffffe70;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  func_0x0010e160(param_1);
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0000248c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7044))();
    return;
  }
  if ((DAT_1f800137 == '\x02') && (DAT_800bf80f == '\0')) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

