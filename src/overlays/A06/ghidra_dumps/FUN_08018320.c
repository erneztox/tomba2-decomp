// FUN_08018320

void FUN_08018320(char *param_1,int param_2)

{
  if (*param_1 != '\x06') {
    func_0x0010ba74(param_1,param_2,
                    *(undefined4 *)
                     (param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) * 4 + 0xc0));
  }
  return;
}

