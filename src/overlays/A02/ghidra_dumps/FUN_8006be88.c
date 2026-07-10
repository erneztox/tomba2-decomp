// FUN_8006be88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006be88(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  if (*(byte *)(param_1 + 0x2b) < 2) {
    iVar2 = FUN_800495dc(param_1,0,0x5a);
    if ((iVar2 < 1) && (iVar3 = FUN_800495dc(param_1,0,0), iVar3 < 1)) {
      if (((iVar2 == -1) || (iVar3 == -1)) &&
         (((_DAT_1f8001a6 & 0xf00) == 0x100 || ((_DAT_1f8001a6 & 0xf00) == 0x200)))) {
        *(undefined1 *)(param_1 + 0x2b) = 3;
        if (DAT_800bf870 == '\0') {
          func_0x8010caec(param_1);
        }
        else if (DAT_800bf870 == '\x04') {
          func_0x801162e8(param_1);
        }
        else if (DAT_800bf870 == '\x06') {
          func_0x801147cc(param_1);
        }
        else if (DAT_800bf870 == '\b') {
          func_0x8011370c(param_1);
        }
        else if (DAT_800bf870 == '\x0e') {
          func_0x8010b4f4(param_1);
        }
      }
    }
    else {
      DAT_800e807e = 4;
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      *(undefined1 *)(param_1 + 0x2b) = 3;
      local_22 = *(short *)(param_1 + 0x32) + 0x5a;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      FUN_8003116c(*(byte *)(param_1 + 2) + 0xc,auStack_28,0xffffffb0);
      FUN_80031470(2,auStack_28,*(undefined1 *)(param_1 + 0x5e),param_1 + 0x68);
      FUN_80074590(0x32,0,0);
      iVar2 = 0;
      sVar4 = _DAT_800e7ed6;
      if (*(char *)(param_1 + 0x5e) != '\0') {
        do {
          iVar3 = FUN_8007ab20();
          if (iVar3 == 0) {
            return;
          }
          *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(short *)(iVar3 + 0x32) = *(short *)(param_1 + 0x32) + 0x5a;
          uVar1 = *(undefined2 *)(param_1 + 0x36);
          *(code **)(iVar3 + 0x1c) = FUN_8006c608;
          *(undefined1 *)(iVar3 + 2) = 10;
          *(char *)(iVar3 + 3) = (char)iVar2;
          *(undefined2 *)(iVar3 + 0x36) = uVar1;
          if (*(char *)(param_1 + 2) == '\a') {
            *(undefined1 *)(iVar3 + 0x5e) = 0;
          }
          else {
            *(undefined1 *)(iVar3 + 0x5e) = 1;
          }
          *(short *)(iVar3 + 0x56) = sVar4;
          iVar2 = iVar2 + 1;
          sVar4 = sVar4 + 0x800;
        } while (iVar2 < 2);
      }
    }
  }
  return;
}

