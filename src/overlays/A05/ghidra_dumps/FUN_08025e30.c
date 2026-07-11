// FUN_08025e30

/* WARNING: Control flow encountered bad instruction data */

void FUN_08025e30(undefined4 param_1,int param_2,ushort *param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  sVar7 = 0x18;
  if (param_4 != 0) {
    sVar7 = 0x28;
  }
  iVar6 = (param_2 - (uint)*param_3) * 0x10000;
  iVar8 = iVar6 >> 0x10;
  iVar3 = iVar8;
  if (iVar8 < 0) {
    iVar3 = -iVar8;
  }
  uVar5 = (ushort)param_2;
  if ((int)sVar7 < iVar3 + 8) {
    sVar7 = (short)((uint)(int)sVar7 >> 1);
    if (iVar3 < 0xc9) {
      sVar1 = (short)((uint)iVar6 >> 0x10);
      sVar4 = sVar1 >> 2;
      if (param_4 == 0) {
        sVar4 = sVar1 >> 3;
      }
      iVar3 = (int)sVar4;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar3 < sVar7) && (sVar4 = sVar7, (int)((param_2 - (uint)*param_3) * 0x10000) < 1)) {
        sVar4 = -sVar7;
      }
      *param_3 = *param_3 + sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = uVar5 - 0xc0;
    if (iVar8 < 1) {
      uVar2 = uVar5 + 0xc0;
    }
    *param_3 = uVar2;
    func_0x00076d68();
  }
  else {
    *param_3 = uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

