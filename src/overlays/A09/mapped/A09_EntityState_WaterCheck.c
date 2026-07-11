// A09_EntityState_WaterCheck - Entity state: water/surface collision check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_EntityState_WaterCheck(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
        }
        else if (*(char *)(param_1 + 5) != '\x01') {
          halt_baddata();
        }
        iVar3 = *(int *)(param_1 + 0x50) + -0x10;
        *(int *)(param_1 + 0x50) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        bVar2 = *(char *)(param_1 + 6) + 1;
        *(byte *)(param_1 + 6) = bVar2;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x10;
        if (0x10 < bVar2) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x100;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0x78;
  }
  if ((uint)_DAT_1f80017c % 0x2d == 0) {
    iVar3 = func_0x0009a450();
    func_0x00074590(0x38,(int)*(char *)((iVar3 >> 9 & 6U) + 0x80109070),0);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x8010e548;
  }
  iVar3 = func_0x00083f50(_DAT_1f80017c >> 7);
  uVar1 = _DAT_1f80017c >> 4;
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + (short)(iVar3 >> 5);
  iVar3 = func_0x00083f50(uVar1);
  uVar4 = (uint)_DAT_1f80017c;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + (short)(iVar3 >> 7);
  iVar3 = func_0x00083f50(uVar4 << 1);
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + (short)(iVar3 >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

