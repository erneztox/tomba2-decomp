/**
 * @brief Entity background spawner: allocs background, sets pos + callback
 * @note Original: func_800537B8 at 0x800537B8
 */
// Entity_BGSpawn



int FUN_800537b8(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_8007ab20();
  iVar6 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x14a);
    *(undefined2 *)(iVar4 + 0x54) = 0;
    *(undefined1 *)(iVar4 + 0x46) = uVar2;
    uVar3 = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(iVar4 + 0x58) = 0;
    *(code **)(iVar4 + 0x1c) = FUN_80068fbc;
    *(undefined2 *)(iVar4 + 0x56) = uVar3;
    uVar2 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar4 + 2) = 0;
    *(undefined1 *)(iVar4 + 3) = param_3;
    *(undefined1 *)(iVar4 + 0x5e) = 0;
    *(undefined1 *)(iVar4 + 0x2a) = uVar2;
    *(undefined1 *)(iVar4 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(iVar4 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(iVar4 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_2 + 9) = 0;
    *(undefined2 *)(iVar4 + 0x5c) = *(undefined2 *)(param_2 + 0x5c);
    *(undefined1 *)(iVar4 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(iVar4 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(iVar4 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    *(undefined1 *)(iVar4 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    iVar5 = iVar4;
    if (*(char *)(iVar4 + 9) != '\0') {
      do {
        puVar1 = (undefined4 *)(param_2 + 0xc0);
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar5 + 0xc0) = *puVar1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)*(byte *)(iVar4 + 9));
    }
  }
  return iVar4;
}
