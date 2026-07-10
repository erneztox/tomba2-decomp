// FUN_80042ea4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80042ea4(int param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  
  cVar2 = (char)(param_3 >> 8);
  uVar1 = *param_2;
  if ((int)(short)*param_2 != 0) {
    if ((uVar1 & 0x3f) == 0) {
      if ((uVar1 & 0x80) != 0) {
        if (*(char *)(*(int *)(param_1 + 0x38) + 4) == '\0') {
          *param_2 = uVar1 & 0xffbf;
        }
        else if ((uVar1 & 0x40) == 0) {
          *param_2 = uVar1 | 0x40;
          FUN_80074590(param_3 & 0xff,0,(int)cVar2);
          return 1;
        }
      }
    }
    else if (((uint)_DAT_1f80017c & (int)(short)*param_2) == 0) {
      FUN_80074590(param_3 & 0xff,0,(int)cVar2);
    }
  }
  return 0;
}

