// FUN_80108324

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108324(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint extraout_v1;
  undefined2 *extraout_v1_00;
  undefined2 *puVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *unaff_s0;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined8 uVar13;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  if ((_DAT_800bfe56 & 2) == 0) {
    uVar10 = 5;
    if (param_1 == 0) {
      puVar3 = &DAT_80138fd5;
      do {
        *puVar3 = 0;
        uVar10 = uVar10 - 1;
        puVar3 = puVar3 + -1;
      } while (-1 < (int)uVar10);
      *(undefined1 **)(unaff_s0 + 0x30) = puVar3;
      *(undefined4 *)(unaff_s0 + 0x34) = 0x39c30000;
      *(undefined2 *)(unaff_s0 + 0x56) = 0xc00;
      func_0x800416a8();
      func_0x80041718();
      func_0x80040d68();
      unaff_s0[0x70] = 2;
      unaff_s0[4] = unaff_s0[4] + '\x01';
      if (extraout_v1 == uVar10) {
        uVar12 = (uint)(byte)unaff_s0[3];
        uVar13 = CONCAT44(extraout_v1,uVar12);
        if (uVar12 == 0) {
          uVar13 = FUN_80123078();
        }
        else if (uVar12 == extraout_v1) {
          FUN_8012322c();
          if (unaff_s0[1] != '\0') {
            func_0x800518fc();
          }
          unaff_s0[0x2b] = 0;
          unaff_s0[0x29] = 0;
          goto LAB_80123638;
        }
        while( true ) {
          *(short *)((int)((ulonglong)uVar13 >> 0x20) + 2) = (short)uVar13;
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(unaff_s2 + 6);
          unaff_s3 = unaff_s3 + 1;
          uVar12 = uVar10 + 8;
          if (2 < unaff_s3) break;
          if (unaff_s5 == 0) {
            func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4));
            puVar5 = *(undefined2 **)(unaff_s0 + 0xc4);
            uVar2 = *(undefined2 *)(uVar10 + 10);
            unaff_s0 = unaff_s0 + 4;
            goto LAB_801235c0;
          }
          func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4));
          **(undefined2 **)(unaff_s0 + 0xc4) = *(undefined2 *)(unaff_s2 + 10);
          uVar13 = CONCAT44(*(undefined4 *)(unaff_s0 + 0xc4),(uint)*(ushort *)(unaff_s2 + 0xc));
          unaff_s0 = unaff_s0 + 4;
          uVar10 = uVar12;
          unaff_s2 = unaff_s2 + 8;
        }
