// FUN_8011492c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80126990) */
/* WARNING: Removing unreachable block (ram,0x801269ac) */
/* WARNING: Removing unreachable block (ram,0x80126a18) */
/* WARNING: Removing unreachable block (ram,0x80126a44) */
/* WARNING: Removing unreachable block (ram,0x80126a64) */
/* WARNING: Removing unreachable block (ram,0x80126a78) */
/* WARNING: Removing unreachable block (ram,0x80126a8c) */
/* WARNING: Removing unreachable block (ram,0x80126aa0) */
/* WARNING: Removing unreachable block (ram,0x80126ab4) */
/* WARNING: Removing unreachable block (ram,0x80126acc) */
/* WARNING: Removing unreachable block (ram,0x80126b28) */
/* WARNING: Removing unreachable block (ram,0x80126b64) */
/* WARNING: Removing unreachable block (ram,0x80126b48) */
/* WARNING: Removing unreachable block (ram,0x80126b5c) */
/* WARNING: Removing unreachable block (ram,0x80126b18) */
/* WARNING: Removing unreachable block (ram,0x80126b20) */
/* WARNING: Removing unreachable block (ram,0x80126b70) */
/* WARNING: Removing unreachable block (ram,0x80126b8c) */
/* WARNING: Removing unreachable block (ram,0x80126b98) */
/* WARNING: Removing unreachable block (ram,0x80126bac) */
/* WARNING: Removing unreachable block (ram,0x80126bb4) */
/* WARNING: Removing unreachable block (ram,0x80127020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011492c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_s7;
  undefined1 auStack_30 [12];
  short sStack_24;
  undefined2 uStack_22;
  
  func_0x800518fc();
  iVar5 = 0;
  iVar4 = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar5) break;
      func_0x80051794(auStack_30);
      func_0x800847f0(*(int *)(iVar4 + 0xc0) + 8,auStack_30);
      iVar3 = *(int *)(iVar4 + 0xc0);
      sVar1 = *(short *)(iVar3 + 6);
      if (sVar1 == -1) {
        iVar5 = param_1 + 0x98;
        _sStack_24 = CONCAT22(uStack_22,sVar1);
        if (iVar5 == 0) {
          *(undefined1 *)(iVar4 + 5) = 0;
          *(undefined1 *)(*(int *)(iVar4 + 0x10) + 0x5e) = 0;
          uVar2 = FUN_80126a14();
          return uVar2;
        }
        if (iVar5 < 0x1f00) {
          sVar1 = *(short *)(iVar4 + 0x60) + 1;
          *(short *)(iVar4 + 0x60) = sVar1;
          if ((0x1f00 - iVar5 >> 7) + 7 <= (int)sVar1) {
            func_0x80074590(0x82,0,0);
            *(undefined2 *)(iVar4 + 0x60) = 0;
            uVar2 = FUN_80126a14();
            return uVar2;
          }
        }
        else {
          sVar1 = *(short *)(iVar4 + 0x60) + 1;
          *(short *)(iVar4 + 0x60) = sVar1;
          if (6 < sVar1) {
            _DAT_800bf544 = param_1;
            return unaff_s7;
          }
        }
        uVar2 = 1;
        if ((1 < *(byte *)(iVar4 + 3) - 7) || (*(char *)(iVar4 + 0x47) == '\x01')) {
          iVar5 = func_0x800777fc(iVar4,auStack_30,iVar3 + 0x18);
          uVar2 = 0x1f800000;
          if (iVar5 != 0) {
            *(short *)(*(int *)(iVar4 + 200) + 10) = -*(short *)(iVar4 + 0x56) - _DAT_1f8000f2;
            uVar2 = func_0x800517f8(iVar4);
            *(undefined1 *)(iVar4 + 0x29) = 0;
          }
        }
        return uVar2;
      }
      func_0x80084110(*(int *)(param_1 + sVar1 * 4 + 0xc0) + 0x18,auStack_30,iVar3 + 0x18);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 9));
  }
  iVar5 = 0;
  iVar4 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar3 = *(int *)(iVar4 + 0xc0);
      iVar5 = iVar5 + 1;
      func_0x800517bc(auStack_30,(int)*(short *)(iVar3 + 0x38),(int)*(short *)(iVar3 + 0x3a),
                      (int)*(short *)(iVar3 + 0x3c));
      func_0x80084250(*(int *)(iVar4 + 0xc0) + 0x18,auStack_30);
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return 0;
}

