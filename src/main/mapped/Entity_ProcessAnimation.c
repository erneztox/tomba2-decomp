/**
 * @brief Processes entity animation and updates GTE matrix
 * @note Original address: 0x8003F174
 */
// Entity_ProcessAnimation

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_ProcessAnimation(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 8) != '\0') &&
     (iVar2 = 0, iVar3 = param_1, *(char *)(param_1 + 9) != '\0')) {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar2) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0xc0);
      setCopControlWord(2,0,*(undefined4 *)(iVar1 + 0x18));
      setCopControlWord(2,0x800,*(undefined4 *)(iVar1 + 0x1c));
      setCopControlWord(2,0x1000,*(undefined4 *)(iVar1 + 0x20));
      setCopControlWord(2,0x1800,*(undefined4 *)(iVar1 + 0x24));
      setCopControlWord(2,0x2000,*(undefined4 *)(iVar1 + 0x28));
      setCopControlWord(2,0x2800,*(undefined4 *)(iVar1 + 0x2c));
      setCopControlWord(2,0x3000,*(undefined4 *)(iVar1 + 0x30));
      setCopControlWord(2,0x3800,*(undefined4 *)(iVar1 + 0x34));
      FUN_8003f698(*(undefined4 *)(iVar1 + 0x40),_DAT_800ed8c8,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 9));
  }
  return;
}

