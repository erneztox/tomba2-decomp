// FUN_8011dae4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011dae4(int *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int unaff_s0;
  int unaff_s1;
  undefined2 *puVar9;
  int unaff_s2;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_f0;
  
  uVar3 = 3;
  if (*(char *)((int)param_1 + 3) != '\x02') {
    *(undefined1 *)(param_1 + 2) = 3;
    if (_DAT_800ed098 < (short)(ushort)*(byte *)(param_1 + 2)) {
      *(undefined1 *)(param_1 + 1) = 3;
      puVar5 = (undefined4 *)FUN_80126c00();
      return puVar5;
    }
    *(byte *)((int)param_1 + 9) = *(byte *)(param_1 + 2);
    *(undefined1 *)((int)param_1 + 0xd) = 4;
    *(undefined1 *)param_1 = 1;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    *(undefined1 *)((int)param_1 + 0x2b) = 0;
    *(undefined1 *)((int)param_1 + 0x5e) = 0;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(char *)(param_1 + 1) = (char)param_1[1] + '\x01';
    bVar1 = *(byte *)((uint)*(byte *)((int)param_1 + 3) * 2 + -0x7fec8a1c);
    puVar5 = (undefined4 *)(uint)bVar1;
    iVar6 = 0;
    *(byte *)((int)param_1 + 0x2a) = bVar1;
    if ((char)param_1[2] != '\0') {
      puVar9 = (undefined2 *)&DAT_801375c4;
      piVar8 = param_1;
      do {
        iVar4 = func_0x8007aae8();
        piVar8[0x30] = iVar4;
        *(undefined2 *)(iVar4 + 6) = *puVar9;
        *(undefined2 *)piVar8[0x30] = puVar9[1];
        *(undefined2 *)(piVar8[0x30] + 2) = puVar9[2];
        *(undefined2 *)(piVar8[0x30] + 4) = puVar9[3];
        *(undefined2 *)(piVar8[0x30] + 8) = 0;
        *(undefined2 *)(piVar8[0x30] + 10) = 0;
        *(undefined2 *)(piVar8[0x30] + 0xc) = 0;
        func_0x80051b04(piVar8[0x30],0xc,(int)(short)puVar9[4]);
        if (iVar6 == 2) {
          *(undefined1 *)(param_1[0x32] + 0x3f) = 0x40;
          puVar5 = (undefined4 *)FUN_80126be4();
          return puVar5;
        }
        *(undefined1 *)(piVar8[0x30] + 0x3f) = 0;
        puVar9 = puVar9 + 5;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 1;
        puVar5 = (undefined4 *)0x0;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 2));
    }
    *(undefined2 *)(param_1 + 0x18) = 0;
    return puVar5;
  }
  *(undefined1 *)(param_1 + 2) = 2;
  piVar8 = param_1;
  while (iVar6 = unaff_s1, iVar4 = unaff_s6, puVar5 = unaff_s7, 0xef < uVar3) {
    do {
      do {
        do {
          unaff_s1 = iVar6 + 0x24;
          unaff_s7 = puVar5 + 9;
          unaff_s6 = iVar4 + -1;
          if (iVar4 == 0) {
            _DAT_800bf544 = unaff_s2;
            return unaff_s7;
          }
          setCopReg(2,in_zero,puVar5[0xd]);
          setCopReg(2,iVar4,puVar5[0xf]);
          setCopReg(2,0x800,puVar5[0xe]);
          setCopReg(2,piVar8,puVar5[0x10]);
          setCopReg(2,0x1800,(uint)puVar5[0xe] >> 0x10);
          setCopReg(2,param_2,puVar5[0x11]);
          *(undefined4 *)(unaff_s0 + -0x21) = *unaff_s7;
          copFunction(2,0x280030);
          *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(iVar6 + 0x10);
          piVar8 = *(int **)(iVar6 + 8);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          iVar6 = unaff_s1;
          iVar4 = unaff_s6;
          puVar5 = unaff_s7;
        } while (_DAT_1f800000 < 0);
        copFunction(2,0x1400006);
        *(uint *)(unaff_s0 + -0x15) = (uint)piVar8 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
      } while (_DAT_1f800000 < 1);
      uVar2 = getCopReg(2,0xc);
      *(undefined4 *)(unaff_s2 + 8) = uVar2;
      uVar2 = getCopReg(2,0xd);
      *(undefined4 *)(unaff_s2 + 0x14) = uVar2;
      uVar2 = getCopReg(2,0xe);
      *(undefined4 *)(unaff_s2 + 0x20) = uVar2;
    } while (((0x13f < *(ushort *)(unaff_s0 + -0x1d)) && (0x13f < *(ushort *)(unaff_s0 + -0x11))) &&
            (0x13f < *(ushort *)(unaff_s0 + -5)));
    if ((*(ushort *)(unaff_s0 + -0x1b) < 0xf0) || (*(ushort *)(unaff_s0 + -0xf) < 0xf0)) break;
    uVar3 = *(ushort *)(unaff_s0 + -3);
  }
  *(uint *)(unaff_s0 + -9) = ((uint)piVar8 & 0xf0f0f) << 4;
  _DAT_1f800084 = getCopReg(2,0x11);
  _DAT_1f800088 = getCopReg(2,0x12);
  _DAT_1f80008c = getCopReg(2,0x13);
  uVar7 = (uint)piVar8 >> 0x18 & 3;
  iVar6 = _DAT_1f80008c >> 2;
  if (uVar7 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (uVar7 != 2) {
      puVar5 = (undefined4 *)FUN_8012fb58();
      return puVar5;
    }
    if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f800088 < _DAT_1f80008c) {
      iVar6 = _DAT_1f800088 >> 2;
    }
  }
  *param_1 = iVar6;
  *(undefined4 *)(unaff_s0 + 0x393f) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

