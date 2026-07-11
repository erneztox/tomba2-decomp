// FUN_0802cdc0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802cdc0(int param_1,short param_2,uint param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    uVar1 = (uint)param_2;
    if (*(byte *)(param_1 + 0x46) != uVar1) {
      *(char *)(param_1 + 0x46) = (char)param_2;
      if ((param_3 >> 8 & 0xff) == 0) {
        func_0x00077c40(param_1,0x80144f14,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00077cfc(param_1,0x80144f14,uVar1,param_3 >> 8 & 0xff);
      if (uVar1 == 0x13) {
        *(undefined2 *)(param_1 + 0x80) = 0x5a;
        *(undefined2 *)(param_1 + 0x82) = 0xb4;
        *(undefined2 *)(param_1 + 0x84) = 0x8c;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      if (uVar1 == 9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(char *)(param_1 + 7) = (char)param_3;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  if (*(byte *)(param_1 + 7) < 2) {
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) - 1;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
  func_0x00124a08();
  return 0;
}

