// FUN_08017864

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017864(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  short local_18;
  short local_16;
  short local_14;
  
  bVar2 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  pbVar4 = (byte *)(param_1 + 0x50);
  if (bVar2 != 1) {
    if (bVar2 < 2) {
      iVar5 = 0;
      if (bVar2 != 0) {
        halt_baddata();
      }
      bVar2 = 0;
      do {
        *pbVar4 = bVar2;
        pbVar4[1] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4 = pbVar4 + 8;
        iVar5 = iVar5 + 1;
        bVar2 = bVar2 + 0x22;
      } while (iVar5 < 4);
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 10;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      halt_baddata();
    }
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    bVar2 = *(char *)(param_1 + 6) - 5;
    *(byte *)(param_1 + 6) = bVar2;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -2;
    if (bVar2 < 10) {
      *(undefined1 *)(param_1 + 6) = 10;
    }
    if (*(byte *)(param_1 + 5) < 3) {
      *(undefined1 *)(param_1 + 4) = 3;
      halt_baddata();
    }
  }
  do {
    bVar2 = *pbVar4;
    *pbVar4 = bVar2 + 4;
    if ((int)((uint)(byte)(bVar2 + 4) << 0x18) < 0) {
      bVar2 = pbVar4[1];
      if (bVar2 == 0) {
        pbVar4[1] = pbVar4[1] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((-1 < (char)bVar2) && ((char)bVar2 < '\x03')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 4) == '\x01') {
        pbVar4[1] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        *pbVar4 = *pbVar4 + 0x80;
        halt_baddata();
      }
      *pbVar4 = 0;
    }
    pbVar4 = pbVar4 + 8;
    if (param_1 + 0x70 <= (int)pbVar4) {
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + -0x2d;
      if (*(char *)(param_1 + 4) == '\x01') {
        cVar1 = *(char *)(param_1 + 7);
        *(char *)(param_1 + 7) = cVar1 + -1;
        if (cVar1 == '\0') {
          uVar3 = func_0x0009a450();
          local_18 = *(short *)(param_1 + 0x2c) + (uVar3 & 0x1ff) + -0x100;
          uVar3 = func_0x0009a450();
          local_14 = *(short *)(param_1 + 0x30) + (uVar3 & 0x1ff) + -0x100;
          uVar3 = func_0x0009a450();
          local_16 = (*(short *)(param_1 + 0x2e) - (uVar3 & 0x1ff)) + -200;
          func_0x00031220(0xc03,&local_18,0xffffffe2);
          bVar2 = func_0x0009a450();
          *(byte *)(param_1 + 7) = (bVar2 & 3) + 3;
        }
        if (-1 < *(char *)(param_1 + 6)) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\f';
        }
        *(char *)(param_1 + 5) = (char)(*(ushort *)(iVar5 + 0xb8) >> 6);
        *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar5 + 0x2e);
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x32);
        *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar5 + 0x36);
      }
      *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

