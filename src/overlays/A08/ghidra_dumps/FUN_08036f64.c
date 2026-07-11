// FUN_08036f64

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08036f64(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x14);
  if (bVar1 == 1) {
    uVar2 = *(short *)(iVar4 + 0x54) + 0xc;
    *(ushort *)(iVar4 + 0x54) = uVar2;
    if (-1 < (int)((uint)uVar2 << 0x10)) {
      *(undefined2 *)(iVar4 + 0x54) = 0;
      func_0x00074590(0x18,0x1a,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar2 = *(ushort *)(param_1 + 0x72) & 0xf;
        if (uVar2 == 1) {
          *(undefined1 *)(param_1 + 0x78) = 2;
          *(undefined2 *)(iVar4 + 0x4e) = 0xfff8;
          *(undefined2 *)(iVar4 + 0x50) = 0xffd0;
          func_0x00074590(0x17,0xd,0);
        }
        else if (uVar2 < 2) {
          if ((*(ushort *)(param_1 + 0x72) & 0xf) == 0) {
            *(undefined1 *)(param_1 + 0x78) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (uVar2 == 2) {
          *(undefined1 *)(param_1 + 0x78) = 2;
          *(undefined2 *)(iVar4 + 0x4e) = 0xfff0;
          *(undefined2 *)(iVar4 + 0x50) = 0xfd56;
          halt_baddata();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    sVar3 = *(short *)(iVar4 + 0x54) + *(short *)(iVar4 + 0x4e);
    *(short *)(iVar4 + 0x54) = sVar3;
    if (sVar3 <= *(short *)(iVar4 + 0x50)) {
      *(undefined2 *)(iVar4 + 0x54) = *(undefined2 *)(iVar4 + 0x50);
      if ((*(ushort *)(param_1 + 0x72) & 0x80) != 0) {
        return 3;
      }
      halt_baddata();
    }
  }
  return 0;
}

