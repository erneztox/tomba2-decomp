// FUN_8004ea4c

int FUN_8004ea4c(byte *param_1,char *param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = 0;
  if (param_2 != (char *)0x0) {
    param_4 = param_1;
  }
  do {
    bVar1 = *param_1;
    if (bVar1 == 0xfb) {
LAB_8004eac4:
      sVar2 = sVar2 + 8;
    }
    else {
      if (bVar1 < 0xfc) {
        if (bVar1 == 0xfa) {
LAB_8004ea94:
          if (param_2 != (char *)0x0) {
            *param_2 = (char)param_1 - (char)param_4;
          }
          return (int)sVar2;
        }
      }
      else if (bVar1 == 0xff) goto LAB_8004ea94;
      if (*param_1 < 0xc0) goto LAB_8004eac4;
    }
    param_1 = param_1 + 1;
  } while( true );
}

