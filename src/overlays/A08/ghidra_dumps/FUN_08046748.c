// FUN_08046748

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08046748(char *param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  undefined2 local_1a;
  
  func_0x0013f150();
  func_0x0013f40c(param_1);
  uVar1 = _DAT_800a2904;
  if (*param_1 == 'e') {
    func_0x0013f57c(param_1);
  }
  else if (*param_1 == 'i') {
    local_20 = 0x78;
    local_1e = 0x80;
    local_1c = 0;
    local_1a = 0x10;
    if (param_1[0x53] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00079374(0x78,0x80,6,_DAT_800a2904,3);
    local_1c = local_1c << 1;
    sVar2 = func_0x0009a600(uVar1);
    local_1c = local_1c + sVar2 * 8;
    func_0x0005019c(&local_20,0x60,0);
    uVar1 = _DAT_800a2908;
    local_20 = 0xb0;
    local_1e = 0x80;
    local_1c = 4;
    local_1a = 0x10;
    if (param_1[0x53] != '\x01') {
      func_0x00079374(0xb4,0x80,6,_DAT_800a2908,3);
      local_1c = local_1c << 1;
      sVar2 = func_0x0009a600(uVar1);
      local_1c = local_1c + sVar2 * 8;
      func_0x0005019c(&local_20,0x60,0);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

