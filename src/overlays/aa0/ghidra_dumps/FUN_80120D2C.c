// FUN_80120D2C

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80120c64(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      iVar2 = 3;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 3);
        if (bVar1 == 3) {
          iVar2 = FUN_8012982c(param_1);
        }
        else {
          iVar2 = 4;
          if (bVar1 < 4) {
            iVar2 = FUN_801296e0(param_1);
          }
          else if (bVar1 == 4) {
            iVar2 = FUN_80129984(param_1);
          }
        }
      }
code_r0x80129e80:
      if (iVar2 != 0) {
        *(undefined2 *)(param_1 + 0x6a) = 0;
        DAT_00000009 = (char)iVar2 + '\x01';
        iVar2 = func_0x8003116c();
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
        iVar2 = func_0x8003116c(0x24,&stack0xfffffff8,0xffffffce);
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
        func_0x80027144(*(undefined4 *)(_DAT_000000c4 + 0x40),&stack0xfffffff8,0x800,8);
        func_0x80074590(0xc,0,0);
        return;
      }
      if (param_3 != 0) {
        func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc);
      }
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
           *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38);
      FUN_80133774(param_1);
      FUN_80133700(param_1);
      return;
    }
    iVar2 = 3;
    if (bVar1 != 2) {
      if (bVar1 != 3) goto code_r0x80129e80;
      func_0x8007a624(param_1);
    }
  }
  return;
}

