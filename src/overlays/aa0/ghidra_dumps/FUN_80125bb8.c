// FUN_80125bb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80125bb8(int param_1,uint param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar3 = FUN_80130ac4(param_1);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x80077ebc(param_1);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_80131134(param_1);
    iVar3 = param_1;
    FUN_801316cc();
    if (DAT_800bf9d2 == '\0') {
      if ((*(ushort *)(param_1 + 0x78) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x78) = 5;
        func_0x8003116c();
        FUN_80140e1c();
        return;
      }
    }
    else if (DAT_800bf9d2 == -1) {
      if ((*(ushort *)(param_1 + 0x78) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x78) = 0x8005;
        *(undefined1 *)(param_1 + 5) = 4;
        *(undefined1 *)(param_1 + 6) = 0;
        if (iVar3 != 0xff) {
          if (((_DAT_00000043 == iVar3) && (cRam00000002 != '\0')) && ((param_2 & 0xffff) == 0)) {
            func_0x8004ed94(0x23,0x41);
          }
          if (DAT_00000004 != '\x03') {
            func_0x8009a450();
            return;
          }
        }
        *(undefined2 *)(*(int *)((DAT_0000000a - 1) * 4 + 0xc1) + 0x14) = 0xffe8;
        DAT_00000047 = 0xff;
        if ((cRam00000002 != '\0') && (iVar3 = func_0x80072ddc(1,2,2,0xe), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x1c) = 0x801234a4;
          *(undefined2 *)(iVar3 + 0x48) =
               *(undefined2 *)(*(int *)((DAT_0000000a - 1) * 4 + 0xc1) + 0x2c);
          *(short *)(iVar3 + 0x4a) =
               *(short *)(*(int *)((DAT_0000000a - 1) * 4 + 0xc1) + 0x30) + -0x8c;
          *(undefined2 *)(iVar3 + 0x4c) =
               *(undefined2 *)(*(int *)((DAT_0000000a - 1) * 4 + 0xc1) + 0x34);
        }
        return;
      }
    }
    else if ((*(ushort *)(param_1 + 0x78) & 1) != 0) {
      uVar2 = 0x8002;
      if ((*(ushort *)(param_1 + 0x78) & 0x8000) == 0) {
        uVar2 = 2;
      }
      *(undefined2 *)(param_1 + 0x78) = uVar2;
      if (0 < *(short *)(param_1 + 0x48)) {
        FUN_8012ed28();
        return;
      }
      if (*(short *)(param_1 + 0x48) < 0) {
        *(undefined2 *)(param_1 + 0x4e) = 0x80;
      }
    }
    if (*(char *)(param_1 + 3) == '\0') {
      func_0x80146348(param_1,*(undefined4 *)(param_1 + 200));
    }
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_8012e8a8(param_1);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
    FUN_8012ed70();
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_8012ed70();
        return;
      }
      func_0x8007a624(param_1);
    }
    return;
  }
  if (bVar1 == 0) {
    FUN_8012ed84(param_1);
    FUN_8012ed70();
    return;
  }
  FUN_8012ed70();
  return;
}

