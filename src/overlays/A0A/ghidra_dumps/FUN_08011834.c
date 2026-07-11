// FUN_08011834

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011834(int param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x47) != '\x02') &&
     ((*(char *)(param_1 + 2) != '\0' || (param_2 != _DAT_800e7fd8)))) {
    func_0x00020f7c(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0x1200);
  }
  return;
}

