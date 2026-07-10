// FUN_80079c3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80079c3c(int param_1,undefined1 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  puVar2 = _DAT_800e8098;
  if (DAT_800e7e7c < 3) {
    return (undefined1 *)0x0;
  }
  DAT_800e7e7c = DAT_800e7e7c - 1;
  uVar4 = *(undefined4 *)(_DAT_800e8098 + 0x24);
  if (param_4 == 1) {
    piVar6 = (int *)&DAT_800f2624;
    piVar5 = (int *)&DAT_800f239c;
  }
  else if ((param_4 < 2) || (param_4 != 2)) {
    piVar6 = (int *)&DAT_800fb168;
    piVar5 = (int *)&DAT_800f23a8;
  }
  else {
    piVar6 = (int *)&DAT_800f2738;
    piVar5 = (int *)&DAT_800f23a0;
  }
  if (param_3 != 1) {
    if (1 < param_3) {
      if (param_3 == 2) {
        if (*(int *)(param_1 + 0x24) != 0) {
          piVar5 = (int *)(_DAT_800e8098 + 0x20);
          _DAT_800e8098 = (undefined1 *)uVar4;
          *piVar5 = param_1;
          *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
          *(undefined1 **)(*(int *)(param_1 + 0x24) + 0x20) = puVar2;
          *(undefined1 **)(param_1 + 0x24) = puVar2;
          uVar4 = _DAT_800e8098;
          goto LAB_80079dc4;
        }
      }
      else if (param_3 != 3) goto LAB_80079dc4;
      iVar3 = *piVar5;
      puVar1 = (undefined4 *)(_DAT_800e8098 + 0x24);
      _DAT_800e8098 = (undefined1 *)uVar4;
      *puVar1 = 0;
      *(int *)(puVar2 + 0x20) = iVar3;
      if (*piVar5 == 0) {
        *piVar6 = (int)puVar2;
      }
      else {
        *(undefined1 **)(*piVar5 + 0x24) = puVar2;
      }
      *piVar5 = (int)puVar2;
      uVar4 = _DAT_800e8098;
      goto LAB_80079dc4;
    }
    if (param_3 != 0) goto LAB_80079dc4;
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar5 = (int *)(_DAT_800e8098 + 0x20);
      _DAT_800e8098 = (undefined1 *)uVar4;
      *piVar5 = *(int *)(param_1 + 0x20);
      *(int *)(puVar2 + 0x24) = param_1;
      *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x24) = puVar2;
      *(undefined1 **)(param_1 + 0x20) = puVar2;
      uVar4 = _DAT_800e8098;
      goto LAB_80079dc4;
    }
  }
  puVar1 = (undefined4 *)(_DAT_800e8098 + 0x20);
  _DAT_800e8098 = (undefined1 *)uVar4;
  *puVar1 = 0;
  *(int *)(puVar2 + 0x24) = *piVar6;
  if (*piVar6 == 0) {
    *piVar5 = (int)puVar2;
  }
  else {
    *(undefined1 **)(*piVar6 + 0x20) = puVar2;
  }
  *piVar6 = (int)puVar2;
  uVar4 = _DAT_800e8098;
LAB_80079dc4:
  _DAT_800e8098 = (undefined1 *)uVar4;
  puVar2[10] = (char)param_4;
  *puVar2 = 2;
  puVar2[0xc] = param_2;
  return puVar2;
}

