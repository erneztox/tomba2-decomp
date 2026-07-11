// FUN_0803f300

void FUN_0803f300(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0x30);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0x34);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar1 + 0x56);
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0xc);
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar1 + 0x60);
    *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)(iVar1 + 0xbe);
    *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(iVar1 + 0xbf);
    if (*(char *)(param_1 + 4) == '\x01') {
      *(undefined1 *)(iVar1 + 0x47) = *(undefined1 *)(param_1 + 0x47);
      *(undefined1 *)(iVar1 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
    }
    if (*(char *)(iVar1 + 1) != '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x000517f8(param_1);
    }
  }
  return;
}

