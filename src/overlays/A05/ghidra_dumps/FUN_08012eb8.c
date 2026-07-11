// FUN_08012eb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_08012eb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = _DAT_1f80014c;
  puVar5 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800152;
  cVar1 = DAT_1f800146;
  if (param_2 != 0) {
    while (puVar5 = _DAT_1f800140, cVar1 = DAT_1f800146, DAT_1f800182 != '\0') {
      pbVar3 = (byte *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
      if ((*pbVar3 & 1) != 0) {
        if (pbVar3[2] == 0x3f) {
          func_0x0010bcb8(param_1,pbVar3,*(undefined4 *)(pbVar3 + 200));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (pbVar3[2] == 0x18) {
          func_0x0010bb54(param_1);
        }
      }
    }
  }
  while (cVar1 != '\0') {
    pbVar3 = (byte *)*puVar5;
    DAT_1f800182 = cVar1 + -1;
    puVar5 = puVar5 + 1;
    cVar1 = DAT_1f800182;
    if ((((*pbVar3 & 1) != 0) && (pbVar3[0xc] == 9)) &&
       (iVar2 = func_0x00023a04(param_1,pbVar3,0), cVar1 = DAT_1f800182, -1 < iVar2)) {
      *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 1;
      cVar1 = DAT_1f800182;
    }
  }
  DAT_1f800182 = cVar1;
  return *(undefined1 *)(param_1 + 0x2b);
}

