
undefined2 * FUN_80018df0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)0x0;
  if (DAT_800256ec != 0) {
    FUN_80017cec();
    puVar1 = DAT_8002677c;
    puVar2 = DAT_80026778;
    DAT_8002571e = *DAT_8002677c;
    DAT_80025720 = *DAT_80026780;
    *DAT_8002677c = 0;
    *puVar2 = *puVar1;
    *DAT_80026780 = *DAT_80026780 & 0x77777777;
    FUN_8001875c();
    DAT_800256ec = 0;
    puVar2 = &DAT_800256ec;
  }
  return puVar2;
}

