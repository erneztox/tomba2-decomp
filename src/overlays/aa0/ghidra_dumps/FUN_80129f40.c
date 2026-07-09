// FUN_80129f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129f40(int *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  int unaff_s1;
  int unaff_s3;
  
  bVar5 = false;
  if (*(char *)((int)param_1 + 6) == '\0') {
    *(short *)(param_1[0x30] + 0x38) =
         *(short *)(param_1[0x30] + 0x38) + *(short *)((int)param_1 + 0x4e);
    *(short *)(param_1[0x30] + 0x3a) = *(short *)(param_1[0x30] + 0x3a) - (short)param_1[0x14];
    if ((int)(uint)*(ushort *)(param_1[0x30] + 0x3a) <
        (int)(short)param_1[0x1d] - (int)(short)param_1[0x10]) {
      *(short *)(param_1[0x30] + 0x3a) = (short)param_1[0x1d] - (short)param_1[0x10];
      FUN_80132fcc();
      return;
    }
  }
  else {
    if (*(char *)((int)param_1 + 6) != '\x01') {
      FUN_80132fd4();
      return;
    }
    *(short *)(param_1[0x30] + 0x38) =
         *(short *)(param_1[0x30] + 0x38) - *(short *)((int)param_1 + 0x4e);
    *(short *)(param_1[0x30] + 0x3a) = *(short *)(param_1[0x30] + 0x3a) + (short)param_1[0x14];
    if ((int)(short)param_1[0x1d] + (int)(short)param_1[0x10] <
        (int)(uint)*(ushort *)(param_1[0x30] + 0x3a)) {
      *(short *)(param_1[0x30] + 0x3a) = (short)param_1[0x1d] + (short)param_1[0x10];
      bVar5 = true;
    }
  }
  if (bVar5) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)((int)param_1 + 0x4a);
    *(short *)(param_1 + 0x10) = (short)iVar3;
    if (iVar3 * 0x10000 < 1) {
      *(short *)(param_1[0x30] + 0x3a) = (short)param_1[0x1d];
      if (((short)param_1[0x1a] == 1) || ((short)param_1[0x1b] != 0)) {
        *(short *)(param_1[0x30] + 0x38) = (short)param_1[0x19];
        *(undefined2 *)(param_1[0x30] + 0x3a) = *(undefined2 *)((int)param_1 + 0x66);
        *(undefined1 *)((int)param_1 + 5) = 0;
        *(undefined1 *)((int)param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 0x10) = 0x14;
      }
      else {
        *(undefined1 *)((int)param_1 + 5) = 4;
      }
      iVar3 = (int)param_1 + 10;
      do {
        pbVar7 = (byte *)(unaff_s1 + unaff_s3);
        bVar1 = *pbVar7;
        *pbVar7 = bVar1 - 1;
        if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
          pcVar4 = (char *)*param_1;
          if (*pcVar4 == -1) {
            *param_1 = (int)pcVar4 - (uint)(byte)pcVar4[1];
          }
          iVar6 = *(int *)(iVar3 + -6);
          bVar1 = *(byte *)*param_1;
          *pbVar7 = ((byte *)*param_1)[1];
          func_0x80081218(&stack0xfffffff8,iVar6 + (uint)bVar1 * 0x20);
          *param_1 = *param_1 + 2;
        }
        unaff_s1 = unaff_s1 + 1;
        iVar3 = iVar3 + 0xc;
        param_1 = param_1 + 3;
      } while (unaff_s1 < 1);
      return;
    }
    *(char *)((int)param_1 + 6) = '\x01' - *(char *)((int)param_1 + 6);
  }
  if ((short)param_1[0x1b] == 0) {
    if (*(char *)((int)param_1 + 0x5e) != '\0') {
      FUN_80133610(param_1,*(undefined1 *)((int)param_1 + 0x5e));
      *(undefined1 *)((int)param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0x1b) = 1;
      FUN_80133154();
      return;
    }
    if ((((*(char *)((int)param_1 + 0x29) != '\0') && (*(char *)((int)param_1 + 6) == '\0')) &&
        ((DAT_800e7fc5 & 1) == 0)) && (DAT_800e7fe4 == '\0')) {
      _DAT_800e7eb2 = _DAT_800e7eb2 + 5;
      FUN_80133154();
      return;
    }
  }
  else {
    sVar2 = FUN_80133700(param_1);
    if (sVar2 != 0) {
      *(short *)(param_1[0x30] + 0x38) = (short)param_1[0x19];
      *(undefined2 *)(param_1[0x30] + 0x3a) = *(undefined2 *)((int)param_1 + 0x66);
      FUN_80133610(param_1,0);
      *(undefined1 *)((int)param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x1b) = 0;
    }
  }
  if (0x20 < (short)param_1[0x14]) {
    *(short *)(param_1 + 0x14) = (short)param_1[0x14] + -1;
  }
  FUN_80133774(param_1);
  return;
}

