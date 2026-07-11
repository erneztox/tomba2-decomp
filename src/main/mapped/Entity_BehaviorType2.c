/**
 * @brief Entity behavior type variant 2: entity[4]=1 state dispatch
 * @note Original: func_800308C0 at 0x800308C0
 */
// Entity_BehaviorType2



void FUN_800308c0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 4;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 6) = 0x10;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar5 + 0x2e);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x32);
    uVar2 = *(undefined2 *)(iVar5 + 0x36);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x30) = uVar2;
  }
  cVar3 = *(char *)(param_1 + 5) + -1;
  *(char *)(param_1 + 5) = cVar3;
  if (cVar3 == '\0') {
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
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar5 = FUN_8002b278(param_1);
    if (iVar5 != 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}
