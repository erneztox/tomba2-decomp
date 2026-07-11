// FUN_08025d48

/* WARNING: Control flow encountered bad instruction data */

void FUN_08025d48(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_38 [2];
  short local_36;
  short local_32;
  short local_2e;
  
  iVar7 = 0;
  iVar6 = (int)((*(ushort *)(param_1 + 0x56) + 0x400) * 0x10000) >> 0x10;
  iVar5 = 0;
  while( true ) {
    uVar1 = func_0x0009a450();
    sVar2 = (uVar1 & 0x3f) + 200;
    if (iVar5 != 0) {
      sVar2 = -sVar2;
    }
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    uVar1 = func_0x0009a450();
    local_36 = *(short *)(param_1 + 0x2e) + (short)(iVar3 * sVar2 >> 0xc);
    uVar1 = uVar1 & 0x1ff;
    local_2e = *(short *)(param_1 + 0x36) + (short)(-iVar4 * (int)sVar2 >> 0xc);
    if (param_2 == 0) break;
    iVar3 = func_0x00083f50(iVar6);
    iVar4 = func_0x00083e80(iVar6);
    local_36 = local_36 - (short)(iVar3 * (short)uVar1 >> 0xc);
    local_2e = local_2e - (short)(-iVar4 * (int)(short)uVar1 >> 0xc);
    local_32 = *(short *)(param_1 + 0x32) - ((short)uVar1 >> 4);
    sVar2 = -0x1e;
    if (iVar5 != 0) {
      sVar2 = -10;
    }
    func_0x000312d4(0,auStack_38,(int)sVar2);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      iVar7 = iVar7 + 1;
      iVar5 = 0;
      if (3 < iVar7) {
        return;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

