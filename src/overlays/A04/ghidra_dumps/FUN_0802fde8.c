// FUN_0802fde8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802fde8(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar7 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar4 + 0x2e)) * 0x10000) >>
          0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar4 + 0x36)) * 0x10000) >>
          0x10;
  uVar1 = *(ushort *)(param_1 + 0x32);
  uVar2 = *(ushort *)(iVar4 + 0x32);
  sVar3 = func_0x00084080(iVar7 * iVar7 + iVar5 * iVar5);
  iVar4 = func_0x00085690(iVar5,iVar7);
  iVar4 = func_0x00077768((int)*(short *)(param_1 + 0x56),-iVar4 & 0xfff,1);
  if (iVar4 != 0) {
    sVar3 = -sVar3;
  }
  iVar4 = func_0x00085690((int)(((uint)uVar1 - (uint)uVar2) * 0x10000) >> 0x10,(int)sVar3);
  uVar6 = iVar4 + 0x100U & 0xfff;
  if (0xc00 < uVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x900 < uVar6) {
    uVar6 = 0x900;
  }
  iVar4 = (int)uVar6 >> 9;
  if (*(short *)(param_1 + 0x6c) != iVar4) {
    func_0x00129b54(param_1,*(undefined1 *)(iVar4 + -0x7febe6f4),8,3);
    func_0x00129904(param_1,(short)iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

