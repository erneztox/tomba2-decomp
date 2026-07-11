// FUN_8013cd60

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013cd60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint in_v0;
  int in_v1;
  int in_t0;
  
  *(int *)(*(int *)(param_4 + 0xc4) + 0x40) =
       param_3 + *(int *)((uint)*(byte *)((in_v0 & 0xf) + in_v1) * 4 + param_3 + 4);
  *(int *)(*(int *)(param_4 + 0xe4) + 0x40) =
       param_3 + *(int *)((uint)*(byte *)((*(byte *)(param_1 + 7) & 0xf) + 0x8014bf54) * 4 +
                         param_3 + 4);
  if ((*(byte *)(param_1 + 7) & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(*(int *)(param_4 + 0xfc) + 0x40) = param_3 + *(int *)(param_3 + 0x40);
  if ((*(byte *)(in_t0 * 8 + -0x7feb40f5) & 0x10) != 0) {
    *(ushort *)(param_4 + 0x62) = *(ushort *)(param_4 + 0x62) | 8;
    return;
  }
  *(ushort *)(param_4 + 0x62) = *(ushort *)(param_4 + 0x62) & 0xfff7;
  return;
}

