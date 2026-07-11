// FUN_0801d128

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801d128(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x47) != '\x02') {
    if (*(char *)(param_1 + 0x2b) != '\0') {
      uVar3 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
      if (uVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = (undefined2)(uVar3 << 3);
      if (4 < uVar3) {
        uVar1 = 0x20;
      }
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = uVar1;
      func_0x00074590(0x8d,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(short *)(param_1 + 0x7c) + 0x1e0U & 0xfff;
    *(ushort *)(param_1 + 0x7c) = uVar2;
    if ((uVar2 < 0x1e0) && (*(short *)(param_1 + 0x7e) != 0)) {
      *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -8;
    }
  }
  return;
}

