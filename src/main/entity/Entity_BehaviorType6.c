/**
 * @brief Entity behavior type variant 6: entity[4]=1, type check
 * @note Original: func_80080424 at 0x80080424
 */
// Entity_BehaviorType6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80080424(undefined1 *param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar2 = param_1[4];
  bVar1 = false;
  if (bVar2 == 1) {
    if (DAT_1f80027a != '\0') {
      param_1[0x29] = 0;
      FUN_8007778c(param_1);
      return;
    }
    bVar2 = param_1[6];
    iVar5 = *(ushort *)(param_1 + 0x40) - 1;
    *(short *)(param_1 + 0x40) = (short)iVar5;
    if (bVar2 == 1) {
      bVar1 = (_DAT_1f80017c & 3) != 0;
      if (iVar5 * 0x10000 >> 0x10 < 0x1f) {
        param_1[6] = 2;
      }
    }
    else if (bVar2 < 2) {
      if ((bVar2 == 0) && (bVar1 = true, iVar5 * 0x10000 >> 0x10 < 0x5b)) {
        param_1[6] = 1;
      }
    }
    else if ((bVar2 == 2) && (bVar1 = (_DAT_1f80017c & 1) != 0, iVar5 * 0x10000 < 1)) {
      param_1[4] = 3;
      *param_1 = 2;
    }
    if (bVar1) {
      FUN_8007778c(param_1);
    }
    if (param_1[3] != '\x01') {
      if (param_1[3] != '\x02') {
        param_1[0x29] = 0;
        return;
      }
      func_0x8012d8f4(param_1);
      param_1[0x29] = 0;
      return;
    }
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (param_1[0x29] == '\0') {
      iVar5 = FUN_80049250(param_1,0,0x32);
    }
    else {
      iVar5 = 1;
    }
    if (iVar5 == 1) {
      *(undefined2 *)(param_1 + 0x4a) = 0;
    }
    else if (0 < *(short *)(param_1 + 0x32)) {
      param_1[4] = 3;
      *param_1 = 2;
    }
    if (0x2000 < *(short *)(param_1 + 0x4a)) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2000;
    }
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        iVar5 = FUN_80040b48(0x81);
        if (-1 < iVar5) {
          FUN_8004d4c4(0x76,1);
          FUN_8004b0d8(param_1);
        }
        param_1[4] = 3;
        return;
      }
      if (bVar2 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    param_1[4] = 1;
    uVar4 = _DAT_800ecf58;
    param_1[0xd] = 0;
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x162);
    param_1[0x47] = 0;
    FUN_8004766c(param_1);
    *(undefined2 *)(param_1 + 0x80) = 0x1e;
    *(undefined2 *)(param_1 + 0x82) = 0x3c;
    *(undefined2 *)(param_1 + 0x84) = 0x3c;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x86) = 0x5a;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    if (param_1[3] == '\x01') {
      *(undefined2 *)(param_1 + 0x50) = 0x100;
    }
    else if (param_1[3] == '\x02') {
      func_0x8012de84(param_1,(int)*(short *)(param_1 + 0x32));
      sVar3 = _DAT_1f8001a4;
      *(short *)(param_1 + 100) = _DAT_1f8001a4;
      if (*(short *)(param_1 + 0x32) < sVar3) {
        param_1[5] = 1;
      }
    }
    *(undefined2 *)(param_1 + 0x40) = 300;
  }
  param_1[0x29] = 0;
  return;
}
