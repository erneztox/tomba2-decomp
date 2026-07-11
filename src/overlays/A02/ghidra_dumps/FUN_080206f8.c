// FUN_080206f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080206f8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = _DAT_800bf844;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x44) + 0x80;
    *(short *)(param_1 + 0x44) = sVar3;
    if (0x7ff < sVar3) {
      *(undefined2 *)(param_1 + 0x44) = 0x800;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x44) = 0;
      iVar5 = (int)((param_2 - (uint)*(ushort *)(iVar4 + 0x2e)) * 0x10000) >> 0x10;
      iVar4 = (int)((param_3 - (uint)*(ushort *)(iVar4 + 0x36)) * 0x10000) >> 0x10;
      uVar2 = func_0x00084080(iVar5 * iVar5 + iVar4 * iVar4);
      *(undefined2 *)(param_1 + 0x42) = uVar2;
      iVar4 = func_0x00085690(iVar4,iVar5);
      iVar5 = func_0x00083f50(-iVar4 & 0xfffU);
      *(short *)(param_1 + 0x48) = (short)(iVar5 >> 4);
      iVar4 = func_0x00083e80(-iVar4 & 0xfffU);
      *(short *)(param_1 + 0x4c) = (short)(-iVar4 >> 4);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  if ((_DAT_1f80017c & 7) == 0) {
    func_0x00074590(0x84,0,0);
  }
  *(int *)(iVar4 + 0x2c) =
       *(int *)(iVar4 + 0x2c) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  *(int *)(iVar4 + 0x34) =
       *(int *)(iVar4 + 0x34) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  iVar5 = (uint)*(ushort *)(param_1 + 0x42) -
          ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
  *(short *)(param_1 + 0x42) = (short)iVar5;
  if (iVar5 * 0x10000 < 1) {
    *(short *)(iVar4 + 0x2e) = (short)param_2;
    *(short *)(iVar4 + 0x36) = (short)param_3;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

