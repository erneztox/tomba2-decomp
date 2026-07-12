/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018A00 at 0x80018A00
 */
// GPU_Setup5



undefined2 * GPU_Setup5(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_8002677c;
  puVar1 = DAT_80026778;
  puVar3 = (undefined2 *)0x0;
  if (DAT_800256ec == 0) {
    *DAT_8002677c = 0;
    *puVar1 = *puVar2;
    *DAT_80026780 = 0x33333333;
    GPU_Setup5(&DAT_800256ec,0x41a);
    iVar4 = GPU_Setup5(&DAT_80025724);
    if (iVar4 != 0) {
      GPU_Setup5();
    }
    DAT_80025728 = &DAT_80026704;
    GPU_Setup5(&DAT_80025724);
    DAT_800256ec = 1;
    uVar5 = GPU_Setup5();
    *(undefined4 *)(DAT_80026774 + 0x14) = uVar5;
    uVar5 = GPU_Setup5();
    *(undefined4 *)(DAT_80026774 + 4) = uVar5;
    GPU_Setup5();
    puVar3 = &DAT_800256ec;
    GPU_Setup5();
  }
  return puVar3;
}
