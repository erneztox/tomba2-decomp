// FUN_8002e1e8

/* WARNING: Removing unreachable block (ram,0x8002e280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002e1e8(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = DAT_800102bc;
  local_1c = DAT_800102c0;
  local_18 = DAT_800102c4;
  local_14 = DAT_800102c8;
  local_10 = DAT_800102cc;
  local_c = DAT_800102d0;
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 100) = 0x400;
      *(undefined4 *)(param_1 + 0x6c) = 0x200;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x32) = 0xff38;
      bVar2 = *(byte *)(param_1 + 4);
    }
    if (bVar2 == 1) {
      *(uint *)(param_1 + 0x60) =
           *(int *)(param_1 + 0x60) + (0x200U - *(int *)(param_1 + 0x60) >> 5);
      *(uint *)(param_1 + 0x68) =
           *(int *)(param_1 + 0x68) + (0x400U - *(int *)(param_1 + 0x68) >> 5);
    }
    else {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) - (*(uint *)(param_1 + 100) >> 2);
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + (*(uint *)(param_1 + 0x68) >> 4);
      uVar3 = *(uint *)(param_1 + 0x6c) - (*(uint *)(param_1 + 0x6c) >> 2);
      *(uint *)(param_1 + 0x6c) = uVar3;
      if (uVar3 < 9) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
    bVar2 = *(char *)(param_1 + 7) + 1;
    *(byte *)(param_1 + 7) = bVar2;
    if (5 < bVar2) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(uint *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x60) * (uint)*(byte *)(&local_20 + *(byte *)(param_1 + 7)) >> 4;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) *
         (uint)*(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 1) >> 4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) *
         (uint)*(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 2) >> 4;
    bVar2 = *(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 3);
    *(undefined4 *)(param_1 + 0x2c) = _DAT_1f800160;
    uVar1 = _DAT_1f800164;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined2 *)(param_1 + 0x30) = uVar1;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x6c) * (uint)bVar2 >> 4;
  }
  else if (bVar2 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}

