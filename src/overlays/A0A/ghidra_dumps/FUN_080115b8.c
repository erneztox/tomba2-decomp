// FUN_080115b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080115b8(void)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080115fc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010a0c8(&DAT_800e7e80);
  puVar3 = _DAT_1f800148;
  cVar1 = DAT_1f800150;
  if (_DAT_800e7fd8 < 2) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar2 = (byte *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
      cVar1 = DAT_1f800182;
      if ((*pbVar2 & 1) != 0) {
        if (pbVar2[2] == 0x13) {
          func_0x00109c00(&DAT_800e7e80,pbVar2,*(undefined4 *)(pbVar2 + 0xc4));
          cVar1 = DAT_1f800182;
        }
        else if (pbVar2[2] == 0x17) {
          if (pbVar2[0x47] == 2) {
            func_0x001097fc(&DAT_800e7e80,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
          }
          else {
            func_0x0001f650(&DAT_800e7e80,pbVar2,*(undefined4 *)(pbVar2 + 0xc0));
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  func_0x0010a234();
  func_0x0010a3d8();
  func_0x00109f08();
  func_0x00109ae0(&DAT_800e7e80);
  return;
}

