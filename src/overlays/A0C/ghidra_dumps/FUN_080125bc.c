// FUN_080125bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080125bc(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08012600 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010aff8(&DAT_800e7e80);
  puVar5 = _DAT_1f800148;
  cVar2 = DAT_1f800150;
  if (1 < _DAT_800e7fd8) {
LAB_08012850:
    func_0x0010b174();
    func_0x0010b36c();
    func_0x0010ad5c();
    if (((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) &&
       (uVar3 = _DAT_800e7eea & 0xf00, (_DAT_800e7eea & 0x8000) != 0)) {
      _DAT_800e7eea = 0;
      DAT_800bf81e = 0;
      if (uVar3 == 0x700) {
        DAT_800e7e80 = 3;
        DAT_800e7e84 = 2;
        DAT_800e7e85 = 5;
        DAT_800e7e86 = 0;
        DAT_800e7e87 = 0;
      }
    }
    return;
  }
joined_r0x08012768:
  do {
    DAT_1f800182 = cVar2;
    if (DAT_1f800182 == '\0') goto LAB_08012850;
    pbVar4 = (byte *)*puVar5;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar5 = puVar5 + 1;
    cVar2 = DAT_1f800182;
    if ((*pbVar4 & 1) != 0) {
      bVar1 = pbVar4[2];
      if (bVar1 == 0x11) {
        func_0x00109aa0(&DAT_800e7e80,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
      }
      else if (bVar1 < 0x12) {
        if (bVar1 == 1) {
          func_0x0001f650(&DAT_800e7e80,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
        }
        else if (bVar1 == 8) {
          func_0x00109e04(&DAT_800e7e80,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
        }
      }
      else if (bVar1 == 0x12) {
        func_0x0002311c(&DAT_800e7e80);
      }
      else if (bVar1 == 0x47) {
        func_0x001097bc(&DAT_800e7e80,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
        cVar2 = DAT_1f800182;
        goto joined_r0x08012768;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

