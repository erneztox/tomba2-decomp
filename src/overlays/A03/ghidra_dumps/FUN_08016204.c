// FUN_08016204

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08016204(int param_1,uint *param_2,int param_3,short *param_4,short *param_5,
                   short *param_6,short *param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_3 == 0) {
    _DAT_8011c0e4 = _DAT_8011c0e4 + 1;
    func_0x00084730(param_4,param_5,param_6,param_7,param_2 + 2,param_2 + 5,param_2 + 8,
                    param_2 + 0xb,auStack_40,&local_3c);
    if ((((((ushort)param_2[2] < 0x140) || ((ushort)param_2[5] < 0x140)) ||
         ((ushort)param_2[8] < 0x140)) || ((ushort)param_2[0xb] < 0x140)) &&
       (((*(ushort *)((int)param_2 + 10) < 0xf0 || (*(ushort *)((int)param_2 + 0x16) < 0xf0)) ||
        ((*(ushort *)((int)param_2 + 0x22) < 0xf0 || (*(ushort *)((int)param_2 + 0x2e) < 0xf0))))))
    {
      func_0x000846b0(&local_38,&local_34,&local_30,&local_2c);
      iVar2 = _DAT_800ed8c8;
      iVar3 = local_34;
      if (local_34 < local_38) {
        iVar3 = local_38;
      }
      iVar4 = local_2c;
      if (local_2c < local_30) {
        iVar4 = local_30;
      }
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      uVar13 = (iVar4 >> 2) + -0xe9 >> 10;
      iVar3 = ((iVar4 >> 2) >> (uVar13 & 0x1f)) + uVar13 * 0x200;
      if (0x7fb < iVar3 - 4U) {
        iVar3 = -1;
      }
      if (((-1 < local_3c) && (5 < iVar3)) && (iVar3 < 2000)) {
        if (iVar3 < 5) {
          iVar3 = 5;
        }
        *(undefined2 *)((int)param_2 + 0xe) = *(undefined2 *)(param_1 + 10);
        uVar1 = *(undefined2 *)(param_1 + 0xe);
        *(undefined1 *)((int)param_2 + 7) = 0x3c;
        *(undefined2 *)((int)param_2 + 0x1a) = uVar1;
        *(char *)(param_2 + 1) = (char)param_4[4];
        *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_4 + 9);
        *(char *)((int)param_2 + 6) = (char)param_4[5];
        *(char *)(param_2 + 3) = (char)param_4[3];
        *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_4 + 7);
        *(char *)(param_2 + 4) = (char)param_5[4];
        *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_5 + 9);
        *(char *)((int)param_2 + 0x12) = (char)param_5[5];
        *(char *)(param_2 + 6) = (char)param_5[3];
        *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_5 + 7);
        *(char *)(param_2 + 7) = (char)param_6[4];
        *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_6 + 9);
        *(char *)((int)param_2 + 0x1e) = (char)param_6[5];
        *(char *)(param_2 + 9) = (char)param_6[3];
        *(undefined1 *)((int)param_2 + 0x25) = *(undefined1 *)((int)param_6 + 7);
        *(char *)(param_2 + 10) = (char)param_7[4];
        *(undefined1 *)((int)param_2 + 0x29) = *(undefined1 *)((int)param_7 + 9);
        *(char *)((int)param_2 + 0x2a) = (char)param_7[5];
        *(char *)(param_2 + 0xc) = (char)param_7[3];
        *(undefined1 *)((int)param_2 + 0x31) = *(undefined1 *)((int)param_7 + 7);
        if (local_38 < 0x514) {
          *(undefined1 *)((int)param_2 + 6) = 0;
          *(undefined1 *)((int)param_2 + 5) = 0;
          *(undefined1 *)(param_2 + 1) = 0;
        }
        if (local_34 < 0x514) {
          *(undefined1 *)((int)param_2 + 0x12) = 0;
          *(undefined1 *)((int)param_2 + 0x11) = 0;
          *(undefined1 *)(param_2 + 4) = 0;
        }
        if (local_30 < 0x514) {
          *(undefined1 *)((int)param_2 + 0x1e) = 0;
          *(undefined1 *)((int)param_2 + 0x1d) = 0;
          *(undefined1 *)(param_2 + 7) = 0;
        }
        if (local_2c < 0x514) {
          *(undefined1 *)((int)param_2 + 0x2a) = 0;
          *(undefined1 *)((int)param_2 + 0x29) = 0;
          *(undefined1 *)(param_2 + 10) = 0;
        }
        puVar14 = (uint *)(iVar2 + iVar3 * 4);
        *param_2 = *puVar14 | 0xc000000;
        *puVar14 = (uint)param_2;
        param_2 = param_2 + 0xd;
      }
    }
    return param_2;
  }
  local_90 = (undefined2)((int)*param_4 + (int)*param_5 >> 1);
  local_8e = (undefined2)((int)param_4[1] + (int)param_5[1] >> 1);
  local_8c = (undefined2)((int)param_4[2] + (int)param_5[2] >> 1);
  local_8a = (undefined1)((int)((uint)*(byte *)(param_4 + 3) + (uint)*(byte *)(param_5 + 3)) >> 1);
  local_89 = (undefined1)
             ((int)((uint)*(byte *)((int)param_4 + 7) + (uint)*(byte *)((int)param_5 + 7)) >> 1);
  local_88 = (undefined1)((int)((uint)*(byte *)(param_4 + 4) + (uint)*(byte *)(param_5 + 4)) >> 1);
  local_87 = (undefined1)
             ((int)((uint)*(byte *)((int)param_4 + 9) + (uint)*(byte *)((int)param_5 + 9)) >> 1);
  local_86 = (undefined1)((int)((uint)*(byte *)(param_4 + 5) + (uint)*(byte *)(param_5 + 5)) >> 1);
  iVar18 = (int)*param_6 + (int)*param_7 >> 1;
  local_80 = (undefined2)iVar18;
  iVar15 = (int)param_6[1] + (int)param_7[1] >> 1;
  local_7e = (undefined2)iVar15;
  iVar17 = (int)param_6[2] + (int)param_7[2] >> 1;
  local_7c = (undefined2)iVar17;
  iVar2 = (int)((uint)*(byte *)(param_6 + 3) + (uint)*(byte *)(param_7 + 3)) >> 1;
  local_7a = (undefined1)iVar2;
  iVar3 = (int)((uint)*(byte *)((int)param_6 + 7) + (uint)*(byte *)((int)param_7 + 7)) >> 1;
  local_79 = (undefined1)iVar3;
  iVar4 = (int)((uint)*(byte *)(param_6 + 4) + (uint)*(byte *)(param_7 + 4)) >> 1;
  local_78 = (undefined1)iVar4;
  iVar5 = (int)((uint)*(byte *)((int)param_6 + 9) + (uint)*(byte *)((int)param_7 + 9)) >> 1;
  local_77 = (undefined1)iVar5;
  iVar6 = (int)((uint)*(byte *)(param_6 + 5) + (uint)*(byte *)(param_7 + 5)) >> 1;
  local_76 = (undefined1)iVar6;
  iVar16 = (int)*param_4 + (int)*param_6 >> 1;
  local_70 = (undefined2)iVar16;
  iVar20 = (int)param_4[1] + (int)param_6[1] >> 1;
  local_6e = (undefined2)iVar20;
  iVar19 = (int)param_4[2] + (int)param_6[2] >> 1;
  local_6c = (undefined2)iVar19;
  iVar7 = (int)((uint)*(byte *)(param_4 + 3) + (uint)*(byte *)(param_6 + 3)) >> 1;
  local_6a = (undefined1)iVar7;
  iVar8 = (int)((uint)*(byte *)((int)param_4 + 7) + (uint)*(byte *)((int)param_6 + 7)) >> 1;
  local_69 = (undefined1)iVar8;
  iVar9 = (int)((uint)*(byte *)(param_4 + 4) + (uint)*(byte *)(param_6 + 4)) >> 1;
  local_68 = (undefined1)iVar9;
  iVar10 = (int)((uint)*(byte *)((int)param_4 + 9) + (uint)*(byte *)((int)param_6 + 9)) >> 1;
  local_67 = (undefined1)iVar10;
  param_3 = param_3 + -1;
  iVar11 = (int)((uint)*(byte *)(param_4 + 5) + (uint)*(byte *)(param_6 + 5)) >> 1;
  local_66 = (undefined1)iVar11;
  local_60 = (undefined2)((int)*param_5 + (int)*param_7 >> 1);
  local_5e = (undefined2)((int)param_5[1] + (int)param_7[1] >> 1);
  local_5c = (undefined2)((int)param_5[2] + (int)param_7[2] >> 1);
  local_5a = (undefined1)((int)((uint)*(byte *)(param_5 + 3) + (uint)*(byte *)(param_7 + 3)) >> 1);
  local_59 = (undefined1)
             ((int)((uint)*(byte *)((int)param_5 + 7) + (uint)*(byte *)((int)param_7 + 7)) >> 1);
  local_58 = (undefined1)((int)((uint)*(byte *)(param_5 + 4) + (uint)*(byte *)(param_7 + 4)) >> 1);
  local_57 = (undefined1)
             ((int)((uint)*(byte *)((int)param_5 + 9) + (uint)*(byte *)((int)param_7 + 9)) >> 1);
  local_4e = (undefined2)(iVar15 + iVar20 >> 1);
  local_50 = (undefined2)(iVar18 + iVar16 >> 1);
  local_4c = (undefined2)(iVar17 + iVar19 >> 1);
  local_4a = (undefined1)(iVar2 + iVar7 >> 1);
  local_49 = (undefined1)(iVar3 + iVar8 >> 1);
  local_56 = (undefined1)((int)((uint)*(byte *)(param_5 + 5) + (uint)*(byte *)(param_7 + 5)) >> 1);
  local_48 = (undefined1)(iVar4 + iVar9 >> 1);
  local_47 = (undefined1)(iVar5 + iVar10 >> 1);
  local_46 = (undefined1)(iVar6 + iVar11 >> 1);
  uVar12 = func_0x0010f1a0(param_1,param_2,param_3,param_4,&local_90,&local_70,&local_50);
  uVar12 = func_0x0010f1a0(param_1,uVar12,param_3,&local_90,param_5,&local_50,&local_60);
  uVar12 = func_0x0010f1a0(param_1,uVar12,param_3,&local_70,&local_50,param_6,&local_80);
  func_0x0010f1a0(param_1,uVar12,param_3,&local_50,&local_60,&local_80,param_7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

