// FUN_080175a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080175a0(int param_1,byte *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  if (((*param_2 & 2) == 0) &&
     (iVar5 = func_0x0002300c(param_1,param_2,*(short *)(param_2 + 0x80) * 3), iVar5 != 0)) {
    if ((DAT_1f800137 == '\0') &&
       ((ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_2 + 0x2e)) + 0x96U) < 0x12d)) {
      if (*(byte *)(param_1 + 5) < 2) {
        if ((DAT_800bf9c7 & 0x80) == 0) {
          DAT_1f800137 = 2;
          param_2[0x29] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (((DAT_800bf8c0 != -1) && (*(byte *)(param_1 + 5) == 2)) &&
              (cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 8), cVar1 == '\x02')) {
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined2 *)(param_1 + 0x7a) = 0x230c;
        DAT_1f800137 = cVar1;
        *(undefined2 *)(param_1 + 0x7e) = 0x2b4e;
      }
    }
    if ((int)(uint)_DAT_1f80008c <=
        (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
      uVar7 = _DAT_1f80009c + 0x800U & 0xfff;
      iVar5 = func_0x00083f50(uVar7);
      sVar2 = *(short *)(param_1 + 0x80);
      sVar3 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(uVar7);
      sVar4 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar2 + (int)sVar3) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4) >> 0xc);
    }
  }
  return;
}

