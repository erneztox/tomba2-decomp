// FUN_0801fa18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801fa18(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 local_14;
  
  if (param_2 == -1) {
    bVar1 = DAT_800bf9bc + 1;
    iVar2 = func_0x0009a450();
    DAT_800bf9bc = ((char)iVar2 +
                   ((char)((ulonglong)((longlong)iVar2 * 0x55555556) >> 0x20) -
                   (char)(iVar2 >> 0x1f)) * -3) * '\x10' | bVar1 & 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_18 = _DAT_8010989c;
  local_14 = DAT_801098a0;
  iVar2 = func_0x0009a450();
  DAT_800bf9bc = *(byte *)((int)&local_18 + (iVar2 % 5 & 0xffU)) | (byte)(iVar2 % 5);
  return;
}

