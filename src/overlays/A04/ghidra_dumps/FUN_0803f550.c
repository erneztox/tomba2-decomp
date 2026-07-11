// FUN_0803f550

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803f62c) */
/* WARNING: Removing unreachable block (ram,0x0803f660) */

void FUN_0803f550(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(*(int *)(iVar5 + 0xd8) + 0x2c) + *(int *)(*(int *)(iVar5 + 0xe4) + 0x2c))
                / 2);
    sVar7 = (short)((*(int *)(*(int *)(iVar5 + 0xd8) + 0x30) +
                    *(int *)(*(int *)(iVar5 + 0xe4) + 0x30)) / 2);
    *(short *)(param_1 + 0x32) = sVar7;
    sVar3 = sVar7 + -100;
    if (*(short *)(iVar5 + 0xb8) == 0x1000) {
      sVar3 = sVar7 + -0x82;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(int *)(param_1 + 0x10) != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          func_0x00041a1c(param_1,0);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x60) * 0x100;
          *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
          func_0x0004766c(param_1);
        }
        *(undefined2 *)(param_1 + 0x40) = 0x32;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00041a1c(param_1,0);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x60) * 0x100;
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + *(short *)(param_1 + 0x62);
      func_0x0004766c(param_1);
      sVar3 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar3 + -1;
      if ((sVar3 == 1) ||
         (iVar5 = func_0x000495dc(param_1,(int)*(short *)(param_1 + 0x80),0), iVar5 != 0)) {
        *(undefined1 *)(param_1 + 4) = 2;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    uVar2 = *(short *)(param_1 + 0xb8) + 0x180;
    if (*(short *)(param_1 + 0x60) == 0x1800) {
      uVar2 = *(short *)(param_1 + 0xb8) + 0x140;
    }
    *(ushort *)(param_1 + 0xb8) = uVar2;
    if ((int)*(short *)(param_1 + 0x60) <= (int)(uint)uVar2) {
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0x60);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    uVar4 = (uint)*(ushort *)(param_1 + 0xb8);
    if (uVar4 == 0) {
      *(undefined2 *)(param_1 + 0xb8) = 1;
      uVar4 = (uint)*(ushort *)(param_1 + 0xb8);
    }
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    iVar5 = (int)(uVar4 * 100) >> 0xc;
    *(short *)(param_1 + 0x80) = (short)iVar5;
    *(short *)(param_1 + 0x82) = (short)(iVar5 << 1);
    iVar5 = *(int *)(param_1 + 0x10);
    iVar6 = (int)((uint)*(ushort *)(param_1 + 0xb8) * 100) >> 0xc;
    *(short *)(param_1 + 0x84) = (short)iVar6;
    *(short *)(param_1 + 0x86) = (short)(iVar6 << 1);
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(*(int *)(iVar5 + 0xd8) + 0x2c) + *(int *)(*(int *)(iVar5 + 0xe4) + 0x2c))
                / 2);
    sVar3 = (short)((*(int *)(*(int *)(iVar5 + 0xd8) + 0x30) +
                    *(int *)(*(int *)(iVar5 + 0xe4) + 0x30)) / 2);
    *(short *)(param_1 + 0x32) = sVar3;
    sVar3 = sVar3 + -100;
    if (*(short *)(iVar5 + 0xb8) == 0x1000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(short *)(param_1 + 0x32) = sVar3;
  *(short *)(param_1 + 0x36) =
       (short)((*(int *)(*(int *)(iVar5 + 0xd8) + 0x34) + *(int *)(*(int *)(iVar5 + 0xe4) + 0x34)) /
              2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

