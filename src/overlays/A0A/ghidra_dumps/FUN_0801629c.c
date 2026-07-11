// FUN_0801629c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801629c(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x5a;
    *(undefined2 *)(param_1 + 0x82) = 0xb4;
    *(undefined2 *)(param_1 + 0x84) = 0xaa;
    *(undefined2 *)(param_1 + 0x86) = 0x10e;
    if (param_1[0x2b] != '\0') {
      param_1[0x2b] = param_1[0x2b] + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf809 == '\0') {
      func_0x0004190c(param_1,&DAT_800e7e80);
    }
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08016560 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6e9c))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x00077e7c(param_1);
      func_0x000518fc(param_1);
    }
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_1[5] == '\0') {
        iVar3 = func_0x000519e0(param_1,0x11,_DAT_800ecfa0,0x8011bdd8);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 0x5a;
        *(undefined2 *)(param_1 + 0x82) = 0xb4;
        *(undefined2 *)(param_1 + 0x84) = 0xaa;
        *(undefined2 *)(param_1 + 0x86) = 0x10e;
        param_1[0x1b] = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x40) = 0;
        param_1[0x29] = 0;
        param_1[0x5e] = 0;
        param_1[1] = 0;
        param_1[0x1a] = 0x80;
        param_1[0x19] = 0x80;
        param_1[0x18] = 0x80;
        param_1[0xd] = param_1[0xd] | 1;
        iVar3 = func_0x000310f4(0xb01,0xffffffe2);
        if (iVar3 != 0) {
          *(undefined1 **)(iVar3 + 0x10) = param_1;
        }
        iVar3 = func_0x0007a980(0,6,1);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x1c) = 0x8010e590;
          *(undefined1 *)(iVar3 + 0xb) = 0x20;
          *(undefined1 **)(iVar3 + 0x10) = param_1;
          *(undefined4 *)(iVar3 + 0x18) = 0x8002ab5c;
          *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
        }
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfa4;
        _DAT_1f80024c = param_1;
        if ((DAT_800bfa1a & 1) == 0) {
          *param_1 = 8;
          param_1[0xbe] = 0;
          func_0x00040cdc(param_1,0x80127a84,0x8011bcf8);
          param_1[0x7b] = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0x8010f714;
          param_1[5] = 0;
          func_0x00041718(param_1,0,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x80127a84;
          param_1[5] = param_1[5] + '\x01';
        }
      }
      else if (param_1[5] == '\x01') {
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x66) = 0;
        *(undefined2 *)(param_1 + 0x68) = 0;
        *(undefined2 *)(param_1 + 0x6a) = 0;
        *(undefined2 *)(param_1 + 0x6c) = 0;
        *(undefined2 *)(param_1 + 0x6e) = 3;
        param_1[0x2a] = 0;
        func_0x00041718(param_1,0,0);
        *param_1 = 2;
        uVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        *(undefined2 *)(param_1 + 0x56) = uVar2;
      }
    }
  }
  else if (bVar1 == 2) {
    func_0x0010d88c(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

