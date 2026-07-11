// FUN_08026a18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026a18(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  short local_32;
  undefined2 local_2e;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08026ac4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6898))();
      return;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa03 != '\b') goto LAB_08027030;
      DAT_800e806c = DAT_800bfa03;
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    bVar1 = *(byte *)(param_1 + 6);
    iVar5 = *(int *)(param_1 + 0x10);
    if (bVar1 == 1) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x4a) + (uint)*(ushort *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = (short)iVar4;
      iVar4 = (uint)*(ushort *)(iVar5 + 0x2e) - iVar4;
      *(short *)(iVar5 + 0x2e) = (short)iVar4;
      if (iVar4 * 0x10000 >> 0x10 < -0x1067) {
        *(undefined2 *)(iVar5 + 0x2e) = 0xef98;
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      local_36 = *(undefined2 *)(iVar5 + 0x2c);
      local_32 = *(short *)(iVar5 + 0x2e) + 200;
      local_2e = *(undefined2 *)(iVar5 + 0x30);
      func_0x0006cba8(auStack_38);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar3 = _DAT_1f80017c & 0x3f;
        *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 0x40;
        if (uVar3 == 0) {
          func_0x00074810(0x8e,0);
        }
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x44));
        *(short *)(iVar5 + 0x2e) = *(short *)(param_1 + 0x50) + (short)(iVar4 >> 7);
        if (DAT_800bfa03 == '\x11') {
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined2 *)(param_1 + 0x50) = 2;
          DAT_800e806c = 8;
          local_36 = *(undefined2 *)(iVar5 + 0x2c);
          local_32 = *(undefined2 *)(iVar5 + 0x2e);
          local_2e = *(undefined2 *)(iVar5 + 0x30);
          func_0x0006cba8(auStack_38);
          func_0x00074810(0x8f,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_08027030;
      }
    }
    else if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) goto LAB_08027030;
      func_0x00074810(0x90,0);
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      *(undefined1 *)(iVar5 + 4) = 2;
      *(undefined1 *)(iVar5 + 5) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (bVar1 == 3) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        DAT_800bfa03 = '\x12';
        *(undefined1 *)(param_1 + 6) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
LAB_08027030:
      func_0x00041098(param_1);
      func_0x0004190c(param_1);
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

