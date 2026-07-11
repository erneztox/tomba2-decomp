/**
 * @brief Entity throw state variant 2: spawns+throws object
 * @note Original: func_80067A40 at 0x80067A40
 */
// Entity_State_Throw2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80067a40(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  FUN_80076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (DAT_800bf80f == '\0') {
      FUN_8005245c();
      DAT_800bf80d = 3;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    *(undefined1 *)(param_1 + 6) = 1;
    DAT_800bf80d = 2;
    DAT_800bf80f = '\x02';
    FUN_800662d8(param_1,0);
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c();
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = *(short *)(param_1 + 0x4a) + 0x360;
      *(short *)(param_1 + 0x4a) = sVar2;
      if (0x3e00 < sVar2) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      FUN_8005444c(param_1);
      if (*(char *)(param_1 + 0x29) == '\0') {
        uVar3 = *(ushort *)(param_1 + 0x6a) & 0xf00;
        if ((((int)*(short *)(param_1 + 0x6a) & 0x8000U) != 0) &&
           ((uVar3 == 0x100 || (uVar3 == 0x200)))) {
          *(undefined1 *)(param_1 + 7) = 2;
          FUN_80054198(param_1);
          FUN_80054d14(param_1,0x71,0);
          FUN_800551c4(param_1);
          local_1a = _DAT_1f80019e;
          local_1e = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(param_1 + 0x4a) = 0x2400;
          *(undefined2 *)(param_1 + 0x58) = 0;
          local_16 = *(undefined2 *)(param_1 + 0x36);
          if (DAT_800bf870 == '\0') {
            FUN_8003116c(0x10d,auStack_20,0xfffffff6);
          }
          else {
            if (DAT_800bf870 == '\x06') {
              uVar4 = 0x704;
            }
            else if (DAT_800bf870 == '\b') {
              uVar4 = 0x909;
            }
            else {
              if (DAT_800bf870 != '\x0e') {
                return;
              }
              uVar4 = 0xf06;
            }
            FUN_800312d4(uVar4,auStack_20,0xfffffff6);
          }
        }
      }
      else {
        FUN_80054198(param_1);
        FUN_80054d14(param_1,0xd2,3);
        *(undefined1 *)(param_1 + 7) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    FUN_800674f4(param_1);
  }
  return;
}
