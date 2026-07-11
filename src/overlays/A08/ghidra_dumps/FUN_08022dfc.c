// FUN_08022dfc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08022e3c) */
/* WARNING: Removing unreachable block (ram,0x08022e40) */
/* WARNING: Removing unreachable block (ram,0x0011be60) */

void FUN_08022dfc(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 auStack_b8 [42];
  
  iVar2 = func_0x00031220(0x914,param_2,0xffffffe2);
  puVar4 = &local_c8;
  puVar3 = (undefined4 *)&DAT_80109aa4;
  do {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar3 != (undefined4 *)0x80109b54);
  *puVar4 = uRam80109b54;
  if (iVar2 != 0) {
    param_1 = param_1 * 0x12;
    *(undefined2 *)(iVar2 + 0x52) = *(undefined2 *)((int)&local_c8 + param_1);
    *(undefined2 *)(iVar2 + 0x54) = *(undefined2 *)((int)&local_c8 + param_1 + 2);
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)((int)&local_c4 + param_1);
    *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)((int)&local_c4 + param_1 + 2);
    *(undefined2 *)(iVar2 + 0x5c) = *(undefined2 *)((int)&local_c0 + param_1);
    *(undefined2 *)(iVar2 + 0x5e) = *(undefined2 *)((int)&local_c0 + param_1 + 2);
    *(undefined2 *)(iVar2 + 0x60) = *(undefined2 *)((int)auStack_b8 + param_1 + -4);
    *(undefined2 *)(iVar2 + 0x62) = *(undefined2 *)((int)auStack_b8 + param_1 + -2);
    uVar1 = *(undefined2 *)((int)auStack_b8 + param_1);
    *(undefined2 *)(iVar2 + 0x5a) = param_3;
    *(undefined2 *)(iVar2 + 0x50) = uVar1;
  }
  return;
}

