// FUN_8010aba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010aba4(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  byte extraout_v1;
  byte bVar5;
  int iVar6;
  
  bVar5 = *(byte *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  if (bVar5 == 1) {
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x44) + *(short *)(iVar6 + 0x32) + *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - *(short *)(param_1 + 0x42);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + 0x2e);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar6 + 0x36);
    func_0x8007778c(param_1);
    iVar4 = func_0x80077b5c(param_1);
    sVar2 = 3;
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 4) = 3;
      bVar5 = extraout_v1;
      goto LAB_80113c9c;
    }
  }
  else {
    if (bVar5 < 2) {
      sVar2 = 0;
      if (bVar5 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        uVar1 = _DAT_800ecf80;
        *(undefined1 *)(param_1 + 0xb) = 0x10;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined1 *)(param_1 + 8) = 0xf0;
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x3c) = uVar1;
        func_0x80077b38(param_1,0x80139294,1);
        bVar5 = *(byte *)(iVar6 + 2);
        if (bVar5 == 0x19) {
          uVar3 = 0xff56;
          if (*(char *)(iVar6 + 3) == '\0') {
            FUN_80113c24();
            return;
          }
        }
        else {
          if (*(char *)(iVar6 + 3) != '\x01') {
            *(undefined2 *)(param_1 + 0x40) = 0xff80;
            sVar2 = 2;
            *(undefined2 *)(param_1 + 0x42) = 2;
            goto LAB_80113c9c;
          }
          uVar3 = 0xff60;
        }
        *(undefined2 *)(param_1 + 0x40) = uVar3;
        sVar2 = 4;
        *(undefined2 *)(param_1 + 0x42) = 4;
      }
LAB_80113c9c:
      *(short *)(iVar6 + 0x40) = sVar2 + 0x5a;
      *(byte *)(iVar6 + 6) = bVar5 + 1;
      FUN_8011cca0();
      return;
    }
    if (bVar5 < 4) {
      FUN_80113c94();
      return;
    }
  }
  return;
}

