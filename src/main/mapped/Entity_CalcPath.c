/**
 * @brief Entity path calculator: complex route computation toward target
 * @note Original: func_80021AB0 at 0x80021AB0
 */
// Entity_CalcPath



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80021ab0(int param_1,byte *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
           >> 0x10;
  iVar10 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
           >> 0x10;
  uVar5 = FUN_80084080(iVar11 * iVar11 + iVar10 * iVar10);
  bVar3 = false;
  if (((int)(uint)uVar5 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
     (bVar3 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
     (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80008c = (int)(short)uVar5;
    _DAT_1f80009c = FUN_80085690(-iVar10,iVar11);
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  if ((*param_2 & 8) != 0) {
    uVar6 = FUN_8001e860(param_1,param_2,0,0);
    goto LAB_80021dbc;
  }
  if (((*param_2 == 1) && (*(char *)(param_1 + 2) == '\x02')) &&
     (*(char *)(param_1 + 0x5f) == '\x10')) {
    bVar4 = *(byte *)(param_1 + 0x46) >> 1;
    if (bVar4 == 2) {
      iVar10 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
      sVar8 = (short)iVar10;
      if (iVar10 * 0x10000 < 0) {
        uVar7 = (uint)*(ushort *)(param_2 + 0x84);
        uVar6 = (uint)*(ushort *)(param_1 + 0x84);
        sVar8 = -sVar8;
      }
      else {
        uVar7 = (uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84);
        uVar6 = (uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84);
      }
      if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - _DAT_1f80008c <
          ((int)((uVar7 + uVar6) * 0x10000) >> 0x10) - (int)sVar8) goto LAB_80021cc8;
LAB_80021d3c:
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(param_2 + 0x32) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
    else if (bVar4 < 3) {
LAB_80021cc8:
      iVar10 = FUN_80083f50(*(short *)(param_1 + 0x68) + 0x800);
      sVar8 = *(short *)(param_1 + 0x80);
      sVar1 = *(short *)(param_2 + 0x80);
      iVar11 = FUN_80083e80(*(short *)(param_1 + 0x68) + 0x800);
      sVar2 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar10 * ((int)sVar8 + (int)sVar1) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar11 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
    }
    else if (bVar4 == 3) goto LAB_80021d3c;
    uVar9 = 0x1100;
  }
  else if (param_3 == 0) {
    uVar9 = 0x800;
  }
  else {
    uVar9 = 0;
  }
  uVar6 = FUN_8001dc9c(param_1,param_2,0,uVar9);
LAB_80021dbc:
  if ((uVar6 & 0x80) == 0) {
    DAT_1f800182 = 0;
  }
  return 1;
}
