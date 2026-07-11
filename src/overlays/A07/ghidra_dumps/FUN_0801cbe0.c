// FUN_0801cbe0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801cbe0(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [2];
  undefined2 local_66;
  undefined2 local_62;
  undefined2 local_5e;
  undefined1 auStack_58 [2];
  undefined2 local_56;
  undefined2 local_52;
  undefined2 local_4e;
  undefined1 auStack_48 [2];
  undefined2 local_46;
  undefined2 local_42;
  undefined2 local_3e;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  undefined2 uStack_32;
  undefined2 local_2e;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined2 local_22;
  undefined2 local_1e;
  
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0007778c(param_1);
    uVar3 = _DAT_800bf860;
    if (DAT_800bfa29 != '\0') {
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 1) = 1;
    sVar1 = *(short *)(iVar5 + 0x40);
    if (sVar1 == 0xe0) goto LAB_0801cda0;
    if (sVar1 < 0xe1) {
      if (sVar1 == 0x9b) {
LAB_0801cde0:
        local_66 = 0x154a;
        local_62 = 0xf0c4;
        local_5e = 0x348c;
        func_0x0003116c(0x804,auStack_68,0xffffffec);
        halt_baddata();
      }
      if (0x9b < sVar1) {
        if (sVar1 != 200) {
          if (sVar1 < 0xc9) {
            if ((sVar1 != 0xaa) && (sVar1 != 0xb9)) {
              halt_baddata();
            }
            goto LAB_0801cde0;
          }
          if (sVar1 == 0xcd) {
            DAT_800bfa29 = 4;
            halt_baddata();
          }
          if (sVar1 != 0xdc) {
            halt_baddata();
          }
        }
        local_56 = 0x14c8;
        local_52 = 0xef16;
        local_4e = 0x34a8;
        func_0x0003116c(0x804,auStack_58,0xffffffec);
        halt_baddata();
      }
      if (sVar1 == 0x50) {
        DAT_800bfa29 = '\x02';
LAB_0801cda0:
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0xfa;
        func_0x0003116c(0x801,param_1 + 0x2c,0xffffffec);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0xfa;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x50 < sVar1) {
        if (sVar1 == 0x96) {
          DAT_800bfa29 = 3;
          halt_baddata();
        }
        if (sVar1 != 0x98) {
          halt_baddata();
        }
        goto LAB_0801cda0;
      }
    }
    else {
      if (sVar1 == 0x10e) {
LAB_0801cebc:
        local_26 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x2c);
        local_22 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x30);
        local_1e = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x34);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_28,0x800,8);
        local_26 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x2c);
        local_22 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x30);
        local_1e = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x34);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40),auStack_28,0xc00,8);
        local_26 = *(undefined2 *)(*(int *)(param_1 + 200) + 0x2c);
        local_22 = *(undefined2 *)(*(int *)(param_1 + 200) + 0x30);
        local_1e = *(undefined2 *)(*(int *)(param_1 + 200) + 0x34);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 200) + 0x40),auStack_28,0x800,8);
        halt_baddata();
      }
      if (sVar1 < 0x10f) {
        if (sVar1 != 0xeb) {
          if (sVar1 < 0xec) {
            if (sVar1 != 0xe1) {
              halt_baddata();
            }
            DAT_800bfa29 = 5;
            halt_baddata();
          }
          if (sVar1 != 0xf5) {
            if (sVar1 != 0xfa) {
              halt_baddata();
            }
            goto LAB_0801cebc;
          }
        }
        local_46 = 0x14c8;
        local_42 = 0xef16;
        local_3e = 0x34a8;
        func_0x0003116c(0x804,auStack_48,0xffffffec);
        local_36 = 0x14cd;
        uStack_32 = 0xf2e4;
        local_2e = 0x345c;
        func_0x0003116c(0x804,auStack_38,0xffffffec);
        halt_baddata();
      }
      if (sVar1 == 0x13b) goto LAB_0801cebc;
      if (sVar1 < 0x13c) {
        if (sVar1 != 0x114) {
          if (sVar1 != 0x121) {
            halt_baddata();
          }
          DAT_800bfa29 = 6;
          halt_baddata();
        }
        goto LAB_0801cda0;
      }
      if (sVar1 == 0x145) goto LAB_0801cebc;
      if (sVar1 != 0x158) {
        halt_baddata();
      }
      DAT_800bfa29 = '\a';
      *(undefined1 *)(param_1 + 6) = 1;
    }
    if (*(ushort *)(iVar5 + 0x40) - 0x14 < 0x182) {
      _DAT_800e8042 = *(short *)(iVar5 + 0x4e);
      _DAT_800e8046 = *(short *)(iVar5 + 0x50);
      _DAT_800e804a = *(short *)(iVar5 + 0x52);
      if (*(short *)(iVar5 + 0x40) != 0x195) {
        uVar6 = 0xf;
        if (*(short *)(iVar5 + 0x40) < 0xbf) {
          uVar6 = 7;
        }
        uVar4 = func_0x0009a450();
        uVar2 = (ushort)uVar6;
        sVar1 = (short)(uVar6 >> 1);
        _DAT_800e8042 = _DAT_800e8042 + (sVar1 - (uVar2 & uVar4));
        uVar4 = func_0x0009a450();
        _DAT_800e8046 = _DAT_800e8046 + (sVar1 - (uVar2 & uVar4));
        uVar4 = func_0x0009a450();
        _DAT_800e804a = _DAT_800e804a + (sVar1 - (uVar2 & uVar4));
        if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801d084 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6a84))();
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x000517f8(param_1);
  }
  return;
}

