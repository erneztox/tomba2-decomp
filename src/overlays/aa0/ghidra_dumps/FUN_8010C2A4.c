// FUN_8010C2A4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c258(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x8002313c(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (iVar1 != 0) {
    func_0x8001e860(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0x400);
    iVar1 = _DAT_1f80009c;
    *(undefined1 *)(param_2 + 0x2b) = 1;
    *(char *)(param_2 + 0x46) = (char)(iVar1 >> 4);
    if (*(char *)(param_1 + 0x5e) != '\0') {
      *(undefined1 *)(param_2 + 0x2b) = 0x81;
    }
    DAT_1f800182 = 0;
  }
  return;
}

