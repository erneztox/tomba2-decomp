// FUN_801138b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801138b8(undefined1 *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined1 *puVar4;
  int iVar5;
  uint extraout_v1;
  uint uVar6;
  undefined1 unaff_s1;
  
  bVar1 = param_1[6];
  uVar2 = (ushort)(bVar1 < 2);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x6a) != 1) {
      return;
    }
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if ((short)(sVar3 + -1) != 0) {
      return;
    }
    param_1[4] = 0;
    puVar4 = &DAT_80130000;
    param_1[0x28] = 1;
    uVar6 = (uint)(byte)param_1[3];
LAB_8011c93c:
    if (puVar4[uVar6 + 0x74d4] == '\0') goto LAB_8011ca48;
    param_1[0x2a] = puVar4[uVar6 + 0x74d4];
    param_2 = -0x7fec8b1c;
    uVar2 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fec8b1c) - *(short *)(param_1 + 0x2e);
    puVar4 = (undefined1 *)(uint)(byte)param_1[3];
  }
  else {
    puVar4 = param_1;
    if (uVar2 == 0) {
      uVar2 = 3;
      if (bVar1 == 2) {
        if (*(short *)(param_1 + 0x6a) != 1) {
          return;
        }
        param_2 = 3;
        FUN_8011de34(param_1,3,4,3);
        uVar2 = (byte)param_1[6] + 1;
        param_1[6] = (char)uVar2;
      }
      else if (bVar1 == 3) {
        if (*(short *)(param_1 + 0x6a) == 1) {
          FUN_8011de34(param_1,4,8,3);
          FUN_8011dc4c(param_1,2);
          param_1[5] = 1;
          param_1[6] = 0;
        }
        return;
      }
    }
    else if (bVar1 == 0) {
      sVar3 = FUN_8011dba4(param_1);
      if (sVar3 == 0) {
        return;
      }
      FUN_8011de34(param_1,1,4,3);
      puVar4 = (undefined1 *)(uint)(byte)param_1[6];
      *(undefined2 *)(param_1 + 0x40) = 1;
      param_1[7] = 0;
      uVar6 = extraout_v1;
      goto LAB_8011c93c;
    }
  }
  *(ushort *)(param_1 + 0x60) = uVar2;
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)((int)puVar4 * 0xc + param_2 + 2);
  *(short *)(param_1 + 100) =
       *(short *)((int)puVar4 * 0xc + param_2 + 4) - *(short *)(param_1 + 0x36);
  param_1[0x5f] = *(undefined1 *)((int)puVar4 * 0xc + param_2 + 6);
  uVar2 = *(ushort *)((int)puVar4 * 0xc + param_2 + 8);
  *(ushort *)(param_1 + 0x82) = uVar2;
  iVar5 = (uint)uVar2 << 0x10;
  *(short *)(param_1 + 0x80) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
  uVar2 = *(ushort *)((int)puVar4 * 0xc + param_2 + 10);
  *param_1 = unaff_s1;
  *(ushort *)(param_1 + 0x86) = uVar2;
  iVar5 = (uint)uVar2 << 0x10;
  *(short *)(param_1 + 0x84) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
LAB_8011ca48:
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

