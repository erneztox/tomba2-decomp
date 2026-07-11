// FUN_8010cd14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 * FUN_8010cd14(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *(undefined2 *)(param_1 + 8) = 0;
  pbVar5 = *(byte **)(param_2 * 4 + -0x7feb7f9c);
  puVar2 = &LAB_800c0000;
  if (*pbVar5 != 0xff) {
    pbVar4 = pbVar5 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(pbVar4[-2]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar3 = func_0x80072ddc(param_1,*pbVar5,pbVar4[-0xb],pbVar4[-10]);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x2c) = (int)*(short *)(pbVar4 + -8) << 0x10;
          *(int *)(iVar3 + 0x30) = (int)*(short *)(pbVar4 + -6) << 0x10;
          *(int *)(iVar3 + 0x34) = (int)*(short *)(pbVar4 + -4) << 0x10;
          bVar1 = pbVar4[-9];
          *(undefined2 *)(iVar3 + 0x54) = 0;
          *(undefined2 *)(iVar3 + 0x56) = 0;
          *(undefined2 *)(iVar3 + 0x58) = 0;
          *(byte *)(iVar3 + 3) = bVar1;
          *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)pbVar4;
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar3;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
      pbVar5 = pbVar5 + 0x10;
      puVar2 = (undefined1 *)(uint)*pbVar5;
      pbVar4 = pbVar4 + 0x10;
    } while (puVar2 != (undefined1 *)0xff);
  }
  return puVar2;
}

