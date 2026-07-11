// FUN_80121ce8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80121ce8(undefined1 *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  bVar1 = param_1[4];
  uVar3 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[5]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((DAT_1f800207 == '\x0f') || (DAT_1f800207 == '\x11')) {
      param_1[1] = 1;
      uVar3 = func_0x80077ebc();
    }
    else {
      uVar3 = func_0x80077870();
    }
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 3;
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_8012aeec;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_3 = 0;
      iVar4 = func_0x80051b70(param_1,0xc);
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x160;
      *(undefined2 *)(param_1 + 0x82) = 0x2c0;
      *(undefined2 *)(param_1 + 0x84) = 0xa2;
      *(undefined2 *)(param_1 + 0x86) = 0x144;
      *(undefined2 *)(param_1 + 0x2e) = 0x3040;
      *(undefined2 *)(param_1 + 0x32) = 0xe821;
      *param_1 = 1;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x36) = 0x2a00;
      param_1[3] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
      puVar5 = param_1;
      func_0x800517f8();
      uVar3 = 0x1e;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      param_1 = puVar5;
    }
  }
LAB_8012aeec:
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar3 + 0x34);
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x2e) + (*(short *)(*(int *)(param_3 + 0xd8) + 0x18) >> 6);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (*(short *)(*(int *)(param_3 + 0xd8) + 0x1e) >> 6);
  *(short *)(param_1 + 0x36) =
       *(short *)(param_1 + 0x36) + (*(short *)(*(int *)(param_3 + 0xd8) + 0x24) >> 6);
  if ((*(char *)(param_3 + 4) == '\x01') &&
     (cVar2 = *(char *)(param_3 + 1), param_1[1] = cVar2, cVar2 != '\0')) {
    func_0x80077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

