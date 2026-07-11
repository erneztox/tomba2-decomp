/**
 * @brief Entity spawn in background: AllocBackground, sets position + callbacks
 * @note Original: func_800534B0 at 0x800534B0
 */
// Entity_SpawnBackground



void FUN_800534b0(int param_1,undefined1 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_8007ab20();
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    uVar1 = *(undefined1 *)(param_1 + 0x14a);
    *(undefined2 *)(iVar2 + 0x54) = 0;
    *(undefined2 *)(iVar2 + 0x58) = 0;
    *(undefined1 *)(iVar2 + 0x46) = uVar1;
    if (param_3 == 0) {
      *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    }
    else {
      *(short *)(iVar2 + 0x56) = *(short *)(param_1 + 0x56) + -0x800;
    }
    *(undefined **)(iVar2 + 0x1c) = (&PTR_FUN_800a4480)[param_4 + -1];
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(char *)(iVar2 + 2) = (char)param_4;
    *(undefined1 *)(iVar2 + 3) = param_2;
    *(undefined1 *)(iVar2 + 0x2a) = uVar1;
    *(undefined1 *)(iVar2 + 0x5e) = *(undefined1 *)(param_1 + 0xbe);
    if (param_4 - 4U < 3) {
      DAT_1f800231 = DAT_1f800231 + '\x01';
    }
    else if (param_4 == 0xb) {
      DAT_1f800251 = DAT_1f800251 + '\x01';
    }
  }
  return;
}
