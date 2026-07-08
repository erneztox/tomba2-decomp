
void FUN_8008fb60(ushort param_1,short param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(&DAT_80104c30 + (short)param_1 * 4) + param_2 * 0xb0);
  uVar1 = *(undefined1 *)*puVar3;
  *puVar3 = (undefined1 *)*puVar3 + 1;
  FUN_800952cc((int)(short)(param_1 | param_2 << 8),(int)*(char *)((int)puVar3 + 0x26),
               *(undefined1 *)((int)puVar3 + *(byte *)((int)puVar3 + 0x17) + 0x37),uVar1);
  uVar2 = FUN_80090160((int)(short)param_1,(int)param_2);
  puVar3[0x24] = uVar2;
  return;
}

