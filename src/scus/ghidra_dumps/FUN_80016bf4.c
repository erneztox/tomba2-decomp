
void FUN_80016bf4(uint *param_1,uint *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_8001e48c(param_2,0,0x78);
  uVar3 = *param_1 & 0xfdffffff;
  *param_2 = *param_1;
  if (uVar3 == 0x2d030709) {
LAB_80017ba8:
    iVar2 = FUN_80013140();
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010470);
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(char *)(param_2 + 6) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
    *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
    *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
    *(char *)(param_2 + 7) = (char)param_1[3];
    *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
    *(char *)((int)param_2 + 0x1e) = (char)param_1[4];
    *(undefined1 *)((int)param_2 + 0x1f) = *(undefined1 *)((int)param_1 + 0x11);
    *(char *)(param_2 + 1) = (char)param_1[5];
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 0x16);
    *(char *)(param_2 + 2) = (char)param_1[5];
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 0x16);
    *(char *)(param_2 + 3) = (char)param_1[5];
    *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0x16);
    *(char *)(param_2 + 4) = (char)param_1[5];
    *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 0x16);
    *(short *)(param_2 + 0x1a) = (short)param_1[6];
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1a);
    *(short *)(param_2 + 0x1b) = (short)param_1[7];
    uVar1 = 0x20;
    *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x1e);
    goto LAB_80017678;
  }
  if (0x2d030709 < uVar3) {
    if (uVar3 == 0x35030809) {
LAB_800174ac:
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010440);
      }
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
      *(char *)(param_2 + 6) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
      *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
      *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
      *(char *)(param_2 + 7) = (char)param_1[3];
      *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
      *(short *)(param_2 + 0x1a) = (short)param_1[7];
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1e);
      *(short *)(param_2 + 0x1b) = (short)param_1[8];
      *(char *)(param_2 + 1) = (char)param_1[4];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 0x11);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 0x12);
      *(char *)(param_2 + 2) = (char)param_1[5];
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 0x15);
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 0x16);
      *(char *)(param_2 + 3) = (char)param_1[6];
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0x19);
      uVar1 = 0x24;
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0x1a);
      goto LAB_80017678;
    }
    if (0x35030809 < uVar3) {
      if (uVar3 == 0x39030608) {
LAB_80017ac4:
        iVar2 = FUN_80013140();
        if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_8001046c);
        }
        *(char *)(param_2 + 1) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
        *(char *)(param_2 + 2) = (char)param_1[2];
        *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 9);
        *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 10);
        *(char *)(param_2 + 3) = (char)param_1[3];
        *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
        *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
        *(char *)(param_2 + 4) = (char)param_1[4];
        *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
        *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
        *(short *)(param_2 + 0x1a) = (short)param_1[5];
        *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
        *(short *)(param_2 + 0x1b) = (short)param_1[6];
        uVar1 = 0x1c;
        *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x1a);
      }
      else {
        if (0x39030608 < uVar3) {
          if (uVar3 != 0x3c02080c) {
            if (0x3c02080c < uVar3) {
              if ((uVar3 != 0x3d010a0c) && (uVar3 != 0x3d030a0c)) {
                FUN_80017660();
                return;
              }
              iVar2 = FUN_80013140();
              if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
                FUN_8001e5ec(&DAT_80010478);
              }
              *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
              *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
              *(char *)(param_2 + 6) = (char)param_1[1];
              *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
              *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
              *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
              *(char *)(param_2 + 7) = (char)param_1[3];
              *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
              *(char *)((int)param_2 + 0x1e) = (char)param_1[4];
              *(undefined1 *)((int)param_2 + 0x1f) = *(undefined1 *)((int)param_1 + 0x11);
              *(short *)(param_2 + 0x1a) = (short)param_1[9];
              *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x26);
              *(short *)(param_2 + 0x1b) = (short)param_1[10];
              *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x2a);
              *(char *)(param_2 + 1) = (char)param_1[5];
              *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 0x15);
              *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 0x16);
              *(char *)(param_2 + 2) = (char)param_1[6];
              *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 0x19);
              *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 0x1a);
              *(char *)(param_2 + 3) = (char)param_1[7];
              *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0x1d);
              *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0x1e);
              *(char *)(param_2 + 4) = (char)param_1[8];
              *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 0x21);
              uVar1 = 0x2c;
              *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 0x22);
              goto LAB_80017678;
            }
            if (uVar3 != 0x3c00080c) {
              FUN_80017660();
              return;
            }
          }
          iVar2 = FUN_80013140();
          if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_8001e5ec(&DAT_80010460);
          }
          *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
          *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
          *(char *)(param_2 + 6) = (char)param_1[1];
          *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
          *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
          *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
          *(char *)(param_2 + 7) = (char)param_1[3];
          *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
          *(char *)((int)param_2 + 0x1e) = (char)param_1[4];
          *(undefined1 *)((int)param_2 + 0x1f) = *(undefined1 *)((int)param_1 + 0x11);
          *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x16);
          *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1a);
          *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1e);
          *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x22);
          *(short *)(param_2 + 0x1c) = (short)param_1[5];
          *(short *)((int)param_2 + 0x72) = (short)param_1[6];
          *(short *)(param_2 + 0x1d) = (short)param_1[7];
          uVar1 = 0x24;
          *(short *)((int)param_2 + 0x76) = (short)param_1[8];
          goto LAB_80017678;
        }
        if (uVar3 != 0x38020508) {
          if (0x38020508 < uVar3) {
            if (uVar3 != 0x39010608) {
              FUN_80017660();
              return;
            }
            goto LAB_80017ac4;
          }
          if (uVar3 != 0x38000508) {
            FUN_80017660();
            return;
          }
        }
        iVar2 = FUN_80013140();
        if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_80010450);
        }
        *(char *)(param_2 + 1) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
        *(char *)(param_2 + 2) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
        *(char *)(param_2 + 3) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
        *(char *)(param_2 + 4) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 6);
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
        *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0xe);
        *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x16);
        *(short *)(param_2 + 0x1c) = (short)param_1[2];
        *(short *)((int)param_2 + 0x72) = (short)param_1[3];
        *(short *)(param_2 + 0x1d) = (short)param_1[4];
        uVar1 = 0x18;
        *(short *)((int)param_2 + 0x76) = (short)param_1[5];
      }
      goto LAB_80017678;
    }
    if (uVar3 == 0x31030506) {
LAB_800172e4:
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010434);
      }
      *(char *)(param_2 + 1) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 2) = (char)param_1[2];
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 9);
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 10);
      *(char *)(param_2 + 3) = (char)param_1[3];
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
      *(short *)(param_2 + 0x1a) = (short)param_1[4];
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x12);
      uVar1 = 0x18;
      *(short *)(param_2 + 0x1b) = (short)param_1[5];
    }
    else {
      if (0x31030506 < uVar3) {
        if (uVar3 != 0x34020609) {
          if (0x34020609 < uVar3) {
            if (uVar3 != 0x35010809) {
              FUN_80017660();
              return;
            }
            goto LAB_800174ac;
          }
          if (uVar3 != 0x34000609) {
            FUN_80017660();
            return;
          }
        }
        iVar2 = FUN_80013140();
        if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_80010428);
        }
        *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
        *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
        *(char *)(param_2 + 6) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
        *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
        *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
        *(char *)(param_2 + 7) = (char)param_1[3];
        *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
        *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1a);
        *(short *)(param_2 + 0x1c) = (short)param_1[4];
        *(short *)((int)param_2 + 0x72) = (short)param_1[5];
        uVar1 = 0x1c;
        *(short *)(param_2 + 0x1d) = (short)param_1[6];
        goto LAB_80017678;
      }
      if (uVar3 != 0x30020406) {
        if (0x30020406 < uVar3) {
          if (uVar3 != 0x31010506) {
            FUN_80017660();
            return;
          }
          goto LAB_800172e4;
        }
        if (uVar3 != 0x30000406) {
          FUN_80017660();
          return;
        }
      }
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010418);
      }
      *(char *)(param_2 + 1) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 2) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 3) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0xe);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x12);
      *(short *)(param_2 + 0x1c) = (short)param_1[2];
      *(short *)((int)param_2 + 0x72) = (short)param_1[3];
      uVar1 = 0x14;
      *(short *)(param_2 + 0x1d) = (short)param_1[4];
    }
    goto LAB_80017678;
  }
  if (uVar3 == 0x25030607) {
LAB_80017398:
    iVar2 = FUN_80013140();
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010438);
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(char *)(param_2 + 6) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
    *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
    *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
    *(char *)(param_2 + 7) = (char)param_1[3];
    *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
    *(char *)(param_2 + 1) = (char)param_1[4];
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 0x12);
    *(char *)(param_2 + 2) = (char)param_1[4];
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 0x12);
    *(char *)(param_2 + 3) = (char)param_1[4];
    *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0x12);
    *(short *)(param_2 + 0x1a) = (short)param_1[5];
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
    uVar1 = 0x1c;
    *(short *)(param_2 + 0x1b) = (short)param_1[6];
    goto LAB_80017678;
  }
  if (0x25030607 < uVar3) {
    if (uVar3 == 0x29030305) {
LAB_800179e0:
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010468);
      }
      *(char *)(param_2 + 1) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 2) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 3) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 4) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 6);
      *(short *)(param_2 + 0x1a) = (short)param_1[2];
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 10);
      *(short *)(param_2 + 0x1b) = (short)param_1[3];
      uVar1 = 0x10;
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0xe);
    }
    else {
      if (0x29030305 < uVar3) {
        if (uVar3 != 0x2c020709) {
          if (0x2c020709 < uVar3) {
            if (uVar3 != 0x2d010709) {
              FUN_80017660();
              return;
            }
            goto LAB_80017ba8;
          }
          if (uVar3 != 0x2c000709) {
            FUN_80017660();
            return;
          }
        }
        iVar2 = FUN_80013140();
        if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_80010458);
        }
        *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
        *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
        *(char *)(param_2 + 6) = (char)param_1[1];
        *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
        *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
        *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
        *(char *)(param_2 + 7) = (char)param_1[3];
        *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
        *(char *)((int)param_2 + 0x1e) = (char)param_1[4];
        *(undefined1 *)((int)param_2 + 0x1f) = *(undefined1 *)((int)param_1 + 0x11);
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x16);
        *(short *)((int)param_2 + 0x6a) = (short)param_1[6];
        *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1a);
        *(short *)((int)param_2 + 0x6e) = (short)param_1[7];
        *(short *)(param_2 + 0x1c) = (short)param_1[5];
        *(short *)((int)param_2 + 0x72) = (short)param_1[5];
        *(short *)(param_2 + 0x1d) = (short)param_1[5];
        uVar1 = 0x20;
        *(short *)((int)param_2 + 0x76) = (short)param_1[5];
        goto LAB_80017678;
      }
      if (uVar3 != 0x28020405) {
        if (0x28020405 < uVar3) {
          if (uVar3 != 0x29010305) {
            FUN_80017660();
            return;
          }
          goto LAB_800179e0;
        }
        if (uVar3 != 0x28000405) {
          FUN_80017660();
          return;
        }
      }
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010448);
      }
      *(char *)(param_2 + 1) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 2) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 3) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
      *(char *)(param_2 + 4) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0x11) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)param_2 + 0x12) = *(undefined1 *)((int)param_1 + 6);
      uVar1 = *(undefined2 *)((int)param_1 + 10);
    }
    goto LAB_80017678;
  }
  if (uVar3 == 0x21030304) {
LAB_80017230:
    iVar2 = FUN_80013140();
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010430);
    }
    *(char *)(param_2 + 1) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
    *(char *)(param_2 + 2) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
    *(char *)(param_2 + 3) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
    *(short *)(param_2 + 0x1a) = (short)param_1[2];
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 10);
    uVar1 = 0x10;
    *(short *)(param_2 + 0x1b) = (short)param_1[3];
  }
  else {
    if (0x21030304 < uVar3) {
      if (uVar3 != 0x24020507) {
        if (0x24020507 < uVar3) {
          if (uVar3 != 0x25010607) {
            FUN_80017660();
            return;
          }
          goto LAB_80017398;
        }
        if (uVar3 != 0x24000507) {
          FUN_80017660();
          return;
        }
      }
      iVar2 = FUN_80013140();
      if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(&DAT_80010420);
      }
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
      *(char *)(param_2 + 6) = (char)param_1[1];
      *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)((int)param_1 + 5);
      *(char *)((int)param_2 + 0x1a) = (char)param_1[2];
      *(undefined1 *)((int)param_2 + 0x1b) = *(undefined1 *)((int)param_1 + 9);
      *(char *)(param_2 + 7) = (char)param_1[3];
      *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x12);
      *(short *)((int)param_2 + 0x6a) = (short)param_1[5];
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x16);
      *(short *)(param_2 + 0x1c) = (short)param_1[4];
      *(short *)((int)param_2 + 0x72) = (short)param_1[4];
      uVar1 = 0x18;
      *(short *)(param_2 + 0x1d) = (short)param_1[4];
      goto LAB_80017678;
    }
    if (uVar3 != 0x20020304) {
      if (0x20020304 < uVar3) {
        if (uVar3 != 0x21010304) {
          FUN_80017660();
          return;
        }
        goto LAB_80017230;
      }
      if (uVar3 != 0x20000304) {
        FUN_80017660();
        return;
      }
    }
    iVar2 = FUN_80013140();
    if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010410);
    }
    *(char *)(param_2 + 1) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)param_1 + 6);
    *(char *)(param_2 + 2) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)((int)param_1 + 6);
    *(char *)(param_2 + 3) = (char)param_1[1];
    *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)((int)param_1 + 5);
    *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 6);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
    *(short *)((int)param_2 + 0x6a) = (short)param_1[3];
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0xe);
    *(short *)(param_2 + 0x1c) = (short)param_1[2];
    *(short *)((int)param_2 + 0x72) = (short)param_1[2];
    uVar1 = 0x10;
    *(short *)(param_2 + 0x1d) = (short)param_1[2];
  }
LAB_80017678:
  do {
    *(undefined2 *)(param_2 + 0x1a) = uVar1;
    *(short *)((int)param_2 + 0x6a) = (short)param_1[3];
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0xe);
    *(short *)((int)param_2 + 0x6e) = (short)param_1[4];
    *(short *)(param_2 + 0x1c) = (short)param_1[2];
    *(short *)((int)param_2 + 0x72) = (short)param_1[2];
    *(short *)(param_2 + 0x1d) = (short)param_1[2];
    uVar1 = 0x14;
    *(short *)((int)param_2 + 0x76) = (short)param_1[2];
  } while( true );
}

