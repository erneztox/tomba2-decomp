// FUN_80045080

void FUN_80045080(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (param_2 & 0xff) * 8;
  FUN_8001dc40(param_1,*(undefined4 *)(&DAT_800be118 + iVar1),*(undefined4 *)(&DAT_800be11c + iVar1)
              );
  return;
}

