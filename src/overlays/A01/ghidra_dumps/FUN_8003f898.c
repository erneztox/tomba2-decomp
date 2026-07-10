// FUN_8003f898

void FUN_8003f898(int param_1)

{
  undefined1 auStack_58 [7];
  undefined1 local_51;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  if (*(short **)(param_1 + 0x38) != (short *)0x0) {
    FUN_8003b054(auStack_58,
                 *(int *)(param_1 + 0x3c) +
                 (int)*(short *)(*(int *)(param_1 + 0x3c) + **(short **)(param_1 + 0x38) * 4 + 2),0)
    ;
    local_51 = 0x2d;
    local_30 = *(undefined2 *)(param_1 + 0x60);
    local_2e = *(undefined2 *)(param_1 + 0x62);
    local_2c = *(undefined2 *)(param_1 + 100);
    local_28 = *(undefined2 *)(param_1 + 0x66);
    local_26 = *(undefined2 *)(param_1 + 0x68);
    local_24 = *(undefined2 *)(param_1 + 0x6a);
    local_20 = *(undefined2 *)(param_1 + 0x6c);
    local_1e = *(undefined2 *)(param_1 + 0x6e);
    local_1c = *(undefined2 *)(param_1 + 0x70);
    local_18 = *(undefined2 *)(param_1 + 0x72);
    local_16 = *(undefined2 *)(param_1 + 0x74);
    local_14 = *(undefined2 *)(param_1 + 0x76);
    FUN_80084660(&DAT_1f8000f8);
    FUN_80084690(&DAT_1f8000f8);
    FUN_8003b320(auStack_58,&local_30,0x10);
  }
  return;
}

