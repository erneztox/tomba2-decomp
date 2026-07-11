// FUN_08014dbc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08014dbc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = func_0x00022f04();
  if ((iVar6 != 0) && (iVar6 = func_0x00020c34(param_1,param_2), -1 < iVar6)) {
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar5 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar5 == 2) {
        if (iVar6 != 3) {
          iVar6 = func_0x00083f50(*(short *)(param_1 + 0x68) + 0x800);
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar7 = func_0x00083e80(*(short *)(param_1 + 0x68) + 0x800);
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          halt_baddata();
        }
      }
      else {
        if (bVar5 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar5 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(param_2 + 0x32) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
    if ((*(char *)(param_2 + 2) == ';') && (*(char *)(param_2 + 0x5e) == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0001e860(param_1,param_2,0,0x100);
    if (*(char *)(param_2 + 0x5e) == '\x01') {
      uVar4 = *(ushort *)(param_1 + 0x68);
      *(undefined1 *)(param_2 + 4) = 2;
      *(undefined1 *)(param_2 + 5) = 0;
      *(undefined1 *)(param_2 + 6) = 0;
      *(char *)(param_2 + 0x2b) = (char)(uVar4 >> 4);
    }
    DAT_1f800182 = 0;
  }
  return;
}

