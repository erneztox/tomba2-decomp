// FUN_0801ac84

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ac84(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  if (param_1 == 0) {
    iVar7 = 4;
    puVar2 = &DAT_8013ff44;
    do {
      *puVar2 = 0;
      iVar7 = iVar7 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf873 == '\0') {
    piVar6 = (int *)&DAT_80132b14;
    iVar7 = 0;
    puVar8 = (undefined2 *)&DAT_80132b1e;
    do {
      pbVar5 = (byte *)(iVar7 + -0x7fec00c0);
      bVar1 = *pbVar5;
      *pbVar5 = bVar1 - 1;
      if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
        pcVar3 = (char *)*piVar6;
        if (*pcVar3 == -1) {
          *piVar6 = (int)pcVar3 - (uint)(byte)pcVar3[1];
        }
        iVar4 = *(int *)(puVar8 + -3);
        bVar1 = *(byte *)*piVar6;
        *pbVar5 = ((byte *)*piVar6)[1];
        local_20 = puVar8[-1];
        local_1e = *puVar8;
        local_1c = 0x10;
        local_1a = 1;
        func_0x00081218(&local_20,iVar4 + (uint)bVar1 * 0x20);
        *piVar6 = *piVar6 + 2;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 6;
      piVar6 = piVar6 + 3;
    } while (iVar7 < 5);
  }
  return;
}

