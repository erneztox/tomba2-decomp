// FUN_08029328

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029328(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    if (*(ushort *)(param_1 + 0xba) < 0x201) {
      *(undefined2 *)(param_1 + 0xba) = 0x100;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
      param_1[6] = param_1[6] + '\x01';
      func_0x00040b48(0x1e);
      DAT_800bf9cb = DAT_800bf9cb | '\x01' << ((byte)param_1[3] & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) - 0x1d0;
  }
  else if (((bVar1 < 2) && (bVar1 == 0)) && (_DAT_800e7fee != 0)) {
    DAT_1f800137 = 2;
    *param_1 = 2;
    func_0x00074590(0x82,0,0);
    param_1[0xd] = param_1[0xd] | 4;
    param_1[6] = param_1[6] + '\x01';
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
    if (param_1[3] == '\0') {
      func_0x000782f0(6,0x14);
      halt_baddata();
    }
  }
  return;
}

