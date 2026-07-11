// FUN_0802eb84

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802eb84(undefined1 *param_1)

{
  byte bVar1;
  
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
        param_1[0x5e] = 2;
        param_1[6] = 0;
        param_1[5] = 0;
        halt_baddata();
      }
      if (param_1[0x46] == '\n') {
        if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 2) {
          if (param_1[0x47] == '\0') {
            param_1[0x47] = 1;
            func_0x00074590(0,0,0);
            halt_baddata();
          }
        }
        else {
          param_1[0x47] = 0;
        }
      }
      goto LAB_0802ed04;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x22,0xf);
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x80) = 0x80;
    *(undefined2 *)(param_1 + 0x82) = 0x100;
    param_1[0x7b] = 0x15;
    func_0x00041718(param_1,0x15,0);
    func_0x00130ba4(param_1);
    param_1[5] = param_1[5] + '\x01';
  }
  func_0x0007778c(param_1);
  if (DAT_800bf9d8 == '\n') {
    DAT_800bf9eb = DAT_800bf9eb + '\x01';
    func_0x00040d68(param_1,0x8013504c);
    param_1[0x70] = 2;
    param_1[0x47] = 0;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0802ed04:
  func_0x0004190c(param_1);
  return;
}

