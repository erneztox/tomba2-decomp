// FUN_00002c74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00002d48) */
/* WARNING: Removing unreachable block (ram,0x00002d60) */
/* WARNING: Removing unreachable block (ram,0x00002d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c74(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  if (*(char *)(param_1 + 5) == '\0') {
    sVar2 = *(short *)(param_2 + 0x44);
    if (sVar2 < 0) {
      sVar2 = -sVar2;
    }
    if ((((*(char *)(param_2 + 0x145) != '\0') || (0x7ff < sVar2)) &&
        ((*(ushort *)(param_2 + 0x6a) >> 8 & 0xf) == 10)) &&
       (iVar1 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32)), iVar1 != 0)) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = _DAT_1f8001a4;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0xd,auStack_20,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0xe);
    *(short *)(param_1 + 0xe) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  return;
}

