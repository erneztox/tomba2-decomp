// FUN_080415dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080415dc(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x00041718(param_1,10,0);
    *(undefined1 *)(param_1 + 0x5f) = 1;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x3465;
    *(undefined2 *)(param_1 + 0x32) = 0xe974;
    *(undefined2 *)(param_1 + 0x56) = 0x514;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
    DAT_800bfa42 = 0x82;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

