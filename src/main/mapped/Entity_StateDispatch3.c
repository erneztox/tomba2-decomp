/**
 * @brief Entity state dispatch variant 3: entity[0x6A] dispatch
 * @note Original: func_800532A0 at 0x800532A0
 */
// Entity_StateDispatch3



/* WARNING: Removing unreachable block (ram,0x800532d0) */

undefined4 FUN_800532a0(int param_1)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x6a) >> 0xc;
  uVar5 = (*(ushort *)(param_1 + 0x6a) & 0xf00) >> 8;
  if (uVar5 < 4) {
    if (uVar5 == 0) {
      iVar6 = (int)*(short *)(param_1 + 0x142);
      cVar2 = -(char)(*(short *)(param_1 + 0x142) >> 7);
      if (uVar1 == 2) {
        cVar3 = cVar2 + '\x04';
        if (*(char *)(param_1 + 0x147) == '\0') {
          if (0 < (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10)) {
            *(short *)(param_1 + 0x44) = (short)*(ushort *)(param_1 + 0x44) >> 1;
          }
          goto LAB_800533ec;
        }
      }
      else {
        if (uVar1 != 3) goto LAB_800533ec;
        iVar4 = (int)*(short *)(param_1 + 0x44);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        cVar3 = cVar2 + '\x0e';
        if (iVar4 < 0x1500) {
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (iVar6 < 0xf0) goto LAB_800533ec;
          cVar3 = cVar2 + '\x0e';
        }
      }
    }
    else {
      if ((uVar1 != 3) || (DAT_800bf870 != '\x04')) goto LAB_800533ec;
      cVar3 = '\x06';
    }
  }
  else {
    if (uVar5 != 5) goto LAB_800533ec;
    if (uVar1 == 3) {
      if (DAT_800bf870 != '\x04') goto LAB_800533ec;
      cVar3 = '\x06';
    }
    else if ((uVar1 != 4) || (cVar3 = '\b', (*(ushort *)(param_1 + 0x17e) & 0x30) == 0))
    goto LAB_800533ec;
  }
  *(char *)(param_1 + 0x16a) = cVar3;
LAB_800533ec:
  cVar3 = (&DAT_800a4478)[(*(byte *)(param_1 + 0x16a) & 0xe) >> 1];
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 5) != cVar3) {
      *(char *)(param_1 + 5) = cVar3;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      return 1;
    }
    if (*(char *)(param_1 + 5) == '3') {
      return 1;
    }
  }
  return 0;
}
