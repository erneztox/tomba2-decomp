
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80033afc(int param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  if (param_1 == 0x2000) {
    iVar1 = 0x74;
  }
  else {
    iVar1 = 0x76;
    if (0x2000 < param_1) {
      if (param_1 == 0x4000) {
        iVar1 = 0x75;
      }
      else if (param_1 == 0x8000) {
        iVar1 = 0x77;
      }
    }
  }
  local_16 = 0x7cbe;
  local_18 = 0;
  local_c = 0;
  local_17 = param_4;
  local_10 = param_2;
  local_e = param_3;
  FUN_8007e6dc(&local_10,(&PTR_DAT_80017334)[iVar1],_DAT_800ecf58,&local_18);
  return;
}

