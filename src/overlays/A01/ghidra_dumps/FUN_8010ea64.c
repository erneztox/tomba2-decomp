// FUN_8010ea64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8010ea64(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(param_1 + 0x66) & 1) != 0) {
    iVar2 = func_0x80083e80((int)*(short *)(param_1 + 100) - (*(short *)(param_1 + 0x56) + -0x800));
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + (short)(iVar2 >> 5);
    return 0;
  }
  puVar4 = (undefined2 *)
           ((param_1 + 0x60 + (int)*(short *)(param_1 + 100)) * 2 + (int)*(short *)(param_1 + 0x56))
  ;
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x38) = *puVar4;
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x3a) = puVar4[1];
  *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0x3c) = puVar4[2];
  sVar1 = *(short *)(param_2 + 0xe) + 1;
  *(short *)(param_2 + 0xe) = sVar1;
  if (*(byte *)(param_2 + 0x5e) == param_3) {
    *(short *)(param_2 + 0x84) = sVar1 * -0x1a + 0x244;
    *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0xe) * -0x1a + 0x244;
    uVar3 = FUN_80120c08();
    return uVar3;
  }
  *(short *)(param_2 + 0x84) = sVar1 * -6 + 0xb4;
  *(short *)(param_2 + 0x86) = *(short *)(param_2 + 0xe) * -6 + 0xb4;
  if (*(short *)(param_2 + 0xe) < 0x14) {
    return 0x3c;
  }
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined2 *)(param_2 + 0x84) = 0x3c;
  *(undefined2 *)(param_2 + 0x86) = 0x3c;
  return 0x3c;
}

