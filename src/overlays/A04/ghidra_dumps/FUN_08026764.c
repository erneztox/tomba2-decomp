// FUN_08026764

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026764(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x04') {
    iVar2 = func_0x0011d0a4();
    if (iVar2 != 0) {
      return;
    }
    uVar3 = (int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f);
  }
  else {
    if (cVar1 == '\x05') {
      if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0) {
        return;
      }
      func_0x001211e4(param_1);
      halt_baddata();
    }
    if (cVar1 == '\a') {
      if (DAT_800bf8cb == '\0') {
        func_0x00040b48(0x17);
        iVar2 = func_0x00072ddc(0,2,2,0x30);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x1c) = 0x80138140;
          *(undefined1 *)(iVar2 + 3) = 0;
          *(int *)(iVar2 + 0x10) = param_1;
        }
        *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = (int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f);
    }
    else if (cVar1 == '\b') {
      _DAT_800bf854 = _DAT_800bf854 + 1;
      if (*(char *)(param_1 + 4) == '\0') {
        return;
      }
      if (_DAT_800bf850 != 0) {
        return;
      }
      uVar3 = (int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f);
    }
    else {
      if (cVar1 == '\x06') {
        DAT_800bf9b4 = DAT_800bf9b4 | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (cVar1 == '\x01') {
        if ((DAT_800bf8c8 != -1) && (DAT_800bfae1 == '\0')) {
          iVar2 = func_0x0007a980(1,2,0);
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 2) = 0x26;
            *(undefined1 *)(iVar2 + 3) = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0x80131e08;
            *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
            *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(short *)(iVar2 + 0x32) = *(short *)(param_1 + 0x32) + 0x14;
            *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
            halt_baddata();
          }
          return;
        }
        uVar3 = (int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f);
      }
      else {
        if (cVar1 == '\x02') {
          iVar2 = func_0x00072ddc(0,1,2,0x4e);
          if (iVar2 == 0) {
            return;
          }
          *(undefined4 *)(iVar2 + 0x1c) = 0x801397c0;
          halt_baddata();
        }
        if (cVar1 != '\0') {
          if (cVar1 != '\x03') {
            return;
          }
          iVar2 = func_0x0011f5fc(param_1,1);
          if (iVar2 != 0) {
            return;
          }
          if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0) {
            return;
          }
          iVar2 = func_0x0004c0e4(param_1,6,0);
          *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
          *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
          return;
        }
        iVar2 = func_0x0011f5fc(param_1,0);
        if (iVar2 != 0) {
          return;
        }
        uVar3 = (int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f);
      }
    }
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

