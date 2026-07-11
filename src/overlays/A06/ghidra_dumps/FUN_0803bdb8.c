// FUN_0803bdb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803bdb8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar6 = (uint)*(ushort *)(param_1 + 0x68) - (uint)*(ushort *)(param_1 + 0x4e);
        *(short *)(param_1 + 0x68) = (short)iVar6;
        if (iVar6 * 0x10000 >> 0x10 < 0x601) {
          *(undefined2 *)(param_1 + 0x68) = 0x600;
          uVar2 = func_0x0009a450();
          *(ushort *)(param_1 + 0x40) = (uVar2 & 0xf) + 8;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        sVar4 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar4 + -1;
        if (sVar4 == 1) {
          *(undefined1 *)(param_1 + 5) = 0;
        }
      }
      goto LAB_0803bef4;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x68) = 0x600;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x6a) = (uVar2 & 0x3ff) + 0x1000;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x4e) = (uVar2 & 0x1f) + 0x20;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  sVar4 = *(short *)(param_1 + 0x68) + *(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x68) = sVar4;
  if (*(short *)(param_1 + 0x6a) <= sVar4) {
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x6a);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0803bef4:
  iVar6 = (uint)*(byte *)(param_1 + 3) * 8;
  puVar7 = (undefined2 *)(*(int *)(iVar6 + -0x7feb7190) + (uint)*(byte *)(param_1 + 0x46) * 6);
  local_1e = *puVar7;
  local_1a = puVar7[1];
  local_16 = puVar7[2];
  if ((_DAT_1f80017c & 7) == 0) {
    uVar3 = func_0x0013b844(param_1,auStack_20);
    *(undefined2 *)(param_1 + 100) = uVar3;
  }
  iVar5 = (int)*(short *)(param_1 + 100) - (int)*(short *)(param_1 + 0x62);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  iVar5 = (iVar5 >> 5) + 0x20;
  *(short *)(param_1 + 0x66) = (short)iVar5;
  func_0x0004139c(param_1 + 0x62,(int)*(short *)(param_1 + 100),iVar5 * 0x10000 >> 0x10);
  func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x62),
                  (int)((uint)*(ushort *)(param_1 + 0x68) << 0x10) >> 0x18);
  func_0x00041ac0(param_1);
  sVar4 = func_0x0013b9c0(param_1,auStack_20);
  if (sVar4 < 0x41) {
    if ((*(byte *)(param_1 + 0x5e) & 1) == 0) {
      bVar1 = *(char *)(param_1 + 0x46) + 1;
      *(byte *)(param_1 + 0x46) = bVar1;
      if (*(byte *)(iVar6 + -0x7feb718c) < bVar1) {
        *(undefined1 *)(param_1 + 0x46) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar1 = *(char *)(param_1 + 0x46) - 1;
      *(byte *)(param_1 + 0x46) = bVar1;
      if ((int)((uint)bVar1 << 0x18) < 0) {
        *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(iVar6 + -0x7feb718c);
      }
    }
  }
  iVar6 = func_0x00083e80((uint)_DAT_1f80017c << 4);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar6 >> 10);
  return;
}

