// FUN_0802f7fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f7fc(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        if (param_1[6] == '\0') {
          iVar2 = func_0x00041438(param_1,0x8fc,0x100);
          if (iVar2 != 0) {
            *param_1 = 9;
            param_1[5] = 1;
            halt_baddata();
          }
        }
        else {
          if (param_1[6] != '\x01') {
            halt_baddata();
          }
          param_1[0x5e] = 2;
          param_1[6] = 0;
          param_1[5] = 0;
        }
      }
      goto LAB_0802f9c0;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x2e) = 0x1675;
    *(undefined2 *)(param_1 + 0x32) = 0xf2f4;
    *(undefined2 *)(param_1 + 0x36) = 0x1d78;
    *(undefined2 *)(param_1 + 0x56) = 0x8fc;
    func_0x00130ba4(param_1);
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  func_0x0007778c(param_1);
  if (DAT_800bf9d8 == '\n') {
    DAT_800bf9eb = DAT_800bf9eb + '\x01';
    func_0x00040d68(param_1,0x8013535c);
    param_1[0x70] = 2;
    param_1[6] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x2b] == '\x03') {
    func_0x00130dd8(3);
    iVar2 = func_0x00130d44();
    if (iVar2 != 0) {
      func_0x00040d68(param_1,0x8013535c);
      DAT_800bf9eb = 0;
      DAT_800bf9d8 = 10;
      param_1[6] = 1;
      param_1[0x70] = 2;
      param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 3;
    func_0x00040d68(param_1,0x80135118);
    param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0802f9c0:
  func_0x0004190c(param_1);
  return;
}

