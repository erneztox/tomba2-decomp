// FUN_80081db8

void FUN_80081db8(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = FUN_80082240((int)(short)*param_2,(int)(short)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar4 = FUN_800822d8((int)(((uint)param_2[2] + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar4 = FUN_80082370((int)(short)param_2[4],(int)(short)param_2[5]);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar4 = FUN_80082220(*(undefined1 *)((int)param_2 + 0x17),(char)param_2[0xb],param_2[10]);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_8008238c(param_2 + 6);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  cVar5 = '\a';
  if ((char)param_2[0xc] != '\0') {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    uVar2 = 0;
    if ((-1 < (short)uVar3) && (uVar2 = DAT_800a59a4 - 1, (int)(short)uVar3 <= DAT_800a59a4 + -1)) {
      uVar2 = uVar3;
    }
    if ((short)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_800a59a6 - 1;
      if ((int)(short)uVar1 <= DAT_800a59a6 + -1) {
        uVar3 = uVar1;
      }
    }
    cVar5 = '\n';
    local_14 = CONCAT22(uVar3,uVar2);
    local_18 = CONCAT22(param_2[1] - param_2[5],*param_2 - param_2[4]);
    *(uint *)(param_1 + 0x1c) =
         (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2[0xd] << 8 | 0x60000000 |
         (uint)*(byte *)((int)param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x20) = local_18;
    *(undefined4 *)(param_1 + 0x24) = local_14;
  }
  *(char *)(param_1 + 3) = cVar5 + -1;
  return;
}

