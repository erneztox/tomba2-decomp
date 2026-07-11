// FUN_08038c4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038c4c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if ((DAT_800e7e85 == '\x18') && (DAT_800e7e80 == '\x06')) {
      DAT_800e7e86 = 2;
    }
    func_0x00074590(0x95,0,0);
    *(undefined2 *)(param_1 + 0x84) = 0x20;
    *(undefined2 *)(param_1 + 0x86) = 0x94;
    func_0x00041768(param_1,3,4);
    func_0x00026100(4);
    *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_1 + 0x32);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = func_0x0009a450();
  iVar2 = (uint)*(ushort *)(param_1 + 0x42) + (uVar1 & 0x3f);
  *(short *)(param_1 + 0x42) = (short)iVar2;
  iVar2 = func_0x00083e80(iVar2 * 0x10000 >> 0x10);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x72) + (short)(iVar2 >> 7);
  return;
}

