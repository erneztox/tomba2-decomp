// FUN_80122d58

/* WARNING: Removing unreachable block (ram,0x8012bdd8) */
/* WARNING: Removing unreachable block (ram,0x8012be18) */

void FUN_80122d58(undefined1 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int in_v0;
  int in_v1;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_t1;
  int unaff_s2;
  
  iVar3 = in_v1 + -0x5da8;
  bVar1 = *(byte *)((*(ushort *)(in_v0 + 0x16) >> 6 & 7) + iVar3);
  *(byte *)(unaff_s2 + 0x5f) = bVar1;
  if ((*(int *)(*(int *)(bVar1 + 0xc0) + 0x34) <= iVar3) && (iVar3 < 0x1644)) {
LAB_80134d64:
    *(undefined1 *)(param_3 + 5) = param_1;
    *(undefined1 *)(param_3 + 4) = param_1;
    func_0x8002b278();
    FUN_8013dd24();
    return;
  }
  iVar3 = 1;
  iVar4 = *(byte *)(in_t1 + 8) - 1;
  if (1 < iVar4) {
    param_3 = (int)*(short *)(param_4 + 0x36);
    iVar5 = 8;
    iVar2 = in_t1;
    do {
      if ((*(int *)(*(int *)(iVar2 + 0xc4) + 0x34) <= param_3) &&
         (param_3 < *(int *)(*(int *)(in_t1 + iVar5 + 0xc0) + 0x34))) {
        *(undefined1 *)(param_3 + 6) = 1;
        param_1 = 1;
        goto LAB_80134d64;
      }
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar4);
  }
  return;
}

