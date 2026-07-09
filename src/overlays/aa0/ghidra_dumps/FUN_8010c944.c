// FUN_8010c944

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8010c944(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  short *psVar7;
  int in_t2;
  int in_t5;
  int in_t6;
  ushort *puVar8;
  char cVar9;
  int aiStack_30 [4];
  undefined1 auStack_20 [2];
  ushort local_1e;
  ushort local_1a;
  ushort local_16;
  
  uVar4 = (uint)*(byte *)(param_1 + 4);
  if (uVar4 == 1) {
    if (DAT_800bf9e0 < 0x10) {
      iVar3 = -0x7ff20000;
      if ((DAT_800bf816 == '\0') && (iVar3 = 1, DAT_800e7feb != '\x01')) {
        uVar1 = *(short *)(param_1 + 10) - 1;
        *(ushort *)(param_1 + 10) = uVar1;
        iVar3 = (uint)uVar1 << 0x10;
        if (uVar1 == 0) {
          iVar3 = func_0x8009a450();
          return iVar3;
        }
      }
      return iVar3;
    }
  }
  else {
    if (1 < uVar4) {
      if (uVar4 < 4 == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(uVar4 + (uVar4 < 4));
      goto code_r0x80115b74;
    }
    UNRECOVERED_JUMPTABLE = (code *)&LAB_800c0000;
    if (uVar4 != 0) goto code_r0x80115b74;
    if (DAT_800bf9e0 < 0x1c) {
      cVar9 = '\0';
      if (-1 < _DAT_80146f0c) {
        puVar8 = (ushort *)&DAT_80146f0c;
        do {
          if (*puVar8 == (ushort)*(byte *)(param_1 + 5)) {
            local_1e = puVar8[3];
            local_1a = puVar8[4];
            local_16 = puVar8[5];
            puVar6 = auStack_20;
            iVar3 = func_0x8003116c((int)(short)puVar8[1],puVar6,(int)(short)puVar8[2]);
            iVar2 = 0x100;
            if (iVar3 != 0) {
              uVar1 = puVar8[1];
              if ((short)uVar1 == 0x100) {
                *(char *)(iVar3 + 3) = cVar9;
LAB_801159e8:
                psVar7 = (short *)(puVar6 + (iVar2 + (short)uVar1) * 2);
                *(int *)(in_t2 + 0x2c) = aiStack_30[0] * *psVar7;
                *(int *)(in_t2 + 0x30) = aiStack_30[0] * psVar7[1];
                iVar2 = 1;
                *(int *)(in_t2 + 0x34) = aiStack_30[0] * psVar7[2];
                do {
                  psVar7 = psVar7 + 3;
                  param_4 = param_4 + 1;
                  if (in_t6 < param_4 * 0x10000 >> 0x10) {
                    param_4 = 0;
                    psVar7 = *(short **)((uint)*(byte *)(in_t2 + 3) * 4 + iVar3);
                  }
                  piVar5 = (int *)((int)aiStack_30 + ((iVar2 << 0x10) >> 0xe));
                  *(int *)(in_t2 + 0x2c) = *(int *)(in_t2 + 0x2c) + *piVar5 * (int)*psVar7;
                  *(int *)(in_t2 + 0x30) = *(int *)(in_t2 + 0x30) + *piVar5 * (int)psVar7[1];
                  iVar2 = iVar2 + 1;
                  *(int *)(in_t2 + 0x34) = *(int *)(in_t2 + 0x34) + *piVar5 * (int)psVar7[2];
                } while (iVar2 * 0x10000 >> 0x10 < 4);
                if (in_t5 << 0x10 < 1) {
                  iVar3 = FUN_8011eac8();
                  return iVar3;
                }
                return 1;
              }
              iVar2 = 1;
              if ((puVar8[2] & 1) != 0) {
                *(undefined1 *)(iVar3 + 3) = 1;
                goto LAB_801159e8;
              }
              *(undefined1 *)(iVar3 + 3) = 0;
            }
          }
          puVar8 = puVar8 + 6;
          cVar9 = cVar9 + '\x01';
        } while (-1 < (short)*puVar8);
      }
      if (0x1d < *(byte *)(param_1 + 5)) {
        iVar3 = func_0x800310f4(0x106,0xfffffff5);
        *(undefined1 *)(iVar3 + 3) = 1;
        iVar3 = func_0x800310f4(0x106,0xfffffff6);
        *(undefined1 *)(iVar3 + 3) = 2;
        iVar3 = func_0x800310f4(0x106,0xffffffe1);
        *(undefined1 *)(iVar3 + 3) = 3;
        iVar3 = func_0x800310f4(0x106,0xffffffe2);
        *(undefined1 *)(iVar3 + 3) = 4;
        iVar3 = func_0x800310f4(0x106,0xffffffe2);
        *(undefined1 *)(iVar3 + 3) = 5;
        iVar3 = func_0x800310f4(0x106,0xffffffe2);
        *(undefined1 *)(iVar3 + 3) = 6;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined2 *)(param_1 + 10) = 5;
      }
      UNRECOVERED_JUMPTABLE = (code *)(*(byte *)(param_1 + 5) + 1);
      *(char *)(param_1 + 5) = (char)UNRECOVERED_JUMPTABLE;
      goto code_r0x80115b74;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)0x3;
  *(undefined1 *)(param_1 + 4) = 3;
code_r0x80115b74:
                    /* WARNING: Could not recover jumptable at 0x80115b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (*UNRECOVERED_JUMPTABLE)();
  return iVar3;
}

