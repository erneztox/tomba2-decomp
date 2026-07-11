// FUN_08022c7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022c7c(undefined1 *param_1)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  
  iVar7 = 0;
  puVar6 = param_1;
  do {
    iVar4 = iVar7 * 2;
    iVar7 = iVar7 + 1;
    *(undefined2 *)(puVar6 + 0x60) =
         *(undefined2 *)(iVar4 + (uint)(byte)param_1[3] * 4 + -0x7febb17c);
    puVar6 = puVar6 + 2;
  } while (iVar7 < 2);
  iVar4 = 0;
  puVar8 = (undefined2 *)&DAT_80144e28;
  *param_1 = 1;
  param_1[4] = param_1[4] + '\x01';
  iVar7 = _DAT_800ecfa0;
  param_1[0xd] = 4;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 9;
  puVar6 = param_1;
  while( true ) {
    iVar5 = func_0x0007aae8();
    if (iVar5 == 0) {
      param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(puVar6 + 0xc0) = iVar5;
    *(undefined2 *)(iVar5 + 6) = *puVar8;
    **(undefined2 **)(puVar6 + 0xc0) = puVar8[1];
    *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 2) = puVar8[2];
    *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 4) = puVar8[3];
    *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 8) = 0;
    if (iVar4 == 3) break;
    *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 10) = 0;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0xc) = 0;
    psVar1 = puVar8 + 4;
    puVar8 = puVar8 + 5;
    piVar2 = (int *)(puVar6 + 0xc0);
    puVar6 = puVar6 + 4;
    *(int *)(*piVar2 + 0x40) = iVar7 + *(int *)(*psVar1 * 4 + iVar7 + 4);
    param_1[9] = param_1[9] + '\x01';
    if ((int)(uint)(byte)param_1[8] <= iVar4) {
      bVar3 = param_1[3];
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 0x7d;
      *(undefined2 *)(param_1 + 0x86) = 0xfa;
      *(undefined2 *)(param_1 + 0x6a) = 0x2a0;
      if (bVar3 == 1) {
        *(undefined2 *)(param_1 + 0x70) = 0xffa5;
        func_0x0004cbd8(param_1,3);
      }
      else if (bVar3 < 2) {
        if (bVar3 == 0) {
          *(undefined2 *)(param_1 + 0x70) = 0xfeef;
          _DAT_1f80024c = param_1;
          func_0x0004cbd8(param_1,1);
        }
      }
      else if (bVar3 == 2) {
        *(undefined2 *)(param_1 + 0x70) = 0xfeef;
        _DAT_1f800248 = param_1;
        func_0x0004cbd8(param_1,2);
      }
      else if (bVar3 == 3) {
        *(undefined2 *)(param_1 + 0x70) = 0x111;
        _DAT_1f800240 = param_1;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = *(undefined2 *)(param_1 + 0x70);
        if (((int)(uint)DAT_800bf9ce >> ((byte)param_1[3] & 0x1f) & 1U) == 0) {
          *(undefined2 *)(param_1 + 0x68) = 0;
          *(ushort *)(*(int *)(param_1 + 0xc4) + 8) = *(ushort *)(param_1 + 0x60) & 0xfff;
          *(undefined2 *)(*(int *)(param_1 + 0xd4) + 10) = 0x400;
          *(short *)(*(int *)(param_1 + 0xdc) + 8) = *(short *)(param_1 + 0x60) >> 1;
          *(short *)(*(int *)(param_1 + 0xe0) + 8) = (short)(-(int)*(short *)(param_1 + 0x60) >> 1);
          *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x3e) = 0;
          func_0x0011cedc(param_1);
          func_0x0011b958(param_1);
          param_1[0x29] = 0;
          param_1[0x2b] = 0;
          *(undefined2 *)(param_1 + 0x72) = 0;
          *(undefined2 *)(param_1 + 0x74) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0xd8) + 0x3e) = 0;
          return;
        }
        *(undefined2 *)(param_1 + 0x68) = 1;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = *(undefined2 *)(param_1 + 0x62);
        *(undefined2 *)(*(int *)(param_1 + 0xd4) + 10) = 0xfc00;
        *(short *)(*(int *)(param_1 + 0xdc) + 8) = *(short *)(param_1 + 0x62) >> 1;
        *(short *)(*(int *)(param_1 + 0xe0) + 8) = (short)(-(int)*(short *)(param_1 + 0x62) >> 1);
        *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x3e) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined2 *)(*(int *)(param_1 + 0xcc) + 10) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

