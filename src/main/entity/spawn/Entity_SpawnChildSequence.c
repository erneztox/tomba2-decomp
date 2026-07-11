/**
 * @brief Spawns a sequence of child entities using a count/distribution table
 * @note Original: func_80027144 at 0x80027144
 */
// Entity_SpawnChildSequence



void FUN_80027144(undefined4 param_1,int param_2,undefined2 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_800270f8();
  iVar5 = 0;
  if ((param_4 & 0xf) != 0) {
    bVar1 = 0 < iVar2;
    do {
      if (!bVar1) {
        return;
      }
      iVar3 = FUN_8007b26c();
      if (iVar3 != 0) {
        iVar3->flags = (byte)((int)(param_4 << 0x10) >> 0x14) & 0xf;
        *(undefined2 *)(iVar3 + 0xc) = param_3;
        iVar3->kind = (char)iVar5;
        *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(param_2 + 2);
        *(undefined2 *)(iVar3 + 0x22) = *(undefined2 *)(param_2 + 6);
        *(undefined2 *)(iVar3 + 0x26) = *(undefined2 *)(param_2 + 10);
        iVar4 = iVar5;
        if (((int)(param_4 << 0x10) >> 0x10 & 0x8000U) != 0) {
          iVar4 = (iVar2 - iVar5) + -1;
        }
        FUN_80027058(iVar3,param_1,iVar4);
      }
      iVar5 = iVar5 + 1;
      bVar1 = iVar5 < iVar2;
    } while (iVar5 < (int)(param_4 & 0xf));
  }
  return;
}
