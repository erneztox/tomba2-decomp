// FUN_08033588

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080338b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033588(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0012c118(param_1);
    }
    else if (param_1[3] == '\x01') {
      if (param_1[5] == '\0') {
        bVar1 = param_1[6];
        if (bVar1 == 1) {
          param_1[6] = 2;
          func_0x00040cdc(param_1,0x8001b4dc,0x80145e80);
          param_1[0x70] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 < 2) {
          if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (0x1d < DAT_800bfa4e) {
            param_1[6] = 1;
            halt_baddata();
          }
        }
        else {
          if (bVar1 != 2) {
            halt_baddata();
          }
          func_0x00041098(param_1);
          if (param_1[0x70] == -1) {
            param_1[6] = 0;
            func_0x00042310();
            halt_baddata();
          }
        }
      }
      else {
        if (param_1[5] != '\x01') {
          halt_baddata();
        }
        func_0x0012c3a4(param_1);
      }
      func_0x0007778c(param_1);
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80145aac);
    uVar2 = _DAT_800ecfe4;
    if (iVar3 == 0) {
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[4] = param_1[4] + '\x01';
      if (param_1[3] != '\0') {
        if (DAT_800bfa48 == '\0') {
          func_0x00051b04(*(undefined4 *)(param_1 + 0xec),0xf,0xf);
        }
        else {
          if (DAT_800bfa48 != '\x01') {
            func_0x00051b04(*(undefined4 *)(param_1 + 0xec),0xf,0x11);
            func_0x00051b04(*(undefined4 *)(param_1 + 0xf0),0xf,0x12);
            if (DAT_800bf938 == -1) {
              param_1[5] = 1;
              *(undefined2 *)(param_1 + 0x2e) = 0x373d;
              *(undefined2 *)(param_1 + 0x32) = 0xdd30;
              *(undefined2 *)(param_1 + 0x36) = 0x1784;
              *(undefined2 *)(param_1 + 0x56) = 0x800;
              func_0x00077c40(param_1,0x8001b4dc,5);
              param_1[0x2b] = 0;
              param_1[0x29] = 0;
              halt_baddata();
            }
            param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x00051b04(*(undefined4 *)(param_1 + 0xec),0xf,0x13);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (2 < DAT_800bfa4e) {
        param_1[5] = 2;
        *(undefined2 *)(param_1 + 0x56) = 0xd00;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[5] = 0;
      if ((DAT_800bf871 != '\x10') && (DAT_800bf8f4 != -1)) {
        *(undefined2 *)(param_1 + 0x56) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

