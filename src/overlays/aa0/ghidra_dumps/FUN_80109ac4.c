// FUN_80109ac4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109ac4(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = _DAT_1f800148;
  cVar1 = DAT_1f800150;
joined_r0x80109afc:
  do {
    do {
      puVar4 = _DAT_1f80013c;
      DAT_1f800182 = DAT_1f800144;
      if (cVar1 == '\0') {
        while (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if (((*pbVar3 & 1) != 0) && (pbVar3[2] == 8)) {
            func_0x8002423c(param_1);
          }
        }
        return;
      }
      pbVar3 = (byte *)*puVar5;
      DAT_1f800182 = cVar1 + -1;
      puVar5 = puVar5 + 1;
      cVar1 = DAT_1f800182;
    } while ((*pbVar3 & 1) == 0);
    if (pbVar3[2] == 3) {
      func_0x8002423c(param_1,pbVar3);
      *(undefined2 *)(pbVar3 + 0x2e) = *(undefined2 *)(param_1 + -0x43000000);
      *(undefined2 *)(pbVar3 + 0x32) = *(undefined2 *)((pbVar3[3] - 4) * 6 + param_1 + 2);
      *(undefined2 *)(pbVar3 + 0x36) = *(undefined2 *)((pbVar3[3] - 4) * 6 + param_1 + 4);
      FUN_8011bc08();
      return;
    }
  } while (pbVar3[2] != 0);
  iVar2 = func_0x80023d48(param_1,pbVar3,*(undefined4 *)(pbVar3 + 200),0);
  if (iVar2 == 0) goto LAB_80109b84;
  if (iVar2 != 2) {
    DAT_1f800182 = 0;
    FUN_80112b60();
    return;
  }
  goto LAB_80109bb4;
LAB_80109b84:
  cVar1 = DAT_1f800182;
  if (((*(ushort *)(pbVar3 + 0x60) & 2) != 0) &&
     (iVar2 = func_0x80023d48(param_1,pbVar3,*(undefined4 *)(pbVar3 + 0xcc),0), cVar1 = DAT_1f800182
     , iVar2 == 2)) {
LAB_80109bb4:
    *(byte *)(param_1 + 0x5f) = pbVar3[0x5e];
    DAT_1f800182 = '\0';
    cVar1 = DAT_1f800182;
  }
  goto joined_r0x80109afc;
}

