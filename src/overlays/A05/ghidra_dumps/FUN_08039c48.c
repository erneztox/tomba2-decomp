// FUN_08039c48

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039c48(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = *(byte *)(param_1 + 5);
  if (bVar2 == 1) {
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar4 = func_0x0009a450();
      if ((uVar4 & 1) == 0) {
        uVar4 = func_0x0009a450();
        if ((uVar4 & 0xe) == 0) {
          func_0x00074590(0x8a,0,0xffffffec);
          func_0x00077c40(param_1,0x80142108,3);
          uVar3 = func_0x0009a450();
          *(undefined2 *)(param_1 + 0x50) = 0x380;
          *(ushort *)(param_1 + 0x4a) = -0x2000 - (uVar3 & 0x3ff);
          *(undefined1 *)(param_1 + 5) = 3;
        }
        else {
          func_0x00077c40(param_1,0x80142108,4);
          uVar1 = func_0x0009a450();
          *(undefined1 *)(param_1 + 0x46) = uVar1;
          bVar2 = func_0x0009a450();
          *(byte *)(param_1 + 0x47) = (bVar2 & 0x3f) + 0x40;
          *(undefined1 *)(param_1 + 5) = 2;
        }
      }
      else {
        func_0x00077c40(param_1,0x80142108,4);
        uVar3 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar3 & 0x1f) + 0x20;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
  }
  else if (bVar2 == 2) {
    iVar5 = func_0x00041438(param_1,(uint)*(byte *)(param_1 + 0x46) << 4,
                            *(undefined1 *)(param_1 + 0x47));
    if (iVar5 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else if (bVar2 == 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    iVar5 = (uint)*(byte *)(param_1 + 3) * 6;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (*(short *)(iVar5 + -0x7fec0b4a) <= *(short *)(param_1 + 0x32)) {
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar5 + -0x7fec0b4a);
      func_0x00077c40(param_1,0x80142108,4);
      *(undefined1 *)(param_1 + 5) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

