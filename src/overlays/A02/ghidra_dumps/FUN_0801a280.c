// FUN_0801a280

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a280(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  if (param_1 == 0) {
    iVar3 = 8;
    puVar2 = &DAT_801390d4;
    do {
      *puVar2 = 0;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_800bfe56 & 4) == 0) {
    piVar6 = (int *)&DAT_80129074;
    puVar7 = (undefined2 *)&DAT_8012907e;
    pbVar8 = &DAT_801390cc;
    do {
      bVar1 = *pbVar8;
      *pbVar8 = bVar1 - 1;
      if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 1) {
        pcVar4 = (char *)*piVar6;
        if (*pcVar4 == -1) {
          *piVar6 = (int)pcVar4 - (uint)(byte)pcVar4[1];
        }
        iVar3 = 0;
        if (DAT_800bf8be == -1) {
          iVar3 = (uint)*(byte *)*piVar6 << 4;
        }
        iVar5 = *(int *)(puVar7 + -3);
        *pbVar8 = *(byte *)(*piVar6 + 1);
        local_28 = puVar7[-1];
        local_26 = *puVar7;
        local_24 = 0x10;
        local_22 = 1;
        func_0x00081218(&local_28,iVar5 + iVar3 * 2);
        *piVar6 = *piVar6 + 2;
      }
      pbVar8 = pbVar8 + 1;
      puVar7 = puVar7 + 6;
      piVar6 = piVar6 + 3;
    } while ((int)pbVar8 < -0x7fec6f2b);
  }
  return;
}

