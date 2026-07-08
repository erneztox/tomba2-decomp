
void FUN_8008e860(ushort param_1,short param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(&DAT_80104c30 + (short)param_1 * 4) + param_2 * 0xb0;
  iVar3 = iVar2 + (uint)*(byte *)(iVar2 + 0x17);
  FUN_80095d10((int)(short)(param_1 | param_2 << 8),(int)*(char *)(iVar2 + 0x26),
               *(undefined1 *)(iVar3 + 0x37),
               *(undefined2 *)((uint)*(byte *)(iVar2 + 0x17) * 2 + iVar2 + 0x60),param_3);
  *(undefined1 *)(iVar3 + 0x27) = param_3;
  uVar1 = FUN_80090160((int)(short)param_1,(int)param_2);
  *(undefined4 *)(iVar2 + 0x90) = uVar1;
  return;
}

