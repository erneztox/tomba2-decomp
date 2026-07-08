
void FUN_800145b4(uint *param_1,undefined4 param_2,uint param_3)

{
  int in_v0;
  uint uVar1;
  uint *puVar2;
  uint *in_v1;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int unaff_s0;
  int unaff_s1;
  undefined1 *unaff_s2;
  
  if (in_v0 == 0) {
    puVar4 = (uint *)0x1f4;
    if ((499 < (int)param_1) && (puVar4 = (uint *)0xcb2, (int)param_1 < 0xcb3)) {
      puVar4 = param_1;
    }
    puVar2 = puVar4 + (byte)(&DAT_80025610)[param_3];
    if (((int)(puVar4 + (byte)(&DAT_80025610)[param_3]) <= (int)in_v1) &&
       (puVar2 = (uint *)0xcda, (int)in_v1 < 0xcdb)) {
      puVar2 = in_v1;
    }
    if (unaff_s0 < 0x10) {
      puVar5 = (uint *)0x10;
    }
    else {
      puVar5 = (uint *)0x101;
      if (unaff_s0 < 0x102) {
        FUN_80013ec0();
        return;
      }
    }
    puVar6 = (undefined1 *)((int)puVar5 + 2);
    if (((int)puVar5 + 2 <= (int)unaff_s2) && (puVar6 = (undefined1 *)0x102, (int)unaff_s2 < 0x103))
    {
      puVar6 = unaff_s2;
    }
  }
  else {
    puVar4 = (uint *)0x21c;
    if ((0x21b < (int)param_1) && (puVar4 = (uint *)0xc94, (int)param_1 < 0xc95)) {
      puVar4 = param_1;
    }
    puVar2 = puVar4 + (byte)(&DAT_80025610)[param_3];
    if (((int)(puVar4 + (byte)(&DAT_80025610)[param_3]) <= (int)in_v1) &&
       (puVar2 = (uint *)0xcbc, (int)in_v1 < 0xcbd)) {
      puVar2 = in_v1;
    }
    if (unaff_s0 < 0x13) {
      puVar5 = (uint *)&DAT_00000013;
    }
    else {
      puVar5 = (uint *)&DAT_0000012f;
      if (unaff_s0 < 0x130) {
        FUN_80013e30();
        return;
      }
    }
    uVar1 = (uint)((int)unaff_s2 < 0x132);
    puVar6 = (undefined1 *)((int)puVar5 + 2);
    if ((int)puVar5 + 2 <= (int)unaff_s2) {
      for (; puVar3 = puVar4, *puVar5 = uVar1 & param_3 | (uint)puVar2, unaff_s1 != 0;
          unaff_s1 = unaff_s1 + -1) {
        *(undefined1 *)((int)puVar3 + 3) = 0;
        uVar1 = *puVar3;
        puVar2 = (uint *)((uint)(puVar3 + 1) & 0x131);
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      }
      DAT_800255d4 = 0x40255c0;
      *puVar3 = 0x255d4;
      return;
    }
  }
  (**(code **)(DAT_8002550c + 0x10))
            (((uint)puVar2 & 0xfff) << 0xc | (uint)puVar4 & 0xfff | 0x6000000);
  (**(code **)(DAT_8002550c + 0x10))(((uint)puVar6 & 0x3ff) << 10 | (uint)puVar5 | 0x7000000);
  FUN_8001e44c(&DAT_80025580);
  return;
}

