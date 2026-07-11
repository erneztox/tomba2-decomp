// FUN_8012e1fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012e1fc(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int unaff_s4;
  
  if (*(char *)((int)param_1 + 1) == '\0') {
    DAT_800bf821 = 0;
  }
  cVar3 = (char)param_1[3];
  if (cVar3 == '\0') {
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x10) = 0x200;
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x12) = 0x1400;
    *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x3e) = 1;
    puVar5 = (ushort *)0x1;
    puVar4 = param_1;
    if (0 < (int)(*(byte *)((int)param_1 + 9) - 2)) {
      do {
        *(undefined1 *)(*(int *)(puVar4 + 0x62) + 0x3e) = 0;
        puVar5 = (ushort *)((int)puVar5 + 1);
        puVar4 = puVar4 + 2;
      } while ((int)puVar5 <= (int)(*(byte *)((int)param_1 + 9) - 2));
    }
    if (*(char *)((int)param_1 + 3) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + (*(byte *)((int)param_1 + 9) - 1) * 2 + 0x60) + 0x3e) = 0;
      puVar4 = param_1;
      while( true ) {
        uVar2 = FUN_8013fb88(param_1 + 2);
        FUN_8013fe58(uVar2);
        if (puVar5 <= puVar4) break;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        param_1 = (ushort *)(unaff_s4 + (uint)uVar1 * 4);
      }
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + (*(byte *)((int)param_1 + 9) - 1) * 2 + 0x60) + 0x3e) = 4;
    *(undefined1 *)(*(int *)(param_1 + (*(byte *)((int)param_1 + 9) - 1) * 2 + 0x60) + 0x3f) = 0;
    param_1[0x21] = 5;
    cVar3 = '\x01';
    param_1[0x35] = 1;
    param_1[0x36] = 1;
    *(char *)(param_1 + 3) = (char)param_1[3] + '\x01';
  }
  else if (cVar3 == '\x01') {
    iVar6 = 0;
    puVar4 = param_1;
    if (*(char *)((int)param_1 + 9) != '\0') {
      do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(*(undefined1 *)(*(int *)(puVar4 + 0x60) + 0x3e)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(*(int *)(puVar4 + 0x60) + 0x3a) =
             *(undefined2 *)(*(int *)(puVar4 + 0x60) + 0x38);
        iVar6 = iVar6 + 1;
        *(undefined2 *)(*(int *)(puVar4 + 0x60) + 0x3c) =
             *(undefined2 *)(*(int *)(puVar4 + 0x60) + 0x38);
        puVar4 = puVar4 + 2;
      } while (iVar6 < (int)(uint)*(byte *)((int)param_1 + 9));
    }
    if (param_1[0x35] == 1) {
      uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 0x76);
      param_1[0x35] = uVar1;
      if (uVar1 == 2) {
        uVar1 = 3;
        if (*(char *)((int)param_1 + 3) == '\0') {
          param_1[0x35] = 5;
          if (*(short *)(*(int *)(param_1 + 8) + 0x78) == 0) {
            func_0x8004ed94(0x25,0x41);
          }
          uVar1 = 0;
          if (param_1[0x21] != 0) {
            return;
          }
          param_1[0x35] = 4;
        }
        else {
          param_1[0x35] = 3;
        }
                    /* WARNING: Subroutine does not return */
        param_1[1] = uVar1;
        FUN_801402b8();
      }
      if ((*(char *)((int)param_1 + 3) != '\0') && (uVar1 == 0)) {
        param_1[0x35] = 4;
        *(undefined1 *)(*(int *)(param_1 + (*(byte *)((int)param_1 + 9) - 1) * 2 + 0x60) + 0x3f) = 8
        ;
        FUN_80137e70(param_1,0xc);
      }
    }
    return;
  }
  if (cVar3 != '\0') {
    FUN_80140ad8();
    return;
  }
  FUN_80140ac8();
  return;
}

