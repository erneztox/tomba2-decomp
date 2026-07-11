// FUN_80133a24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80133a24(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_t0;
  
  bVar3 = *(byte *)(param_1 + 4);
  iVar7 = param_1 + 0x50;
  if (bVar3 != 1) {
    bVar4 = bVar3 < 2;
    if (!(bool)bVar4) {
      if (3 < bVar3) {
        uRam80109fc0 = 0x80;
        return;
      }
      bVar4 = *(byte *)(param_1 + 7);
      goto LAB_8013cdc4;
    }
    if (bVar3 != 0) goto LAB_8013cdc4;
    uVar5 = *(undefined4 *)((*(byte *)(param_1 + 3) - 1) * 4 + -0x7fef603c);
    *(undefined4 *)(param_1 + 4) = 0x10001;
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    iVar6 = (uint)*(byte *)(param_1 + 3) * 6;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar6 + -0x7fef602a);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + -0x7fef6028);
    uVar1 = *(undefined2 *)(iVar6 + -0x7fef6026);
    *(undefined1 **)(param_1 + 0x3c) = &uRam80109fc0;
    *(undefined2 *)(param_1 + 0x32) = 0xffba;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x30) = uVar1;
    if (5 < DAT_800bf9e0) {
      *(undefined1 *)(param_1 + 5) = 7;
      FUN_8013cab8();
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING (jumptable): Read-only address (ram,0x80109fc0) is written */
                    /* WARNING: Read-only address (ram,0x80109fc0) is written */
    uRam80109fc0 = 0x10;
  }
  if (DAT_800e7feb == '\x01') {
                    /* WARNING: Read-only address (ram,0x80109fc0) is written */
    return;
  }
  if (DAT_800bf9e0 < 0x14) {
    if (DAT_800bf816 == '\x01') {
      return;
    }
    if (0x10 < DAT_800e7eaa) {
      return;
    }
    cVar2 = *(char *)(param_1 + 6) + -1;
    *(char *)(param_1 + 6) = cVar2;
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 6) = 3;
      bVar3 = *(char *)(param_1 + 7) + 1;
      *(byte *)(param_1 + 7) = bVar3;
      if (5 < bVar3) {
        *(undefined1 *)(param_1 + 7) = 0;
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      if ((*(char *)(param_1 + 3) == '\x01') || (*(char *)(param_1 + 3) == '\x03')) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(param_1 + 5)) {
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      bVar4 = func_0x8002b278(param_1);
    }
  }
  else {
    bVar4 = 0;
    *(undefined1 *)(param_1 + 4) = 3;
  }
LAB_8013cdc4:
  if ((bVar4 & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(*(int *)(iVar7 + 0xfc) + 0x40) = param_3 + *(int *)(param_2 + 0x3c);
  if ((*(byte *)(in_t0 * 8 + -0x7feb40f5) & 0x10) != 0) {
    *(ushort *)(iVar7 + 0x62) = *(ushort *)(iVar7 + 0x62) | 8;
    return;
  }
  *(ushort *)(iVar7 + 0x62) = *(ushort *)(iVar7 + 0x62) & 0xfff7;
  return;
}

