// FUN_0802ef54

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ef54(int param_1,uint param_2,char param_3)

{
  if (*(byte *)(param_1 + 0x46) != param_2) {
    *(char *)(param_1 + 0x46) = (char)param_2;
    if (param_3 == '\0') {
      func_0x00077c40(param_1,0x80144f14,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00077cfc(param_1,0x80144f14,param_2,param_3);
    if (param_2 == 0x13) {
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
    if (param_2 == 9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
  }
  return;
}

