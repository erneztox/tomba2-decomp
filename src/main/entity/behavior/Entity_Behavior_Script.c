/**
 * @brief Entity script behavior: entity[4]=1, runs bytecode
 * @note Original: func_800300D8 at 0x800300D8
 */
// Entity_Behavior_Script



void FUN_800300d8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  puVar6 = (ushort *)(param_1 + 0x50);
  if (bVar1 == 1) {
LAB_80030174:
    uVar3 = *puVar6;
    *puVar6 = uVar3 - 6;
    if ((int)((uint)(ushort)(uVar3 - 6) << 0x10) < 1) {
      if ((6 < DAT_800e7e7c) && (iVar4 = FUN_8007a980(0,6,1), iVar4 != 0)) {
        if (param_1 != -0x2c) {
          *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
          *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x30);
        }
        *(undefined2 *)(iVar4 + 0x32) = 0xffe2;
        FUN_80028e10(iVar4,0x34);
      }
      FUN_8002343c(iVar5);
      *(undefined1 *)(param_1 + 4) = 2;
      *puVar6 = 0;
LAB_80030214:
      uVar3 = *puVar6;
      *puVar6 = uVar3 + 0x88;
      if (0xfff < (short)(uVar3 + 0x88)) goto LAB_80030240;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar5 + 0x2e);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x32);
      uVar2 = *(undefined2 *)(iVar5 + 0x36);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4c) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x3c;
      *(undefined2 *)(param_1 + 0x30) = uVar2;
      goto LAB_80030174;
    }
    if (bVar1 == 2) goto LAB_80030214;
    if (bVar1 != 3) {
      return;
    }
LAB_80030240:
    FUN_8007a624(param_1);
  }
  return;
}
