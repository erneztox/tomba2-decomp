// FUN_80135684

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8013571c) */

void FUN_80135684(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte local_20 [24];
  
  local_20[0] = 0x1a;
  local_20[1] = 0x4c;
  local_20[2] = 4;
  local_20[3] = 8;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 9;
  local_20[9] = 0;
  local_20[10] = 0x75;
  local_20[0xb] = 0x10;
  local_20[0xc] = 0x80;
  local_20[0xd] = 0x1f;
  local_20[0xe] = 2;
  local_20[0xf] = 0x3c;
  local_20[0x10] = 0x1a;
  local_20[0x11] = 0x4c;
  local_20[0x12] = 4;
  local_20[0x13] = 8;
  local_20[0x14] = 0;
  local_20[0x15] = 0;
  local_20[0x16] = 0;
  local_20[0x17] = 0;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 100) = 0x200;
      *(undefined4 *)(param_1 + 0x68) = 0x200;
      *(undefined4 *)(param_1 + 0x60) = 0x100;
      *(undefined4 *)(param_1 + 0x6c) = 0x100;
      *(undefined2 *)(param_1 + 0x32) = 0xff38;
    }
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) - (*(uint *)(param_1 + 0x60) >> 2);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) - (*(uint *)(param_1 + 100) >> 2);
    uVar2 = *(uint *)(param_1 + 0x6c) - (*(uint *)(param_1 + 0x6c) >> 2);
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) - (*(uint *)(param_1 + 0x68) >> 2);
    if (uVar2 < 9) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    bVar1 = *(char *)(param_1 + 7) + 1;
    *(byte *)(param_1 + 7) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(uint *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x60) * (uint)local_20[(uint)*(byte *)(param_1 + 7) * 4] >> 4;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) * (uint)local_20[(uint)*(byte *)(param_1 + 7) * 4 + 1] >> 4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) * (uint)local_20[(uint)*(byte *)(param_1 + 7) * 4 + 2] >> 4;
    bVar1 = local_20[(uint)*(byte *)(param_1 + 7) * 4 + 3];
    *(undefined1 *)(param_1 + 1) = 1;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x6c) * (uint)bVar1 >> 4;
  }
  else if (bVar1 == 3) {
    func_0x8007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

