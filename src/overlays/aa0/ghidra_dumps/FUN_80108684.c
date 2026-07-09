// FUN_80108684

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80108684(int param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *unaff_s4;
  ushort local_38;
  
  local_38 = 0;
  if (*(char *)(param_2 + 3) == '\x05') {
    local_38 = 0xffba;
  }
  if ((param_4 & 1) == 0) {
    iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                  ((uint)*(ushort *)(param_3 + 0x2c) + (uint)local_38)) * 0x10000) >> 0x10;
    iVar11 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    iVar6 = iVar11 * 0x10000 >> 0x10;
    uVar7 = func_0x80084080(iVar5 * iVar5 + iVar6 * iVar6);
    if ((int)(uVar7 & 0xffff) <=
        ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
        (int)*(short *)(param_2 + 0x80)) {
      iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
      puVar13 = (undefined2 *)
                ((uint)*(ushort *)(param_2 + 0x84) +
                ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)));
      uVar12 = (uint)((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
                     (int)(iVar5 + (int)puVar13 & 0xffffU));
      if (uVar12 == 0) {
        if (iVar5 * 0x10000 < 0) {
          uVar8 = FUN_80111868();
          return uVar8;
        }
        unaff_s4 = (undefined2 *)
                   ((uint)*(ushort *)(param_1 + 0x84) +
                   ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)));
        _DAT_1f80009c = func_0x80085690(-(int)(short)iVar11);
        iVar11 = 0x1f800000;
        if ((((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
            (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar7 <
            (int)(short)unaff_s4 - (int)(short)iVar5) {
          if (*(char *)(param_1 + 0xc) == '\x02') {
            cVar4 = func_0x80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
            *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
          }
          iVar6 = func_0x80083f50(_DAT_1f80009c);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar10 = func_0x80083e80(_DAT_1f80009c);
          sVar3 = *(short *)(param_2 + 0x80);
          uVar9 = 1;
          puVar13 = (undefined2 *)
                    ((iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc) +
                    (uint)*(ushort *)(param_3 + 0x2c) + (uint)local_38);
          *(short *)(param_1 + 0x2e) = (short)puVar13;
          uVar12 = (uint)*(ushort *)(param_3 + 0x34) -
                   (iVar10 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          *(short *)(param_1 + 0x36) = (short)uVar12;
        }
        else {
          iVar6 = (int)(short)unaff_s4;
          uVar9 = 3;
          if (iVar6 < 1) {
            iVar5 = *(int *)(param_3 + 0x30);
            *(undefined1 *)(param_1 + 0x29) = 1;
            *(int *)(param_1 + 0x30) = (iVar5 + iVar6) * 0x10000;
            return 2;
          }
          uVar12 = 0;
          *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + iVar6) * 0x10000;
          puVar13 = unaff_s4;
        }
      }
      else {
        uVar9 = 0;
      }
      uVar8 = 3;
      if (uVar12 != uVar9) {
        if (uVar12 != 3) {
          while( true ) {
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = *puVar13;
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = puVar13[1];
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = puVar13[2];
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = puVar13[3];
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = puVar13[4];
            *(int *)(*(int *)(param_1 + 0xc0) + 0x40) =
                 (int)unaff_s4 + *(int *)((short)puVar13[5] * 4 + uVar7);
            if ((int)(uint)*(byte *)(iVar11 + 8) <= iVar5) break;
            iVar5 = iVar5 + 1;
            iVar6 = func_0x8007aae8();
            *(int *)(param_1 + 0xc4) = iVar6;
            puVar14 = puVar13 + 7;
            *(undefined2 *)(iVar6 + 6) = puVar13[6];
            puVar13 = puVar13 + 8;
            **(undefined2 **)(param_1 + 0xc4) = *puVar14;
            param_1 = param_1 + 4;
          }
          *(undefined2 *)(iVar11 + 0x54) = 0;
          *(undefined2 *)(iVar11 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch(*(undefined1 *)(iVar11 + 3)) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            return 0;
          }
        }
        uVar8 = func_0x8007a624(puVar13);
      }
      return uVar8;
    }
  }
  else {
    iVar5 = func_0x80083f50((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_1 + 0x7c);
    iVar6 = func_0x80083e80((int)*(short *)(param_1 + 0x56));
    iVar5 = (int)((((uint)*(ushort *)(param_1 + 0x2e) + (iVar5 * sVar1 >> 0xc)) -
                  ((uint)*(ushort *)(param_3 + 0x2c) + (uint)local_38)) * 0x10000) >> 0x10;
    iVar6 = (int)((((uint)*(ushort *)(param_1 + 0x36) - (iVar6 * *(short *)(param_1 + 0x7c) >> 0xc))
                  - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000) >> 0x10;
    uVar7 = func_0x80084080(iVar5 * iVar5 + iVar6 * iVar6);
    if ((int)(uVar7 & 0xffff) <=
        ((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
        (int)*(short *)(param_2 + 0x80)) {
      uVar8 = FUN_801117f0(*(undefined2 *)(param_2 + 0x84),
                           (uint)*(ushort *)(param_1 + 0x32) + (uint)*(ushort *)(param_1 + 0x7e));
      return uVar8;
    }
  }
  return 0;
}

