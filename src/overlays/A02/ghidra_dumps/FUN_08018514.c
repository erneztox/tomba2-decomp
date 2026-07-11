// FUN_08018514

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018514(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 3) == '\x02') {
    func_0x0001ec3c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0001ec3c(param_1,param_2);
  if (*(char *)(param_2 + 0x47) != '\0') {
    iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                  (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x2c)) * 0x10000) >> 0x10;
    iVar4 = (int)(((*(ushort *)(param_1 + 0x36) + 0x50) -
                  (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x34)) * 0x10000) >> 0x10;
    uVar2 = func_0x00084080(iVar5 * iVar5 + iVar4 * iVar4);
    if (((int)(uVar2 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x78) &&
       ((int)(((uint)*(ushort *)(param_1 + 0x32) -
              (uint)*(ushort *)(*(int *)(param_2 + 0xc4) + 0x30)) +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
      uVar3 = func_0x00085690(-iVar4,iVar5);
      iVar4 = func_0x00083f50(uVar3);
      sVar1 = *(short *)(param_1 + 0x80);
      iVar5 = func_0x00083e80(uVar3);
      *(short *)(param_1 + 0x2e) =
           *(short *)(*(int *)(param_2 + 0xc4) + 0x2c) + (short)(iVar4 * (sVar1 + 0x78) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(*(int *)(param_2 + 0xc4) + 0x34) -
           ((short)(iVar5 * (*(short *)(param_1 + 0x80) + 0x78) >> 0xc) + 0x50);
    }
  }
  return;
}

