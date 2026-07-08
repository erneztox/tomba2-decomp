
void FUN_80014894(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  undefined4 uVar6;
  char cVar7;
  int unaff_s3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar6 = FUN_8001451c((int)(short)*param_2,(int)(short)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar6;
  uVar6 = FUN_800145b4((int)(((uint)param_2[2] + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(undefined4 *)(param_1 + 8) = uVar6;
  uVar6 = FUN_8001464c((int)(short)param_2[4],(int)(short)param_2[5]);
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uVar6 = FUN_800144fc(*(undefined1 *)((int)param_2 + 0x17),(char)param_2[0xb],param_2[10]);
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  uVar6 = FUN_80014668(param_2 + 6);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  iVar3 = DAT_8002550c;
  cVar7 = '\a';
  if ((char)param_2[0xc] != '\0') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar4 = 0;
    if ((-1 < (short)uVar1) && (uVar4 = DAT_80025518 - 1, (int)(short)uVar1 <= DAT_80025518 + -1)) {
      uVar4 = uVar1;
    }
    if ((short)uVar2 < 0) {
      sVar5 = 0;
    }
    else {
      sVar5 = DAT_8002551a - 1;
      if ((int)(short)uVar2 <= (short)DAT_8002551a + -1) {
        *(uint *)(param_1 + 0x1c) = (uint)(ushort)(uVar2 & DAT_8002551a | uVar2);
        (**(code **)(iVar3 + 8))(*(undefined4 *)(iVar3 + 0x18));
        FUN_8001e44c(unaff_s3 + 0xe,param_1,0x5c);
        return;
      }
    }
    cVar7 = '\n';
    local_14 = CONCAT22(sVar5,uVar4);
    local_18 = CONCAT22(param_2[1] - param_2[5],*param_2 - param_2[4]);
    *(uint *)(param_1 + 0x1c) =
         (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2[0xd] << 8 | 0x60000000 |
         (uint)*(byte *)((int)param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x20) = local_18;
    *(undefined4 *)(param_1 + 0x24) = local_14;
  }
  *(char *)(param_1 + 3) = cVar7 + -1;
  return;
}

