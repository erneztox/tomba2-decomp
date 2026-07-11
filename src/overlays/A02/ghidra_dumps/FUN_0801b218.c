// FUN_0801b218

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b218(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    uVar5 = (uint)*(byte *)(param_1 + 3);
    if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0801b500 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + -0x7fef6b7c))();
      return;
    }
    if ((uVar5 == 7) && ((_DAT_800bfe56 & 4) == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00076d68(param_1);
      func_0x000518fc(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x000517f8(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fed65cc)
      ;
      if ((short)(ushort)*(byte *)(param_1 + 8) <= _DAT_800ed098) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        iVar3 = _DAT_800ecf88;
        if (*(char *)(param_1 + 3) == '\a') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        sVar2 = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fed65a8);
        iVar8 = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(short *)(param_1 + 0x56) =
             (short)((ulonglong)((longlong)(sVar2 * 0x1000) * 0xb60b60b7) >> 0x28) - (sVar2 >> 0xf);
        puVar6 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fed6610);
        iVar7 = param_1;
        if (*(char *)(param_1 + 8) != '\0') {
          do {
            iVar8 = iVar8 + 1;
            iVar4 = func_0x0007aae8();
            *(int *)(iVar7 + 0xc0) = iVar4;
            *(undefined2 *)(iVar4 + 6) = *puVar6;
            **(undefined2 **)(iVar7 + 0xc0) = puVar6[1];
            *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 2) = puVar6[2];
            *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 4) = puVar6[3];
            *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 8) = puVar6[4];
            *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 10) = puVar6[5];
            *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 0xc) = puVar6[6];
            sVar2 = puVar6[7];
            *(int *)(*(int *)(iVar7 + 0xc0) + 0x40) = iVar3 + *(int *)(sVar2 * 4 + iVar3 + 4);
            puVar6 = puVar6 + 8;
            *(short *)(*(int *)(iVar7 + 0xc0) + 0x38) = sVar2;
            iVar7 = iVar7 + 4;
          } while (iVar8 < (int)(uint)*(byte *)(param_1 + 8));
        }
        if (7 < *(byte *)(param_1 + 3)) {
          return;
        }
                    /* WARNING: Could not emulate address calculation at 0x0801b44c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6b9c))();
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

