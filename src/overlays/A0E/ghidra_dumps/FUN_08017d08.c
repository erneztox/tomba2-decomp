// FUN_08017d08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017d08(int param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 in_zero;
  undefined4 extraout_at;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  uint *puVar17;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  puVar17 = _DAT_800bf544;
  bVar5 = (byte)(_DAT_1f80017c >> 1);
  cVar3 = bVar5 * '@';
  cVar4 = (bVar5 & 0xc) * '\x10';
  func_0x00085480(param_1 + 0x48,0x1f800000);
  func_0x00084110(&DAT_1f8000f8,0x1f800000,0x1f800000);
  func_0x00084220(param_1 + 0x2c,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  setCopControlWord(2,0,_DAT_1f800000);
  setCopControlWord(2,0x800,_DAT_1f800004);
  setCopControlWord(2,0x1000,_DAT_1f800008);
  setCopControlWord(2,0x1800,_DAT_1f80000c);
  setCopControlWord(2,0x2000,_DAT_1f800010);
  setCopControlWord(2,0x2800,_DAT_1f800014);
  setCopControlWord(2,0x3000,_DAT_1f800018);
  setCopControlWord(2,0x3800,_DAT_1f80001c);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar10 = -0x1c20;
  cVar14 = cVar3 + ' ';
  cVar13 = cVar4 + '>';
  _DAT_1f800090 = 0;
  do {
    bVar16 = false;
    iVar11 = -6000;
    puVar9 = (undefined1 *)((int)puVar17 + 7);
    do {
      sVar1 = (short)iVar11;
      sVar2 = (short)iVar10;
      puVar8 = &local_40;
      local_40 = CONCAT22(sVar2 + -0x960,sVar1 + 0x4b0);
      local_48 = CONCAT22(sVar2 + -0x960,sVar1);
      local_30 = CONCAT22(sVar2,sVar1 + 0x4b0);
      local_2c = local_2c & 0xffff0000;
      local_34 = local_34 & 0xffff0000;
      local_3c = local_3c & 0xffff0000;
      local_44 = local_44 & 0xffff0000;
      setCopReg(2,in_zero,local_48);
      setCopReg(2,extraout_at,local_44);
      setCopReg(2,&local_48,local_40);
      setCopReg(2,&local_38,local_3c);
      setCopReg(2,puVar8,CONCAT22(sVar2,sVar1));
      setCopReg(2,puVar9,local_34);
      copFunction(2,0x280030);
      iVar15 = getCopControlWord(2,0xf800);
      if (-1 < iVar15) {
        uVar12 = getCopReg(2,0xc);
        puVar17[2] = uVar12;
        uVar12 = getCopReg(2,0xd);
        puVar17[5] = uVar12;
        uVar12 = getCopReg(2,0xe);
        puVar17[8] = uVar12;
        setCopReg(2,in_zero,local_30);
        setCopReg(2,extraout_at,local_2c);
        *(undefined2 *)(puVar9 + 0x13) = 0x2d;
        copFunction(2,0x180001);
        iVar15 = getCopControlWord(2,0xf800);
        if (-1 < iVar15) {
          uVar12 = getCopReg(2,0xe);
          puVar17[0xb] = uVar12;
          if (((((*(ushort *)(puVar9 + 1) < 0x141) || (*(ushort *)(puVar9 + 0xd) < 0x141)) ||
               (*(ushort *)(puVar9 + 0x19) < 0x141)) || (*(ushort *)(puVar9 + 0x25) < 0x141)) &&
             (((*(ushort *)(puVar9 + 3) < 0xf1 || (*(ushort *)(puVar9 + 0xf) < 0xf1)) ||
              ((*(ushort *)(puVar9 + 0x1b) < 0xf1 || (*(ushort *)(puVar9 + 0x27) < 0xf1)))))) {
            *(undefined2 *)(puVar9 + 7) = 0x3f3e;
            copFunction(2,0x168002e);
            iVar15 = getCopReg(2,7);
            if (1 < _DAT_800bf850) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            local_24 = iVar15 + -0x50;
            if (iVar15 - 0x29U < 0x2b) {
              local_24 = 5;
            }
            local_24 = (local_24 >> (local_24 >> 10 & 0x1fU)) + (local_24 >> 10) * 0x200;
            if (local_24 < 4) {
              local_24 = -1;
            }
            if (0x7ff < local_24) {
              local_24 = 0x7ff;
            }
            if (-1 < local_24) {
              if (0 < iVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              local_24 = local_24 + 0x1e;
              if (0x7fc < local_24) {
                local_24 = 0x7fd;
              }
              if (bVar16) {
                puVar9[0x1d] = cVar3;
                puVar9[5] = cVar3;
                puVar9[0x29] = cVar14;
                puVar9[0x11] = cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar9[0x1d] = cVar14;
              puVar9[5] = cVar14;
              puVar9[0x29] = cVar3 + '?';
              puVar9[0x11] = cVar3 + '?';
              if (iVar10 < 1) {
                puVar9[0x12] = cVar4;
                puVar9[6] = cVar4;
                puVar9[0x2a] = cVar13;
                puVar9[0x1e] = cVar13;
                *(undefined4 *)(puVar9 + -3) = 0x808080;
                *(undefined4 *)(puVar9 + 9) = 0x808080;
                if (iVar10 == 0) {
                  *(undefined4 *)(puVar9 + 0x15) = 0xdfdfdf;
                  *(undefined4 *)(puVar9 + 0x21) = 0xdfdfdf;
                }
                else {
                  *(undefined4 *)(puVar9 + 0x15) = 0x808080;
                  *(undefined4 *)(puVar9 + 0x21) = 0x808080;
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar9[0x2a] = cVar4;
              puVar9[0x1e] = cVar4;
              puVar9[0x12] = cVar13;
              puVar9[6] = cVar13;
              if (iVar10 == 0x960) {
                *(undefined4 *)(puVar9 + -3) = 0x808080;
                *(undefined4 *)(puVar9 + 9) = 0x808080;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *(undefined4 *)(puVar9 + -3) = 0x201000;
              *(undefined4 *)(puVar9 + 9) = 0x201000;
              *(undefined4 *)(puVar9 + 0x15) = 0x201000;
              *(undefined4 *)(puVar9 + 0x21) = 0x201000;
              *puVar9 = 0x3c;
              puVar8 = (uint *)(_DAT_800ed8c8 + local_24 * 4);
              *puVar17 = *puVar8 | 0xc000000;
              *puVar8 = (uint)puVar17;
              puVar9 = puVar9 + 0x34;
              puVar17 = puVar17 + 0xd;
            }
          }
        }
      }
      iVar11 = iVar11 + 0x4b0;
      bVar16 = (bool)(bVar16 ^ 1);
    } while (iVar11 < 6000);
    iVar10 = iVar10 + 0x960;
    if (0x1c20 < iVar10) {
      bVar16 = false;
      uVar12 = 0xffffe890;
      cVar13 = cVar3 + ' ';
      puVar9 = (undefined1 *)((int)puVar17 + 7);
      do {
        uVar6 = (short)uVar12 + 0x4b0;
        local_2c = CONCAT22(local_2c._2_2_,0x4b0);
        local_34 = CONCAT22(local_34._2_2_,0x4b0);
        local_40 = (uint)uVar6;
        local_48 = uVar12 & 0xffff;
        local_30 = (uint)uVar6;
        local_38 = uVar12 & 0xffff;
        setCopReg(2,in_zero,local_48);
        setCopReg(2,extraout_at,local_44);
        setCopReg(2,&local_48,local_40);
        setCopReg(2,&local_38,local_3c);
        setCopReg(2,puVar8,local_38);
        setCopReg(2,puVar9,local_34);
        copFunction(2,0x280030);
        local_28 = getCopControlWord(2,0xf800);
        if (-1 < local_28) {
          uVar7 = getCopReg(2,0xc);
          puVar17[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          puVar17[5] = uVar7;
          uVar7 = getCopReg(2,0xe);
          puVar17[8] = uVar7;
          setCopReg(2,in_zero,local_30);
          setCopReg(2,extraout_at,local_2c);
          *(undefined2 *)(puVar9 + 0x13) = 0x2d;
          copFunction(2,0x180001);
          local_28 = getCopControlWord(2,0xf800);
          if (-1 < local_28) {
            uVar7 = getCopReg(2,0xe);
            puVar17[0xb] = uVar7;
            if ((((*(ushort *)(puVar9 + 1) < 0x141) || (*(ushort *)(puVar9 + 0xd) < 0x141)) ||
                ((*(ushort *)(puVar9 + 0x19) < 0x141 || (*(ushort *)(puVar9 + 0x25) < 0x141)))) &&
               ((((*(ushort *)(puVar9 + 3) < 0xf1 || (*(ushort *)(puVar9 + 0xf) < 0xf1)) ||
                 (*(ushort *)(puVar9 + 0x1b) < 0xf1)) || (*(ushort *)(puVar9 + 0x27) < 0xf1)))) {
              *(undefined2 *)(puVar9 + 7) = 0x3f3e;
              copFunction(2,0x168002e);
              iVar10 = getCopReg(2,7);
              if (1 < _DAT_800bf850) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar7 = iVar10 + -0x50 >> 10;
              local_24 = (iVar10 + -0x50 >> (uVar7 & 0x1f)) + uVar7 * 0x200;
              if (0x7fb < local_24 - 4U) {
                local_24 = -1;
              }
              if (-1 < local_24) {
                if (bVar16) {
                  puVar9[0x1d] = cVar3;
                  puVar9[5] = cVar3;
                  puVar9[0x29] = cVar13;
                  puVar9[0x11] = cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                puVar9[0x1d] = cVar13;
                puVar9[5] = cVar13;
                puVar9[0x29] = cVar3 + '?';
                puVar9[0x11] = cVar3 + '?';
                puVar9[0x2a] = cVar4 + '>';
                puVar9[0x1e] = cVar4 + '>';
                puVar9[0x12] = cVar4;
                puVar9[6] = cVar4;
                *(undefined4 *)(puVar9 + -3) = 0x808080;
                *(undefined4 *)(puVar9 + 9) = 0x808080;
                *(undefined4 *)(puVar9 + 0x15) = 0;
                *(undefined4 *)(puVar9 + 0x21) = 0;
                *puVar9 = 0x3e;
                puVar8 = (uint *)(_DAT_800ed8c8 + local_24 * 4);
                *puVar17 = *puVar8 | 0xc000000;
                *puVar8 = (uint)puVar17;
                puVar9 = puVar9 + 0x34;
                puVar17 = puVar17 + 0xd;
              }
            }
          }
        }
        uVar12 = uVar12 + 0x4b0;
        bVar16 = (bool)(bVar16 ^ 1);
      } while ((int)uVar12 < 6000);
      _DAT_800bf544 = puVar17;
      func_0x001104d0(param_1);
      return;
    }
  } while( true );
}

