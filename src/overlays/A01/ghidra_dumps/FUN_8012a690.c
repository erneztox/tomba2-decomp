// FUN_8012a690

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012a690(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0xb] = 0x20;
    *(undefined **)(param_1 + 0x18) = &DAT_8012e5f8;
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x84) = 200;
    param_1[4] = 1;
    *param_1 = 1;
    uVar3 = _DAT_80137c2c;
    *(undefined2 *)(param_1 + 0x86) = 400;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x70) = uVar3;
    uVar3 = _DAT_80137c2e;
    *(undefined4 *)(param_1 + 0x60) = 0x80137c30;
    *(undefined4 *)(param_1 + 100) = 0x80137c30;
    *(undefined2 *)(param_1 + 0x2e) = 0x5238;
    *(undefined2 *)(param_1 + 0x32) = 0xe375;
    *(undefined2 *)(param_1 + 0x36) = 0x2340;
    *(undefined2 *)(param_1 + 0x72) = uVar3;
    uVar4 = func_0x8009a450();
    *(ushort *)(param_1 + 0x68) = (*(short *)(param_1 + 0x2e) + 0x40) - (uVar4 & 0x7f);
    uVar4 = func_0x8009a450();
    *(ushort *)(param_1 + 0x6a) = *(short *)(param_1 + 0x32) + (uVar4 & 0x7f) + 0x100;
    uVar4 = func_0x8009a450();
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(ushort *)(param_1 + 0x6c) = (*(short *)(param_1 + 0x36) + 0x10) - (uVar4 & 0x1f);
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + 1;
  if (((short)(sVar2 + 1) == 7) && ((byte)param_1[3] < 0xc)) {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    iVar5 = func_0x8007a980(1,2,0);
    iVar6 = 0;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0x1c) = 0x8013362c;
      *(undefined4 *)(iVar5 + 0x10) = uVar7;
      *(undefined1 *)(iVar5 + 2) = 0x1a;
      *(undefined1 *)(iVar5 + 3) = 0;
      iVar6 = iVar5;
    }
    *(char *)(iVar6 + 3) = param_1[3] + '\x01';
  }
  if (((*(short *)(param_1 + 0x40) < 0x10) &&
      (*(int *)(param_1 + 0x60) = *(int *)(param_1 + 100), *(int *)(param_1 + 100) != 0)) &&
     (*(short *)(param_1 + 0x32) < -6000)) {
    iVar6 = func_0x8007778c(param_1);
    if (iVar6 != 0) {
      FUN_8010eea8(param_1);
      if ((_DAT_1f80017c + (ushort)(byte)param_1[3] & 7) == 0) {
        local_1e = *(undefined2 *)(param_1 + 0x68);
        local_1a = *(undefined2 *)(param_1 + 0x6a);
        local_16 = *(undefined2 *)(param_1 + 0x6c);
        uVar4 = func_0x8009a450();
        *(ushort *)(param_1 + 0x68) = (*(short *)(param_1 + 0x68) + 0x80) - (uVar4 & 0xff);
        *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -100;
        uVar4 = func_0x8009a450();
        *(ushort *)(param_1 + 0x6c) = (*(short *)(param_1 + 0x6c) + 0x40) - (uVar4 & 0x7f);
        func_0x8003116c(0xd,auStack_20,0xffffffe2);
      }
      sVar2 = *(short *)(param_1 + 0x6e);
      *(ushort *)(param_1 + 0x6e) = sVar2 - 1U;
      if ((int)((uint)(ushort)(sVar2 - 1U) << 0x10) < 1) {
        func_0x80074590(2,0xfffffff2,0);
        *(undefined2 *)(param_1 + 0x6e) = 9;
      }
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[4] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

