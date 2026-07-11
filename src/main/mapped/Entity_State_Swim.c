/**
 * @brief Entity swim state: entity[6] state machine, water movement
 * @note Original: func_80061A7C at 0x80061A7C
 */
// Entity_State_Swim



void FUN_80061a7c(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  
  FUN_80076d68();
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    FUN_8002f514(6,0);
    FUN_80074590(0x37,0,0);
    *(undefined2 *)(param_1 + 0x40) = 10;
    param_1[6] = param_1[6] + '\x01';
    *(ushort *)(param_1 + 0x42) = (ushort)(byte)(&DAT_800a4550)[*(ushort *)(param_1 + 0x17e) & 0xf];
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return;
    }
    DAT_800bf809 = 1;
    *param_1 = 7;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0x72,4);
    cVar2 = param_1[6];
    uVar5 = 0x19;
LAB_80061b9c:
    *(undefined2 *)(param_1 + 0x40) = uVar5;
    param_1[6] = cVar2 + '\x01';
  }
  else {
    if (bVar1 == 2) {
      sVar3 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar3 + -1;
      if (sVar3 != 1) {
        return;
      }
      iVar4 = FUN_800248d0(param_1);
      uVar5 = 0x46;
      if (iVar4 != 0) {
        cVar2 = param_1[6];
        goto LAB_80061b9c;
      }
    }
    else {
      if (bVar1 != 3) {
        return;
      }
      if (((*(ushort *)(param_1 + 0x42) & 1) != 0) && (DAT_800bf8eb == '\0')) {
        DAT_800bf87e = DAT_800bf87e + -1;
      }
      if (*(short *)(param_1 + 0x42) != 0) {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
      }
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        return;
      }
      if (*(short *)(param_1 + 0x42) != 0) {
        return;
      }
    }
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x172) = 0x14;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_80054d14(param_1,2,5);
    DAT_800bf809 = 0;
  }
  return;
}
