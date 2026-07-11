// FUN_0802e150

/* WARNING: Control flow encountered bad instruction data */

ushort FUN_0802e150(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(char *)(param_1 + 0x46) != '\0') {
      *(undefined1 *)(param_1 + 0x46) = 0;
      func_0x00077cfc(param_1,0x80144f14,0,2);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0xffe2;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
  if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) -
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  uVar3 = func_0x00124a08(param_1);
  if ((uVar3 & 2) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x50) + 4;
  *(short *)(param_1 + 0x50) = sVar1;
  if (0x13 < sVar1) {
    *(undefined2 *)(param_1 + 0x50) = 0x14;
  }
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x88;
  uVar2 = (ushort)((uVar3 & 1) != 0);
  if (uVar2 == 0xffff) {
    *(undefined1 *)(param_1 + 5) = 0xd;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar2 != 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return uVar2;
}