LAB_80123638:
        *(char *)(unaff_s6 + 0x5e) = (char)unaff_s5;
        return;
      }
      if ((int)extraout_v1 < 2) {
        if (extraout_v1 != 0) goto LAB_80123638;
        *(undefined4 *)(unaff_s0 + 0x3c) = _DAT_800ecf90;
        func_0x80040cdc();
        if (unaff_s0[3] == '\0') {
          unaff_s0[0x7b] = (char)uVar10;
          _DAT_00000040 = 0xe53e0000;
          _DAT_00000044 = 0x23400000;
          DAT_00000015 = DAT_00000015 + '\x01';
          func_0x8007778c(0x10);
          return;
        }
        unaff_s0[0x7b] = 0;
        uVar13 = func_0x800519e0();
        puVar5 = (undefined2 *)((ulonglong)uVar13 >> 0x20);
        if ((int)uVar13 == 0) {
          unaff_s0[0xb] = 0x40;
          *unaff_s0 = 9;
          *(undefined2 *)(unaff_s0 + 0x80) = 0xaa;
          *(undefined2 *)(unaff_s0 + 0x82) = 0x154;
          *(undefined2 *)(unaff_s0 + 0x84) = 0x90;
          *(undefined2 *)(unaff_s0 + 0x86) = 0xf0;
          bVar1 = unaff_s0[3];
          uVar12 = (uint)bVar1;
          unaff_s0[0x2b] = 0;
          unaff_s0[0x29] = 0;
          *(undefined2 *)(unaff_s0 + 0x58) = 0;
          *(undefined2 *)(unaff_s0 + 0x56) = 0;
          *(undefined2 *)(unaff_s0 + 0x54) = 0;
          unaff_s0[4] = unaff_s0[4] + '\x01';
          if (uVar12 == 0) {
            *(undefined4 *)(unaff_s0 + 0x2c) = 0x316a0000;
            *(undefined4 *)(unaff_s0 + 0x30) = 0xef520000;
            *(undefined4 *)(unaff_s0 + 0x34) = 0x3d540000;
            unaff_s0[0x2a] = 0xf;
            *(undefined2 *)(unaff_s0 + 0x56) = 0x400;
            *(undefined2 *)(unaff_s0 + 0x40) = 0;
            uVar2 = func_0x80051b04(*(undefined4 *)(unaff_s0 + ((byte)unaff_s0[9] - 1) * 4 + 0xc0),1
                                    ,0x12);
            puVar5 = extraout_v1_00;
          }
          else {
            uVar2 = 1;
            if (uVar12 == 1) {
              uVar13 = func_0x8007a980(1,5,0);
              puVar5 = (undefined2 *)((ulonglong)uVar13 >> 0x20);
              iVar11 = (int)uVar13;
              if (iVar11 != 0) {
                *(undefined1 *)(iVar11 + 2) = 3;
                *(undefined2 *)(iVar11 + 0x2e) = 0x2fee;
                *(undefined2 *)(iVar11 + 0x32) = 0xef98;
                *(undefined2 *)(iVar11 + 0x36) = 0x3f16;
                *(undefined4 *)(iVar11 + 0x1c) = 0x80112100;
                *(byte *)(iVar11 + 3) = bVar1;
                *(byte *)(iVar11 + 0x28) = *(byte *)(iVar11 + 0x28) | 0x80;
                *unaff_s0 = 2;
                *(undefined4 *)(unaff_s0 + 0x2c) = 0x30700000;
                *(undefined4 *)(unaff_s0 + 0x30) = 0xef520000;
                *(undefined4 *)(unaff_s0 + 0x34) = 0x3a340000;
                unaff_s0[0x2a] = 0xf;
                *(undefined2 *)(unaff_s0 + 0x56) = 0xc00;
                uVar4 = FUN_8012b654();
                *(undefined4 *)(unaff_s0 + 0x14) = uVar4;
                func_0x80041718();
                goto LAB_80123638;
              }
              uVar2 = 2;
              unaff_s0[4] = 2;
            }
          }
LAB_801235c0:
          *puVar5 = uVar2;
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(uVar12 + 4);
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(uVar12 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (extraout_v1 != 2) {
        if (extraout_v1 != 3) goto LAB_80123638;
        func_0x8007a624();
      }
      return;
    }
    if (DAT_800bf873 == '\0') {
      piVar9 = (int *)&DAT_801352cc;
      iVar11 = 0;
      puVar5 = (undefined2 *)&DAT_801352d6;
      do {
        pbVar8 = (byte *)(iVar11 + -0x7fec7030);
        bVar1 = *pbVar8;
        *pbVar8 = bVar1 - 1;
        if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
          pcVar6 = (char *)*piVar9;
          if (*pcVar6 == -1) {
            *piVar9 = (int)pcVar6 - (uint)(byte)pcVar6[1];
          }
          iVar7 = *(int *)(puVar5 + -3);
          bVar1 = *(byte *)*piVar9;
          *pbVar8 = ((byte *)*piVar9)[1];
          local_20 = puVar5[-1];
          local_1e = *puVar5;
          local_1c = 0x10;
          local_1a = 1;
          func_0x80081218(&local_20,iVar7 + (uint)bVar1 * 0x20);
          *piVar9 = *piVar9 + 2;
        }
        iVar11 = iVar11 + 1;
        puVar5 = puVar5 + 6;
        piVar9 = piVar9 + 3;
      } while (iVar11 < 6);
    }
  }
  return;
}

