// FUN_08018bcc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018bcc(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_38 [2];
  short local_30;
  short local_2e;
  short local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  
  uVar6 = 0;
  pbVar5 = (byte *)(param_1 + 0x50);
  local_38[0] = _DAT_801091c8;
  iVar7 = (int)*(short *)(param_1 + 0x4c);
  while( true ) {
    iVar4 = (uint)pbVar5[2] * 0x10;
    iVar2 = func_0x00083f50(iVar7);
    bVar1 = pbVar5[1];
    iVar3 = func_0x00083e80(iVar7);
    local_30 = *(short *)(param_1 + 0x2c) + (short)((int)(iVar2 * (uint)bVar1 * iVar4) >> 0x16);
    local_2c = *(short *)(param_1 + 0x30) + (short)((int)(iVar3 * (uint)pbVar5[1] * iVar4) >> 0x16);
    iVar2 = func_0x00083e80(iVar4);
    local_2e = *(short *)(param_1 + 0x2e) - (short)((int)(iVar2 * (uint)*pbVar5) >> 10);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_28 = *(undefined2 *)(param_1 + 0x48);
    local_26 = *(undefined2 *)(param_1 + 0x4a);
    local_24 = *(undefined2 *)(param_1 + 0x4c);
    func_0x000318a0(&local_30,local_38,&local_28);
    if (((uVar6 & 3) == 0) || ((uVar6 & 3) == 1)) break;
    func_0x0003f698(*(undefined4 *)(param_1 + 0x38),_DAT_800ed8c8,0);
    pbVar5 = pbVar5 + 4;
    uVar6 = uVar6 + 1;
    iVar7 = iVar7 + 0x124;
    if (0xd < (int)uVar6) {
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

