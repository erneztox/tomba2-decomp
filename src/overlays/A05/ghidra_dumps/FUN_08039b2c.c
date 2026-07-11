// FUN_08039b2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039b2c(int param_1)

{
  if ((1 < DAT_800bfa11) && (DAT_800bf92e != -1)) {
    func_0x00051b70(param_1,0xc,0x56);
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xe0;
    return;
  }
  func_0x00051b70(param_1,0xc,0x55);
  *(undefined1 *)(param_1 + 0x5e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

