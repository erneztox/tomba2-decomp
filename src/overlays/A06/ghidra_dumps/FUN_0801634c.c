// FUN_0801634c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801634c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while (puVar5 = _DAT_1f80013c, cVar1 = DAT_1f800144, DAT_1f800182 != '\0') {
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    if ((((*pbVar3 & 1) != 0) && (pbVar3[2] == 0x3b)) &&
       (iVar2 = func_0x00023d48(param_1,pbVar3,
                                *(undefined4 *)
                                 (pbVar3 + (uint)*(byte *)(pbVar3[3] + 0x801422b0) * 4 + 0xc0),0),
       iVar2 != 0)) {
      DAT_1f800182 = '\0';
    }
  }
  while (cVar1 != '\0') {
    pbVar3 = (byte *)*puVar5;
    DAT_1f800182 = cVar1 + -1;
    puVar5 = puVar5 + 1;
    cVar1 = DAT_1f800182;
    if ((((*pbVar3 & 1) != 0) && (pbVar3[2] == 8)) &&
       (iVar2 = func_0x0002423c(param_1), cVar1 = DAT_1f800182, iVar2 == 2)) {
      DAT_1f800182 = '\0';
      cVar1 = DAT_1f800182;
    }
  }
  DAT_1f800182 = cVar1;
  return;
}

