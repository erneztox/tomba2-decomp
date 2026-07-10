// FUN_00000cac

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000cac(int param_1,uint param_2,short param_3)

{
  if ((uint)*(byte *)(param_1 + 0x46) != (param_2 & 0xff)) {
    *(char *)(param_1 + 0x46) = (char)param_2;
    func_0x00054790(param_1,param_2);
    if (param_3 != 0) {
      func_0x00077cfc(param_1,0x8011c0e8,param_2);
      return 1;
    }
    func_0x00077c40(param_1,0x8011c0e8,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

