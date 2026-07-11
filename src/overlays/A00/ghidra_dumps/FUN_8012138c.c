// FUN_8012138c

void FUN_8012138c(undefined4 param_1,int param_2)

{
  short sVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s3;
  int iVar3;
  undefined1 uStack00000014;
  undefined1 uStack00000015;
  undefined1 uStack00000016;
  undefined1 uStack00000017;
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  undefined2 uStack00000024;
  undefined2 uStack00000026;
  undefined2 uStack0000002c;
  undefined2 uStack00000034;
  short sStack0000003a;
  undefined2 uStack0000003c;
  short sStack00000042;
  undefined2 uStack00000044;
  short sStack0000004a;
  undefined2 uStack0000004c;
  short sStack00000052;
  undefined2 uStack00000054;
  
  uStack00000017 = 0x2d;
  uStack00000026 = *(undefined2 *)(unaff_s3 + 0x60);
  uStack0000001e = *(undefined2 *)(unaff_s3 + 0x62);
  uStack0000001c = *(undefined2 *)(unaff_s3 + 100);
  uStack00000024 = *(undefined2 *)(unaff_s3 + 0x66);
  uStack0000002c = *(undefined2 *)(unaff_s3 + 0x68);
  uStack00000034 = *(undefined2 *)(unaff_s3 + 0x6a);
  uStack00000014 = 0x80;
  uStack00000015 = 0x80;
  uStack00000016 = 0x80;
  sStack0000003a = 0;
  uStack0000003c = 0;
  sStack00000042 = 0;
  uStack00000044 = 0;
  sVar1 = (short)unaff_s0;
  uStack0000004c = 0;
  uStack00000054 = 0;
  iVar3 = (int)(uint)*(ushort *)(param_2 + 0x3a) / unaff_s0;
  if (unaff_s0 == 0) {
    trap(0x1c00);
  }
  if ((unaff_s0 == -1) && (*(ushort *)(param_2 + 0x3a) == 0x80000000)) {
    trap(0x1800);
  }
  iVar2 = 0;
  sStack0000004a = sVar1;
  sStack00000052 = sVar1;
  if (-1 < iVar3) {
    do {
      iVar2 = iVar2 + 1;
      func_0x8003b320(&stack0x00000010,&stack0x00000038,(int)*(short *)(unaff_s3 + 0x70));
      sStack0000003a = sStack0000003a + sVar1;
      sStack00000042 = sStack00000042 + sVar1;
      sStack0000004a = sStack0000004a + sVar1;
      sStack00000052 = sStack00000052 + sVar1;
    } while (iVar2 <= iVar3);
  }
  return;
}

