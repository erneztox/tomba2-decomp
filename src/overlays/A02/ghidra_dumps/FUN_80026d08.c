// FUN_80026d08

int FUN_80026d08(int param_1,ushort *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 < (int)(uint)*param_2) {
    puVar1 = (undefined1 *)(param_4 * 0x24 + param_3);
    *(byte *)(param_1 + 0x33) = puVar1[3] & 2 | 0x24;
    *(undefined1 *)(param_1 + 0x34) = puVar1[8];
    *(undefined1 *)(param_1 + 0x35) = puVar1[9];
    *(undefined1 *)(param_1 + 0x38) = puVar1[0xc];
    *(undefined1 *)(param_1 + 0x39) = puVar1[0xd];
    *(undefined1 *)(param_1 + 0x3c) = puVar1[0x22];
    *(undefined1 *)(param_1 + 0x3d) = puVar1[0x23];
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(puVar1 + 0xe);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(puVar1 + 10);
    *(undefined1 *)(param_1 + 0x30) = *puVar1;
    *(undefined1 *)(param_1 + 0x31) = puVar1[1];
    *(undefined1 *)(param_1 + 0x32) = puVar1[2];
    return 0;
  }
  return param_3 + (uint)*param_2 * 0x24;
}

