// FUN_08029e74

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029e74(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 != 7) {
    if (7 < param_3) {
      if (param_3 == 8) {
        uVar5 = func_0x0009a450();
        bVar1 = *(byte *)(param_1 + 0x1b);
        if (0x14 < bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 < 0x12) {
          if ((0xe < bVar1) || (0xb < bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar1 < 9) {
            bVar2 = false;
            if ((bVar1 < 6) || (bVar2 = true, (uVar5 & 0xf) == 0)) goto LAB_08029f58;
          }
          else if ((uVar5 & 8) != 0) {
            halt_baddata();
          }
          bVar2 = false;
        }
        else {
          bVar2 = false;
          if ((uVar5 & 0xf) != 0) {
            halt_baddata();
          }
        }
LAB_08029f58:
        if (!bVar2) {
          return;
        }
        uVar3 = 1;
        if (1 < param_2) {
          *(undefined2 *)(param_1 + 0x6c) = 0;
          halt_baddata();
        }
        goto LAB_0802a154;
      }
      if (param_3 != 9) {
        halt_baddata();
      }
      uVar5 = func_0x0009a450();
      bVar1 = *(byte *)(param_1 + 0x1b);
      if (0x14 < bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 0x12) {
        if ((0xe < bVar1) || (0xb < bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 < 9) {
          bVar2 = false;
          if ((bVar1 < 6) || (bVar2 = true, (uVar5 & 0xf) == 0)) goto LAB_08029ffc;
        }
        else if ((uVar5 & 8) != 0) {
          halt_baddata();
        }
        bVar2 = false;
      }
      else {
        bVar2 = false;
        if ((uVar5 & 0xf) != 0) {
          halt_baddata();
        }
      }
LAB_08029ffc:
      if (!bVar2) {
        return;
      }
      uVar3 = 5;
      if (1 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802a154;
    }
    if (param_3 != 6) {
      halt_baddata();
    }
    uVar4 = func_0x0009a450();
    bVar1 = *(byte *)(param_1 + 0x1b);
    uVar5 = uVar4 & 0xf;
    if (bVar1 == 0x15) {
      bVar2 = false;
      if (uVar5 == 0) {
        halt_baddata();
      }
      goto LAB_0802a0a8;
    }
    if ((bVar1 == 0x16) || (bVar1 == 0x17)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0x18) {
      uVar5 = uVar4 & 0xe;
joined_r0x0802a088:
      if (uVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 == 0x19) goto joined_r0x0802a088;
      bVar2 = true;
      if (0x19 < bVar1) goto LAB_0802a0a8;
    }
    bVar2 = false;
LAB_0802a0a8:
    if (!bVar2) {
      return;
    }
    *(undefined2 *)(param_1 + 0x6c) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = func_0x0009a450();
  bVar1 = *(byte *)(param_1 + 0x1b);
  uVar5 = uVar4 & 0xf;
  if (bVar1 == 0x15) {
    bVar2 = false;
    if (uVar5 == 0) {
      halt_baddata();
    }
  }
  else {
    if ((bVar1 == 0x16) || (bVar1 == 0x17)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0x18) {
      uVar5 = uVar4 & 0xe;
joined_r0x0802a12c:
      if (uVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 == 0x19) goto joined_r0x0802a12c;
      bVar2 = true;
      if (0x19 < bVar1) goto LAB_0802a14c;
    }
    bVar2 = false;
  }
LAB_0802a14c:
  uVar3 = 5;
  if (!bVar2) {
    return;
  }
LAB_0802a154:
  *(undefined2 *)(param_1 + 0x6c) = uVar3;
  return;
}

