// FUN_8011f36c

/* WARNING: Removing unreachable block (ram,0x801314bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011f36c(int param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *unaff_s2;
  
  *(undefined1 *)(param_1 + 8) = 0xd;
  cVar2 = '\x03';
  if (0xc < _DAT_800ed098) {
    iVar7 = 0;
    *(undefined1 *)(param_1 + 9) = 0xd;
    if (*(char *)(param_1 + 8) != '\0') {
      unaff_s2 = (undefined2 *)&DAT_801498c4;
      iVar8 = param_1;
      do {
        puVar3 = (undefined2 *)func_0x8007aae8();
        *(undefined2 **)(iVar8 + 0xc0) = puVar3;
        puVar3[3] = (short)iVar7 + -1;
        *puVar3 = 0;
        uVar1 = *unaff_s2;
        unaff_s2 = unaff_s2 + 1;
        iVar8 = iVar8 + 4;
        param_2 = 0xc;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[1] = uVar1;
        func_0x80051b04(puVar3,0xc,iVar7 + 0x18);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(param_1 + 8));
    }
    iVar8 = 0xf;
    iVar7 = param_1 + 0x1e;
    *(undefined1 *)(param_1 + 0xb) = 0x20;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined **)(param_1 + 0x18) = &DAT_8013e9d8;
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
    do {
      *(undefined2 *)(iVar7 + 0x60) = 0;
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + -2;
    } while (-1 < iVar8);
    cVar2 = *(char *)(param_1 + 3);
    if (cVar2 == '\0') {
      *(undefined2 *)(param_1 + 0x56) = 0xd28;
      FUN_80117cf8(param_1);
      FUN_80128448();
      return;
    }
    if (cVar2 != '\x01') {
      *(undefined1 *)(param_1 + 0x5e) = 0;
      if (cVar2 == '\x01') {
        *(undefined1 *)(param_1 + 5) = 0;
        return;
      }
      uVar6 = *(ushort *)(param_1 + 0x68) & 0x7fff;
      if (uVar6 == 1) {
        iVar7 = (int)*(short *)(param_1 + 100) + (int)*(short *)(param_1 + 0x66);
        iVar8 = -(iVar7 >> 0x1f);
        uVar5 = iVar7 + iVar8;
        uVar6 = (uint)*(byte *)(iVar8 + 0x49);
      }
      else {
        if (1 < uVar6) {
          if (uVar6 == 2) {
            *(short *)(param_1 + 0x48) = (*(short *)(param_1 + 0x66) - (short)param_2) * 0x10;
            *(undefined2 *)(param_1 + 0x40) = 0x10;
            *(undefined1 *)(param_1 + 5) = 1;
            *(undefined1 *)(param_1 + 6) = 4;
            return;
          }
          FUN_80131490();
          return;
        }
        if ((*(ushort *)(param_1 + 0x68) & 0x7fff) != 0) {
          FUN_80131490();
          return;
        }
        uVar5 = (uint)*(ushort *)(param_1 + 100) - param_2;
      }
      if (uVar6 != uVar5) {
        FUN_80118974(*(undefined4 *)(unaff_s2 + 0x68));
      }
      FUN_8013a184(unaff_s2);
      FUN_8013989c(unaff_s2);
      *(undefined1 *)unaff_s2 = 1;
      unaff_s2[0x41] = 0xc0;
      *(undefined1 *)((int)unaff_s2 + 0x29) = 0;
      unaff_s2[0x40] = 0x60;
      unaff_s2[0x42] = 0x10;
      unaff_s2[0x43] = 0x60;
      *(char *)(unaff_s2 + 2) = *(char *)(unaff_s2 + 2) + '\x01';
      return;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x6a4;
    uVar4 = FUN_80117f3c();
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined2 *)(param_1 + 0x72) = 400;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0x280;
    *(undefined2 *)(param_1 + 0x7c) = 400;
    *(undefined2 *)(param_1 + 0x7e) = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined2 *)(param_1 + 0x7a) = 0x200;
    }
    cVar2 = *(char *)(param_1 + 4) + '\x01';
  }
  *(char *)(param_1 + 4) = cVar2;
  return;
}

