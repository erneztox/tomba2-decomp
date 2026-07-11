// FUN_08044c24

void FUN_08044c24(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [4];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_44;
  undefined2 local_3c;
  short local_38;
  short local_36;
  undefined2 local_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  local_30 = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
  local_38 = -local_30;
  sVar1 = *(short *)(param_1 + 0x6e);
  iVar2 = (int)sVar1;
  local_59 = 0x2d;
  local_4a = *(undefined2 *)(param_1 + 0x60);
  local_52 = *(undefined2 *)(param_1 + 0x62);
  local_54 = *(undefined2 *)(param_1 + 100);
  local_4c = *(undefined2 *)(param_1 + 0x66);
  local_44 = *(undefined2 *)(param_1 + 0x68);
  local_3c = *(undefined2 *)(param_1 + 0x6a);
  local_5c = 0x80;
  local_5b = 0x80;
  local_5a = 0x80;
  local_34 = 0;
  local_36 = *(short *)(param_2 + 0x3a) - sVar1;
  local_2c = 0;
  local_2e = *(short *)(param_2 + 0x3a) - sVar1;
  local_26 = *(short *)(param_2 + 0x3a);
  local_24 = 0;
  local_1e = *(short *)(param_2 + 0x3a);
  local_1c = 0;
  iVar3 = (int)(uint)*(ushort *)(param_2 + 0x3a) / iVar2;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (*(ushort *)(param_2 + 0x3a) == 0x80000000)) {
    trap(0x1800);
  }
  iVar2 = 0;
  local_28 = local_38;
  local_20 = local_30;
  if (0 < iVar3) {
    do {
      iVar2 = iVar2 + 1;
      func_0x0003b320(auStack_60,&local_38,(int)*(short *)(param_1 + 0x70));
      local_36 = local_36 - sVar1;
      local_2e = local_2e - sVar1;
      local_26 = local_26 - sVar1;
      local_1e = local_1e - sVar1;
    } while (iVar2 < iVar3);
  }
  local_36 = 0;
  local_2e = 0;
  func_0x0003b320(auStack_60,&local_38,(int)*(short *)(param_1 + 0x70));
  return;
}

