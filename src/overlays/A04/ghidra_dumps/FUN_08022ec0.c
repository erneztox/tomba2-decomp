// FUN_08022ec0

void FUN_08022ec0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084690(&DAT_1f8000f8);
  local_18 = func_0x0003f7a0(param_1 + 0x60,&local_20);
  iVar1 = func_0x0003f7a0(param_1 + 0x68,&local_1c);
  local_18 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
  if (0x7fb < local_18 - 4U) {
    local_18 = -1;
  }
  if (0 < local_18) {
    func_0x0011b7f4(local_20,local_1c);
  }
  return;
}

