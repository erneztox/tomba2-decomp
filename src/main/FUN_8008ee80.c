
void FUN_8008ee80(short param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0;
  FUN_80092bf0();
  FUN_800931a0();
  *(byte *)(iVar2 + (uint)*(byte *)(iVar2 + 0x17) + 0x37) = *(byte *)(iVar2 + 0x17);
  *(undefined1 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x19) = 0;
  *(undefined2 *)((uint)*(byte *)(iVar2 + 0x17) * 2 + iVar2 + 0x60) = 0x7f;
  *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x17) + 0x27) = 0x40;
  uVar1 = FUN_80090160((int)param_1,(int)param_2);
  *(undefined4 *)(iVar2 + 0x90) = uVar1;
  return;
}

