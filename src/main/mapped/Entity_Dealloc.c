/**
 * @brief Deallocates entity: removes from linked list, returns to pool, cleans up sprite
 * @note Original: func_8007A624 at 0x8007A624
 */
// Entity_Dealloc



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007a624(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)param_1 + 10) == '\0') {
    puVar2 = (undefined4 *)&DAT_800fb168;
    puVar3 = (undefined4 *)&DAT_800f23a8;
  }
  else {
    puVar2 = (undefined4 *)&DAT_800f2624;
    puVar3 = (undefined4 *)&DAT_800f239c;
  }
  if (param_1[8] == 0) {
    *puVar2 = param_1[9];
    if (param_1[9] != 0) {
      *(undefined4 *)(param_1[9] + 0x20) = 0;
      goto LAB_8007a6a0;
    }
LAB_8007a6bc:
    *puVar3 = param_1[8];
    if (param_1[8] != 0) {
      *(undefined4 *)(param_1[8] + 0x24) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1[8] + 0x24) = param_1[9];
LAB_8007a6a0:
    if (param_1[9] == 0) goto LAB_8007a6bc;
    *(undefined4 *)(param_1[9] + 0x20) = param_1[8];
  }
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0x7f;
  switch(bVar1 & 0x7f) {
  case 0:
    DAT_800e7e7c = DAT_800e7e7c + '\x01';
    puVar2 = param_1;
    param_1[9] = _DAT_800e8098;
    _DAT_800e8098 = puVar2;
    goto switchD_8007a710_default;
  case 1:
    DAT_800e7e7d = DAT_800e7e7d + '\x01';
    puVar2 = _DAT_800e80a0;
    _DAT_800e80a0 = param_1;
    break;
  case 2:
    DAT_800ed8cc = DAT_800ed8cc + '\x01';
    puVar2 = _DAT_800f2398;
    _DAT_800f2398 = param_1;
    break;
  case 3:
    DAT_800ed8c5 = DAT_800ed8c5 + '\x01';
    puVar2 = _DAT_800ed8d4;
    _DAT_800ed8d4 = param_1;
    break;
  case 4:
    DAT_800ed8c4 = DAT_800ed8c4 + '\x01';
    puVar2 = _DAT_800ed8d0;
    _DAT_800ed8d0 = param_1;
    break;
  default:
    goto switchD_8007a710_default;
  }
  param_1[9] = puVar2;
  FUN_8007addc(param_1);
switchD_8007a710_default:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  return;
}
