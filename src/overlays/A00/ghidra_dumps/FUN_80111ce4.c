// FUN_80111ce4

undefined1 FUN_80111ce4(int param_1,uint param_2)

{
  int in_v1;
  
  do {
    if ((((int)(uint)*(byte *)(in_v1 + 0x173) >> (param_2 & 0x1f) & 1U) != 0) &&
       (((int)(uint)*(byte *)(in_v1 + 0x173) >> (param_2 + 4 & 0x1f) & 1U) == 0)) {
      *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | (byte)(1 << (param_2 & 0x1f));
    }
    param_2 = param_2 + 1;
  } while ((int)param_2 < 3);
  return *(undefined1 *)(param_1 + 0x5f);
}

