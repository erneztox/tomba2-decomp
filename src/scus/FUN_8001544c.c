
undefined8 FUN_8001544c(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint *puVar6;
  int in_t0;
  int unaff_s0;
  int iVar7;
  undefined4 unaff_s1;
  undefined8 uVar8;
  
  FUN_8001577c();
  puVar6 = (uint *)(int)*(short *)(param_1 + 1);
  uVar4 = *(undefined2 *)(param_1 + 1);
  if ((int)puVar6 < 0) {
    uVar4 = 0;
  }
  else if ((int)(short)DAT_80025518 < (int)puVar6 != 0) {
    uVar2 = (uint)DAT_80025518 << 8 | (uint)DAT_80025518;
    *puVar6 = (uint)((int)(short)DAT_80025518 < (int)puVar6) << 0x10 | uVar2 |
              (uint)*(byte *)(unaff_s0 + 0x19);
    *(int *)(param_3 + (int)param_1) = unaff_s0;
    *(undefined4 *)(param_4 + (int)param_1) = unaff_s1;
    in_t0 = in_t0 + -1;
    *(char *)((int)param_1 + 3) = (char)in_t0;
    goto LAB_80014ce8;
  }
  uVar5 = *(ushort *)((int)param_1 + 6);
  *(undefined2 *)(param_1 + 1) = uVar4;
  if (*(short *)((int)param_1 + 6) < 0) {
    uVar5 = 0;
    in_t0 = 0;
  }
  else {
    uVar2 = (uint)DAT_8002551a;
    in_t0 = (uint)uVar5 << 0x10;
    if ((short)DAT_8002551a < *(short *)((int)param_1 + 6)) {
LAB_80014ce8:
      return CONCAT44(uVar2,in_t0);
    }
  }
  *(ushort *)((int)param_1 + 6) = uVar5;
  iVar3 = (int)*(short *)(param_1 + 1) * (in_t0 >> 0x10) + 1;
  iVar7 = iVar3 - (iVar3 >> 0x1f) >> 5;
  if (iVar3 / 2 < 1) {
    uVar8 = FUN_80014eac();
    return uVar8;
  }
  iVar3 = iVar3 / 2 + iVar7 * -0x10;
  uVar2 = *DAT_8002561c;
  while ((uVar2 & 0x4000000) == 0) {
    uVar8 = FUN_800157b0();
    puVar6 = (uint *)((ulonglong)uVar8 >> 0x20);
    uVar1 = 0xffffffff;
    if ((int)uVar8 != 0) goto LAB_800156ac;
    uVar2 = *DAT_8002561c;
  }
  *DAT_8002561c = 0x4000000;
  *DAT_80025618 = 0x1000000;
  *DAT_80025618 = 0xc0000000;
  *DAT_80025618 = *param_1;
  *DAT_80025618 = param_1[1];
  uVar2 = *DAT_8002561c;
  while ((uVar2 & 0x8000000) == 0) {
    uVar8 = FUN_800157b0();
    puVar6 = (uint *)((ulonglong)uVar8 >> 0x20);
    uVar1 = 0xffffffff;
    if ((int)uVar8 != 0) goto LAB_800156ac;
    uVar2 = *DAT_8002561c;
  }
  while (iVar3 = iVar3 + -1, iVar3 != -1) {
    *param_2 = *DAT_80025618;
    param_2 = param_2 + 1;
  }
  puVar6 = (uint *)0x4000000;
  if (iVar7 != 0) {
    *DAT_8002561c = 0x4000003;
    *DAT_80025620 = (int)param_2;
    puVar6 = DAT_80025624;
    *DAT_80025624 = iVar7 << 0x10 | 0x10;
    *DAT_80025628 = 0x1000200;
  }
  uVar1 = 0;
LAB_800156ac:
  return CONCAT44(puVar6,uVar1);
}

