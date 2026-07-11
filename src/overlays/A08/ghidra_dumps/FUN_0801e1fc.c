// FUN_0801e1fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801e228) */

void FUN_0801e1fc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = *(byte *)(param_1 + 4);
  if (2 < bVar3) {
    if (bVar3 != 3) {
      halt_baddata();
    }
    func_0x0007a624();
    return;
  }
  if (bVar3 == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x2d;
    *(undefined4 *)(param_1 + 0x3c) = 0x80144508;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffec;
    bVar3 = *(byte *)(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (bVar3 == 1) {
    *(short *)(param_1 + 0x4e) =
         *(short *)(param_1 + 0x4e) + (short)(0x100 - *(short *)(param_1 + 0x4e) >> 3);
    uVar2 = 2;
    if (*(byte *)(*(int *)(param_1 + 0x10) + 4) < 2) {
      cVar1 = *(char *)(param_1 + 5);
      *(char *)(param_1 + 5) = cVar1 + -1;
      if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0801e304;
    }
  }
  else {
    iVar4 = (uint)*(ushort *)(param_1 + 0x4e) + (-(int)*(short *)(param_1 + 0x4e) >> 3);
    *(short *)(param_1 + 0x4e) = (short)iVar4;
    uVar2 = 3;
    if (0x20 < iVar4 * 0x10000 >> 0x10) goto LAB_0801e304;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
LAB_0801e304:
  iVar4 = *(short *)(param_1 + 0x4e) * 3 >> 5;
  *(uint *)(param_1 + 0x50) = (iVar4 + 0x13) * 0x10000 | iVar4 + 3U | 0x1000;
  cVar1 = *(char *)(param_1 + 0x29);
  *(int *)(param_1 + 0x54) = (0x100 - *(short *)(param_1 + 0x4e)) * 4;
  bVar3 = cVar1 + 3;
  *(byte *)(param_1 + 0x29) = bVar3;
  if (0x37 < bVar3) {
    *(char *)(param_1 + 0x29) = cVar1 + -0x35;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

