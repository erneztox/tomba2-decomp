// FUN_08035f70

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035f70(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  undefined1 auStack_20 [2];
  short local_1e;
  short local_1a;
  short local_16;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x58) = 0x20 - (uVar3 & 0x3f);
    sVar2 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 < 8) {
      uVar4 = func_0x0009a450();
      iVar5 = func_0x00083f50(0xa81);
      local_1e = (short)((int)((0x40 - (uVar4 & 0x7f)) * iVar5) >> 0xc) + 0x32aa;
      uVar3 = func_0x0009a450();
      local_1a = (uVar3 & 0x3f) + 0xd058;
      uVar4 = func_0x0009a450();
      iVar5 = func_0x00083e80(0xa81);
      local_16 = (short)((int)((0x40 - (uVar4 & 0x7f)) * -iVar5) >> 0xc) + 18000;
      iVar5 = func_0x0003116c(0,auStack_20,0xffffff9c);
      if (iVar5 == 0) goto LAB_08036130;
      *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
    }
    else {
      DAT_800e807e = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar6 = *(short *)(param_1 + 0x50) + 4;
      sVar2 = *(short *)(param_1 + 0x32) + sVar6;
      *(short *)(param_1 + 0x32) = sVar2;
      *(short *)(param_1 + 0x50) = sVar6;
      if (-0x2f95 < sVar2) {
        *(undefined2 *)(param_1 + 0x32) = 0xd06c;
        *(undefined2 *)(param_1 + 0x40) = 0;
        DAT_800e807e = 1;
        func_0x00074590(0x32,0xfffffff8,0);
        func_0x000521f4(0,0,0xf0,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_08036130:
      func_0x000518fc(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bf816 == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    goto LAB_08036130;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

