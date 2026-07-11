// FUN_0803bb90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803bb90(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined2 local_22;
  undefined2 local_1e;
  short local_18;
  undefined2 local_16;
  short local_14;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if ((int)param_3 < 3) {
      if ((int)param_3 < 1) {
        if (param_3 != 0) {
          halt_baddata();
        }
        local_18 = *(short *)(param_1 + 0x2e);
        local_14 = *(undefined2 *)(param_1 + 0x36);
        local_16 = *(undefined2 *)(param_1 + 0x7a);
        func_0x0011bd98(9,&local_18,param_2);
      }
      else {
        if ((_DAT_1f80017c & 1) != 0) {
          if ((param_3 & 2) != 0) {
            param_3 = 0;
          }
          if (*(char *)(param_1 + 0xbe) == '\0') {
            param_3 = param_3 ^ 1;
          }
          if (param_3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar2 = (int)*(short *)(param_1 + 0x60);
          iVar1 = func_0x00083f50(iVar2);
          local_18 = *(short *)(param_1 + 0x2e) + (short)((iVar1 << 6) >> 0xc);
          iVar1 = func_0x00083e80(iVar2);
          local_14 = *(short *)(param_1 + 0x36) - (short)((iVar1 << 6) >> 0xc);
          local_16 = *(undefined2 *)(param_1 + 0x7a);
          func_0x0011c0c0(10,&local_18,param_2,iVar2);
        }
        if ((_DAT_1f80017c & 3) != 0) {
          return;
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_3 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_26 = *(undefined2 *)(param_1 + 0x2e);
    local_1e = *(undefined2 *)(param_1 + 0x36);
    local_22 = *(undefined2 *)(param_1 + 0x7a);
    func_0x0011b344(auStack_28,0xfffffff6,0x14,100);
    func_0x00074590(0x88,8,0xffffffce);
  }
  return;
}

