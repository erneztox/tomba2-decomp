
void FUN_80018ebc(void)

{
  undefined2 *puVar1;
  undefined2 *unaff_s0;
  
  puVar1 = DAT_8002677c;
  *unaff_s0 = 1;
  *puVar1 = unaff_s0[0x19];
  *DAT_80026780 = *(undefined4 *)(unaff_s0 + 0x1a);
  FUN_80017cfc();
  FUN_800186f8();
  return;
}

