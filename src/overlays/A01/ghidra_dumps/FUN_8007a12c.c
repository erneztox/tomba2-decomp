// FUN_8007a12c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8007a12c(int param_1,undefined1 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  puVar2 = _DAT_800ed8d4;
  if (_DAT_800ed8d4 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar5 = *(undefined4 *)(_DAT_800ed8d4 + 0x24);
  DAT_800ed8c5 = DAT_800ed8c5 + -1;
  if (param_4 == 1) {
    piVar6 = (int *)&DAT_800f2624;
    piVar4 = (int *)&DAT_800f239c;
  }
  else if ((param_4 < 2) || (param_4 != 2)) {
    piVar6 = (int *)&DAT_800fb168;
    piVar4 = (int *)&DAT_800f23a8;
  }
  else {
    piVar6 = (int *)&DAT_800f2738;
    piVar4 = (int *)&DAT_800f23a0;
  }
  if (param_3 != 1) {
    if (1 < param_3) {
      if (param_3 == 2) {
        if (*(int *)(param_1 + 0x24) != 0) {
          piVar4 = (int *)(_DAT_800ed8d4 + 0x20);
          _DAT_800ed8d4 = (undefined1 *)uVar5;
          *piVar4 = param_1;
          *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
          *(undefined1 **)(*(int *)(param_1 + 0x24) + 0x20) = puVar2;
          *(undefined1 **)(param_1 + 0x24) = puVar2;
          uVar5 = _DAT_800ed8d4;
          goto LAB_8007a2b0;
        }
      }
      else if (param_3 != 3) goto LAB_8007a2b0;
      iVar3 = *piVar4;
      puVar1 = (undefined4 *)(_DAT_800ed8d4 + 0x24);
      _DAT_800ed8d4 = (undefined1 *)uVar5;
      *puVar1 = 0;
      *(int *)(puVar2 + 0x20) = iVar3;
      if (*piVar4 == 0) {
        *piVar6 = (int)puVar2;
      }
      else {
        *(undefined1 **)(*piVar4 + 0x24) = puVar2;
      }
      *piVar4 = (int)puVar2;
      uVar5 = _DAT_800ed8d4;
      goto LAB_8007a2b0;
    }
    if (param_3 != 0) goto LAB_8007a2b0;
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar4 = (int *)(_DAT_800ed8d4 + 0x20);
      _DAT_800ed8d4 = (undefined1 *)uVar5;
      *piVar4 = *(int *)(param_1 + 0x20);
      *(int *)(puVar2 + 0x24) = param_1;
      *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x24) = puVar2;
      *(undefined1 **)(param_1 + 0x20) = puVar2;
      uVar5 = _DAT_800ed8d4;
      goto LAB_8007a2b0;
    }
  }
  puVar1 = (undefined4 *)(_DAT_800ed8d4 + 0x20);
  _DAT_800ed8d4 = (undefined1 *)uVar5;
  *puVar1 = 0;
  *(int *)(puVar2 + 0x24) = *piVar6;
  if (*piVar6 == 0) {
    *piVar4 = (int)puVar2;
  }
  else {
    *(undefined1 **)(*piVar6 + 0x20) = puVar2;
  }
  *piVar6 = (int)puVar2;
  uVar5 = _DAT_800ed8d4;
LAB_8007a2b0:
  _DAT_800ed8d4 = (undefined1 *)uVar5;
  puVar2[10] = (char)param_4;
  *puVar2 = 2;
  puVar2[0xc] = param_2;
  return puVar2;
}

