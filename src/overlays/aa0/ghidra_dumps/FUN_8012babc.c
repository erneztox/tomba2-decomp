// FUN_8012babc

/* WARNING: Removing unreachable block (ram,0x8012bb64) */
/* WARNING: Removing unreachable block (ram,0x8012bbf0) */
/* WARNING: Removing unreachable block (ram,0x8012bc30) */
/* WARNING: Removing unreachable block (ram,0x8012bbf8) */
/* WARNING: Removing unreachable block (ram,0x8012bc08) */
/* WARNING: Removing unreachable block (ram,0x8012bc10) */
/* WARNING: Removing unreachable block (ram,0x8012bc24) */
/* WARNING: Removing unreachable block (ram,0x8012bbbc) */
/* WARNING: Removing unreachable block (ram,0x8012bbc4) */
/* WARNING: Removing unreachable block (ram,0x8012bc5c) */
/* WARNING: Removing unreachable block (ram,0x8012bc70) */
/* WARNING: Removing unreachable block (ram,0x8012bc84) */
/* WARNING: Removing unreachable block (ram,0x8012bc94) */
/* WARNING: Removing unreachable block (ram,0x8012bc98) */
/* WARNING: Removing unreachable block (ram,0x8012bcac) */

void FUN_8012babc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int in_v0;
  int in_v1;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_s0;
  
  if ((in_v0 != 0) || (0x1643 < in_v1)) {
    iVar4 = 1;
    iVar5 = *(byte *)(param_2 + 8) - 1;
    if (1 < iVar5) {
      iVar6 = 8;
      iVar1 = param_2;
      do {
        if ((*(int *)(*(int *)(iVar1 + 0xc4) + 0x34) <= (int)*(short *)(param_4 + 0x36)) &&
           ((int)*(short *)(param_4 + 0x36) < *(int *)(*(int *)(param_2 + iVar6 + 0xc0) + 0x34))) {
          FUN_80134af0();
          return;
        }
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < iVar5);
    }
    return;
  }
  if (in_v1 == param_2) {
    if (0x10 < *(byte *)(param_1 + 5)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) - 8;
    }
    sVar3 = *(short *)(param_1 + 6) + 6;
    *(short *)(param_1 + 6) = sVar3;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    if (0xff < sVar3) {
      *(undefined1 *)(unaff_s0 + 5) = 3;
      FUN_8013db88();
      return;
    }
  }
  else {
    if (in_v1 != 3) {
      FUN_8013db88();
      return;
    }
    *(char *)(unaff_s0 + 4) = (char)param_2;
  }
  *(char *)(unaff_s0 + 7) = *(char *)(param_1 + 4) << 5;
  bVar2 = *(char *)(param_1 + 4) + 1;
  *(byte *)(param_1 + 4) = bVar2;
  if (5 < bVar2) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  func_0x8002b278();
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  FUN_8013dbd4();
  return;
}

