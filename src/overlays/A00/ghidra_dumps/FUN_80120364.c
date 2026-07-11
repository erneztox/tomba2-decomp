// FUN_80120364

/* WARNING: Control flow encountered bad instruction data */

void FUN_80120364(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int in_v0;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *unaff_s0;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(unaff_s0 + 0x10);
  if ((in_v0 == 0) || (DAT_800bf8bc == -1)) {
    unaff_s0[4] = 3;
    return;
  }
  bVar1 = unaff_s0[5];
  if (bVar1 == 1) {
    iVar5 = 0;
    puVar6 = unaff_s0;
    if (unaff_s0[8] != '\0') {
      do {
        iVar4 = *(int *)(puVar6 + 0xc0);
        if (*(short *)(iVar4 + 8) < 0x540) {
          *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + 0x40;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar5 < (int)(uint)(byte)unaff_s0[8]);
    }
    puVar6 = &DAT_00000008;
    if (DAT_800bf9de != '\t') goto LAB_801205cc;
    cVar2 = unaff_s0[5];
    *(undefined2 *)(unaff_s0 + 0x40) = 8;
LAB_80129510:
    unaff_s0[0x29] = 0;
    unaff_s0[0x5e] = 0;
    unaff_s0[4] = cVar2 + '\x01';
    *(short *)(unaff_s0 + 0x32) = (short)puVar6 + 0x80;
    unaff_s0[3] = 0;
    iVar5 = FUN_8013a730();
    *(int *)(unaff_s0 + 0x10) = iVar5;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf9de != '\b') goto LAB_801205cc;
        iVar5 = func_0x80072ddc();
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x1c) = 0x80129c00;
          *(undefined1 *)(iVar5 + 3) = 4;
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(unaff_s0 + 0x2e);
          *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(unaff_s0 + 0x32);
          *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)(unaff_s0 + 0x36);
          *(undefined2 *)(iVar5 + 0x54) = *(undefined2 *)(unaff_s0 + 0x54);
          *(undefined2 *)(iVar5 + 0x56) = *(undefined2 *)(unaff_s0 + 0x56);
          *(undefined2 *)(iVar5 + 0x58) = *(undefined2 *)(unaff_s0 + 0x58);
        }
        iVar5 = 0;
        puVar6 = unaff_s0;
        if (unaff_s0[8] == '\0') goto LAB_80120570;
        do {
          *(undefined2 *)(*(int *)(puVar6 + 0xc0) + 0x3a) = 0x96;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (iVar5 < (int)(uint)(byte)unaff_s0[8]);
        *unaff_s0 = (char)puVar7;
        cVar2 = '\0';
        goto LAB_80129510;
      }
    }
    else if (bVar1 == 2) {
      if (*(short *)(unaff_s0 + 0x40) == 0) {
        iVar5 = 0;
        puVar6 = unaff_s0;
        if (unaff_s0[8] != '\0') {
          do {
            iVar4 = *(int *)(puVar6 + 0xc0);
            if (0x2c0 < *(short *)(iVar4 + 8)) {
              *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + -0x40;
            }
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 4;
          } while (iVar5 < (int)(uint)(byte)unaff_s0[8]);
        }
        if (DAT_800bf9de != '\x0f') goto LAB_801205cc;
LAB_80120570:
        unaff_s0[5] = unaff_s0[5] + '\x01';
      }
      else {
        *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + -1;
      }
    }
    else if (bVar1 == 3) {
      iVar5 = 0;
      puVar6 = unaff_s0;
      if (unaff_s0[8] != '\0') {
        do {
          iVar4 = *(int *)(puVar6 + 0xc0);
          if (0xc0 < *(short *)(iVar4 + 8)) {
            *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + -0x40;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (iVar5 < (int)(uint)(byte)unaff_s0[8]);
      }
LAB_801205cc:
      *(undefined2 *)(unaff_s0 + 0x56) = *(undefined2 *)(puVar7 + 10);
      *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(puVar7 + 0x2c);
      *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(puVar7 + 0x30);
      uVar3 = *(undefined2 *)(puVar7 + 0x34);
      unaff_s0[1] = 1;
      *(undefined2 *)(unaff_s0 + 0x36) = uVar3;
      func_0x80051c8c();
      return;
    }
    iVar4 = func_0x8007778c();
    iVar5 = 0;
    if (iVar4 != 0) {
      FUN_80132020();
      iVar5 = func_0x800517f8();
    }
    unaff_s0[0x2b] = 0;
  }
  *(short *)(puVar7 + 0x40) = (short)(iVar5 - 1U);
  if ((iVar5 - 1U & 0xffff) == 0) {
    *puVar7 = 2;
    puVar7[6] = puVar7[6] + '\x01';
  }
  FUN_8013b024(puVar7,0x1f);
  uVar3 = func_0x800518fc(puVar7);
  puVar7[0x29] = 0;
  puVar7[0x2b] = 0;
  *(undefined2 *)(unaff_s0 + 6) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

