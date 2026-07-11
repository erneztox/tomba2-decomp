// FUN_0801c47c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c47c(undefined1 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  param_1[8] = 1;
  if (_DAT_800ed098 < 1) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[9] = 1;
  *param_1 = 1;
  param_1[0xb] = 2;
  *(undefined2 *)(param_1 + 0x60) = 9;
  *(undefined2 *)(param_1 + 0x62) = 0x39f3;
  *(undefined2 *)(param_1 + 100) = 0x64a0;
  *(undefined2 *)(param_1 + 0x66) = 0x64af;
  *(undefined2 *)(param_1 + 0x68) = 0x74a0;
  *(undefined2 *)(param_1 + 0x6a) = 0x74af;
  *(undefined2 *)(param_1 + 0x6c) = 0x50;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  param_1[4] = param_1[4] + '\x01';
  puVar2 = (undefined2 *)
           (*(int *)((uint)(byte)param_1[3] * 4 + -0x7fee1304) + (uint)(byte)param_1[0x47] * 0x16);
  iVar1 = func_0x0007aae8();
  *(int *)(param_1 + 0xc0) = iVar1;
  *(undefined2 *)(iVar1 + 6) = 0xffff;
  **(undefined2 **)(param_1 + 0xc0) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x88) = *puVar2;
  *(undefined2 *)(param_1 + 0x8a) = puVar2[1];
  *(undefined2 *)(param_1 + 0x8c) = puVar2[2];
  *(undefined2 *)(param_1 + 0x54) = puVar2[3];
  *(undefined2 *)(param_1 + 0x56) = puVar2[4];
  *(undefined2 *)(param_1 + 0x58) = puVar2[5];
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = puVar2[6];
  *(undefined2 *)(param_1 + 0x80) = puVar2[7];
  *(undefined2 *)(param_1 + 0x82) = puVar2[8];
  *(undefined2 *)(param_1 + 0x84) = puVar2[9];
  *(undefined2 *)(param_1 + 0x86) = puVar2[10];
  if (param_1[0x47] == '\x02') {
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) >> 1;
    *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) =
       *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
  if (param_1[0x47] == '\x02') {
    *(short *)(param_1 + 0x54) = -_DAT_1f8000f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(short *)(param_1 + 0x56) = -_DAT_1f8000f2 - *(short *)(iVar1 + 0x56);
  func_0x00085480(param_1 + 0x54,param_1 + 0x98);
  func_0x00051d20(iVar1,param_1 + 0x88,param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  func_0x00084360(iVar1 + 0x98,param_1 + 0x98);
  func_0x00051300(param_1);
  return;
}

