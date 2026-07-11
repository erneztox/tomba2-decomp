// FUN_80107494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80107494(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x47) == '\x02') {
    iVar1 = func_0x80022e04(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x5f) == '\x10') {
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x84) +
             *(short *)(*(int *)(param_2 + 0xc0) + 0x30) +
             (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
      }
      func_0x8001e860(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0x1200);
      DAT_1f800182 = 0;
      FUN_801104f0();
      return;
    }
  }
  else if ((*(char *)(param_1 + 2) != '\0') || (param_2 != _DAT_800e7fd8)) {
    func_0x80020f7c(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0x1200);
  }
  return;
}

