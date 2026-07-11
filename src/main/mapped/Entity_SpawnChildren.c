/**
 * @brief Entity children spawner: iterates table at 0x800A4BB8
 * @note Original: func_8006FC34 at 0x8006FC34
 */
// Entity_SpawnChildren



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8006fc34(undefined4 param_1,byte param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar3 = FUN_80072ddc(param_1,(&DAT_800a4bb8)[iVar5],3,4);
    iVar5 = iVar5 + 1;
    if (iVar3 != 0) {
      *(code **)(iVar3 + 0x1c) = FUN_80070018;
      *(byte *)(iVar3 + 3) = param_2 & 0x7f;
      *(byte *)(iVar3 + 0x5f) = param_2 & 0x80;
      *(undefined4 *)(iVar3 + 0x10) = param_1;
      iVar5 = (uint)*(byte *)(iVar3 + 3) * 8;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      if (*(char *)(iVar3 + 0x5f) == '\0') {
        iVar4 = FUN_80051b70(iVar3,(int)*(short *)(&DAT_800a29ce + iVar5),
                             (int)*(short *)(&DAT_800a29cc + iVar5));
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x3c) = _DAT_800ecf58;
        FUN_80077b38(iVar3,&PTR_DAT_80017334,(int)*(short *)(&DAT_800a29cc + iVar5));
        *(undefined1 *)(iVar3 + 0xd) = 0;
        *(undefined1 *)(iVar3 + 0xb) = 0x10;
        *(undefined1 *)(iVar3 + 0x47) = 0;
        if (((int)*(short *)(&DAT_800a29ce + iVar5) & 0x8000U) != 0) {
          *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) | 1;
        }
        uVar1 = *(ushort *)(&DAT_800a29ce + iVar5);
        *(undefined2 *)(iVar3 + 0x5a) = 0;
        *(undefined1 *)(iVar3 + 8) = 0xf0;
        *(ushort *)(iVar3 + 0x5c) = uVar1 & 0x7fff;
      }
      *(byte *)(iVar3 + 0x5f) = *(byte *)(iVar3 + 0x5f) | 2;
      uVar2 = *(undefined2 *)(&DAT_800a29d2 + iVar5);
      *(undefined2 *)(iVar3 + 0x60) = 0xffe0;
      *(undefined2 *)(iVar3 + 0x62) = 0;
      *(undefined2 *)(iVar3 + 0x54) = 0;
      *(undefined2 *)(iVar3 + 0x56) = 0;
      *(undefined2 *)(iVar3 + 0x58) = 0;
      *(undefined2 *)(iVar3 + 0x68) = uVar2;
      if (DAT_800bf816 == '\0') {
        *(undefined1 *)(iVar3 + 0xbe) = 0;
      }
      else {
        *(undefined1 *)(iVar3 + 0xbe) = 1;
      }
      *(undefined2 *)(iVar3 + 0x74) = 0;
      return iVar3;
    }
  } while (iVar5 < 3);
  return 0;
}
