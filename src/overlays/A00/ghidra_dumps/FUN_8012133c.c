// FUN_8012133c

void FUN_8012133c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [4];
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_44;
  undefined2 uStack_3c;
  short local_38;
  short sStack_36;
  undefined2 uStack_34;
  short local_30;
  short sStack_2e;
  undefined2 uStack_2c;
  short local_28;
  short sStack_26;
  undefined2 uStack_24;
  short local_20;
  short sStack_1e;
  undefined2 uStack_1c;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  local_30 = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
  local_38 = -local_30;
  sVar1 = *(short *)(param_1 + 0x6e);
  iVar2 = (int)sVar1;
  uStack_59 = 0x2d;
  uStack_4a = *(undefined2 *)(param_1 + 0x60);
  uStack_52 = *(undefined2 *)(param_1 + 0x62);
  uStack_54 = *(undefined2 *)(param_1 + 100);
  uStack_4c = *(undefined2 *)(param_1 + 0x66);
  uStack_44 = *(undefined2 *)(param_1 + 0x68);
  uStack_3c = *(undefined2 *)(param_1 + 0x6a);
  uStack_5c = 0x80;
  uStack_5b = 0x80;
  uStack_5a = 0x80;
  sStack_36 = 0;
  uStack_34 = 0;
  sStack_2e = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_1c = 0;
  iVar3 = (int)(uint)*(ushort *)(param_2 + 0x3a) / iVar2;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (*(ushort *)(param_2 + 0x3a) == 0x80000000)) {
    trap(0x1800);
  }
  iVar2 = 0;
  local_28 = local_38;
  sStack_26 = sVar1;
  local_20 = local_30;
  sStack_1e = sVar1;
  if (-1 < iVar3) {
    do {
      iVar2 = iVar2 + 1;
      func_0x8003b320(auStack_60,&local_38,(int)*(short *)(param_1 + 0x70));
      sStack_36 = sStack_36 + sVar1;
      sStack_2e = sStack_2e + sVar1;
      sStack_26 = sStack_26 + sVar1;
      sStack_1e = sStack_1e + sVar1;
    } while (iVar2 <= iVar3);
  }
  return;
}

