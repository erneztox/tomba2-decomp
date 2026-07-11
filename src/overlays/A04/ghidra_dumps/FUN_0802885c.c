// FUN_0802885c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802885c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[5];
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(int *)(iVar4 + 0x2c) =
         *(int *)(iVar4 + 0x2c) + (int)*(short *)(iVar4 + 0x48) * (int)*(short *)(param_1 + 0x44);
    *(int *)(iVar4 + 0x34) =
         *(int *)(iVar4 + 0x34) + (int)*(short *)(iVar4 + 0x4c) * (int)*(short *)(param_1 + 0x44);
    func_0x000518fc(iVar4);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if ((short)(sVar2 + -1) != -1) {
      return;
    }
    *(undefined1 *)(iVar4 + 4) = 3;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf9b4 & 4) == 0) {
        DAT_1f800137 = 2;
        func_0x0006e1c0(1);
        func_0x0006cba8(param_1 + 0x2c);
        _DAT_800e8076 = 0x120;
        _DAT_800e8078 = 0x200;
        _DAT_800e8074 = -_DAT_1f8000ee;
      }
      uVar3 = 0;
      if ((_DAT_800bfe56 & 0x10) == 0) {
        uVar3 = 0x504;
      }
      func_0x0003116c(uVar3,param_1 + 0x2c,0xffffffce);
      *(undefined2 *)(param_1 + 0x44) = 0x1c00;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      param_1[5] = param_1[5] + '\x01';
      *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    }
  }
  else if (bVar1 == 2) {
    local_1e = 0xfc0;
    local_1a = 0xd878;
    local_16 = 0x2d50;
    uVar3 = 0;
    if ((_DAT_800bfe56 & 0x10) == 0) {
      uVar3 = 0x504;
    }
    func_0x0003116c(uVar3,auStack_20,0xffffffce);
    if ((char)DAT_800bf929 < '\x01') {
      if ((DAT_800bf9b4 & 4) == 0) {
        func_0x00119588(param_1);
        DAT_800bf9b4 = DAT_800bf9b4 | 4;
        func_0x0006cba8(auStack_20);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((DAT_800bf929 & 8) == 0) {
      func_0x00042354(1,1);
      DAT_800bf929 = DAT_800bf929 | 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0006e1e4();
    DAT_1f800137 = 0;
    param_1[4] = 1;
    param_1[5] = 0;
    *param_1 = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

