// FUN_0802c84c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c84c(undefined1 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  bVar2 = param_1[6];
  if (bVar2 == 1) {
    if ((*(ushort *)(param_1 + 0x40) & 1) != 0) {
      func_0x0003116c(0x60c,param_1 + 0x2c,0xffffffce);
    }
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      param_1[6] = param_1[6] + '\x01';
    }
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 0x1e;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      iVar5 = 0;
      puVar7 = param_1;
      do {
        puVar1 = (undefined4 *)(puVar7 + 0xc0);
        puVar7 = puVar7 + 4;
        iVar6 = iVar5 + 1;
        func_0x00051b04(*puVar1,0x1c,iVar5);
        iVar5 = iVar6;
      } while (iVar6 < 5);
      *param_1 = 2;
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      param_1[6] = param_1[6] + '\x01';
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x7c);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x7e);
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x60) + 0x400;
      uVar4 = func_0x0009a450();
      *(ushort *)(param_1 + 0x58) = (uVar4 & 0xf) << 8;
      halt_baddata();
    }
  }
  else if (bVar2 == 2) {
    param_1[0xd] = 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x48;
    iVar5 = 1;
    puVar7 = param_1;
    if (1 < (byte)param_1[9]) {
      do {
        *(undefined1 *)(*(int *)(puVar7 + 0xc4) + 0x3f) = 0x30;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 4;
      } while (iVar5 < (int)(uint)(byte)param_1[9]);
    }
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
    func_0x00074590(0x10,3,0);
    func_0x0003116c(0,param_1 + 0x2c,0xffffffce);
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e8078 = 0;
    _DAT_800e8074 = -_DAT_1f8000ee;
    _DAT_800e8076 = 0x80;
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

