/**
 * @brief Entity animation frame: advances frame, checks wrap
 * @note Original: func_80076D68 at 0x80076D68
 */
// Entity_AnimFrame



/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_80076d68(int param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0xe);
  iVar4 = (uVar2 & 0xfff) - 1;
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    uVar5 = (int)*(short *)(iVar4 + 6) & 0xc000;
    if (uVar5 == 0x4000) {
      if ((uVar2 & 0x1000) == 0) {
        *(int *)(param_1 + 0x38) = iVar4 + 8;
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar4 + 8);
      }
      *(ushort *)(param_1 + 0xe) = *(ushort *)(*(int *)(param_1 + 0x38) + 6) & 0xfff;
      FUN_80076904(param_1);
      iVar4 = *(int *)(param_1 + 0x38);
      uVar2 = *(ushort *)(iVar4 + 6);
    }
    else {
      if (0x4000 < uVar5) {
        if (uVar5 == 0x8000) {
          *(ushort *)(param_1 + 0xe) = *(ushort *)(iVar4 + 6) & 0xfff;
          return 1;
        }
        if (uVar5 != 0xc000) {
          return 0;
        }
        if ((uVar2 & 0x1000) == 0) {
          *(int *)(param_1 + 0x38) = iVar4 + 8;
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar4 + 8);
        }
        *(ushort *)(param_1 + 0xe) = *(ushort *)(*(int *)(param_1 + 0x38) + 6) & 0xfff;
        FUN_80076904(param_1);
        iVar4 = *(int *)(param_1 + 0x38);
        uVar2 = *(ushort *)(iVar4 + 6);
        uVar3 = uVar2 & 0xc000;
        if ((uVar2 & 0x2000) == 0) {
          return 1;
        }
        if (uVar3 != 0x4000) {
          if (uVar3 < 0x4001) {
            if ((uVar2 & 0xc000) != 0) {
              return 1;
            }
            sVar1 = *(short *)(param_1 + 0xe);
            iVar4 = iVar4 + 8;
            goto LAB_8007700c;
          }
          if (uVar3 == 0x8000) {
            return 1;
          }
          if (uVar3 != 0xc000) {
            return 1;
          }
        }
        iVar4 = *(int *)(iVar4 + 8);
        sVar1 = *(short *)(param_1 + 0xe);
LAB_8007700c:
        FUN_80075ff8(param_1,iVar4,(int)sVar1);
        return 1;
      }
      if (uVar5 != 0) {
        return 0;
      }
      if ((uVar2 & 0x1000) == 0) {
        *(int *)(param_1 + 0x38) = iVar4 + 8;
      }
      *(ushort *)(param_1 + 0xe) = *(ushort *)(*(int *)(param_1 + 0x38) + 6) & 0xfff;
      FUN_80076904(param_1);
      iVar4 = *(int *)(param_1 + 0x38);
      uVar2 = *(ushort *)(iVar4 + 6);
    }
    if ((uVar2 & 0x2000) != 0) {
      uVar2 = uVar2 & 0xc000;
      if (uVar2 != 0x4000) {
        if (uVar2 < 0x4001) {
          if (uVar2 != 0) {
            return 0;
          }
          FUN_80075ff8(param_1,iVar4 + 8,(int)*(short *)(param_1 + 0xe));
          return 0;
        }
        if (uVar2 == 0x8000) {
          return 0;
        }
        if (uVar2 != 0xc000) {
          return 0;
        }
      }
      FUN_80075ff8(param_1,*(undefined4 *)(iVar4 + 8),(int)*(short *)(param_1 + 0xe));
      return 0;
    }
  }
  else {
    sVar1 = (short)iVar4;
    if (-1 < *(int *)(param_1 + 0x38)) {
      FUN_80075f0c(param_1);
      *(ushort *)(param_1 + 0xe) = sVar1 + (*(ushort *)(param_1 + 0xe) & 0x1000);
      return 2;
    }
    *(ushort *)(param_1 + 0xe) = sVar1 + (uVar2 & 0x1000);
  }
  return 0;
}
