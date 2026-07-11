// FUN_0803f064

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803f064(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x60) = 0x25b5;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 100) = 0x20de;
  }
  if ((*(char *)(iVar2 + 0x5f) == '\0') || (DAT_800bf816 == '\0')) {
    *(undefined1 *)(param_1 + 4) = 3;
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x2c);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x30);
  bVar1 = *(byte *)(param_1 + 5);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x34);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_0803f188;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x32);
  }
  if (*(short *)(param_1 + 0x62) < -0x1738) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + -0x60;
LAB_0803f188:
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084690(&DAT_1f8000f8);
  local_20 = *(undefined2 *)(param_1 + 0x2e);
  local_1e = *(undefined2 *)(param_1 + 0x32);
  local_1c = *(undefined2 *)(param_1 + 0x36);
  iVar2 = func_0x0003f7a0(&local_20,&local_18);
  func_0x0003f7a0(param_1 + 0x60,&local_14);
  if (0 < iVar2) {
    func_0x00137ea4(local_18,local_14,iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

