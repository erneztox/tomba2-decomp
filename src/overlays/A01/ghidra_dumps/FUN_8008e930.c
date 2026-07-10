// FUN_8008e930

void FUN_8008e930(ushort param_1,short param_2,undefined1 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(&DAT_80104c30 + (short)param_1 * 4) + param_2 * 0xb0;
  bVar1 = *(byte *)(iVar3 + 0x17);
  iVar4 = iVar3 + (uint)bVar1;
  FUN_800953b0((int)*(char *)(iVar3 + 0x26),*(undefined1 *)(iVar4 + 0x37),param_3);
  FUN_80095d10((int)(short)(param_1 | param_2 << 8),(int)*(char *)(iVar3 + 0x26),
               *(undefined1 *)(iVar4 + 0x37),*(undefined2 *)((uint)bVar1 * 2 + iVar3 + 0x60),
               *(undefined1 *)(iVar4 + 0x27));
  uVar2 = FUN_80090160((int)(short)param_1,(int)param_2);
  *(undefined4 *)(iVar3 + 0x90) = uVar2;
  return;
}

