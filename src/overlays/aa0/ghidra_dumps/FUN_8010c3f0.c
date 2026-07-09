// FUN_8010c3f0

void FUN_8010c3f0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 in_v0;
  int iVar3;
  int iVar4;
  int in_t0;
  undefined1 in_t2;
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  int unaff_s3;
  
  *(undefined2 *)(param_4 + 4) = in_v0;
  *(undefined2 *)(param_4 + 6) = *(undefined2 *)(in_t0 + 2);
  *(undefined2 *)(param_4 + 8) = *(undefined2 *)(in_t0 + 4);
  *(undefined2 *)(param_4 + 10) = *(undefined2 *)(in_t0 + 6);
  *(undefined2 *)(param_4 + 0xc) = *(undefined2 *)(in_t0 + 8);
  *(undefined2 *)(param_4 + 0xe) = *(undefined2 *)(in_t0 + 10);
  *(undefined1 *)(param_4 + 0x10) = *(undefined1 *)(in_t0 + 0xc);
  *(undefined1 *)(param_4 + 0x11) = *(undefined1 *)(in_t0 + 0xd);
  uVar1 = *(ushort *)(in_t0 + 0xe);
  uVar2 = *(ushort *)(in_t0 + 0x10);
  *(undefined2 *)(param_4 + 0x2c) = 0x900;
  *(undefined2 *)(param_4 + 0x2e) = 0x8e8;
  iVar3 = in_t0 + 0x14 + (uint)uVar2;
  iVar4 = iVar3 + (uint)uVar1;
  *(int *)(param_4 + 0x1c) = iVar4;
  *(int *)(param_4 + 0x18) = in_t0 + 0x14;
  *(int *)(param_4 + 0x14) = iVar3;
  *(int *)(param_4 + 0x34) = iVar4;
  *(short *)(param_4 + 0x30) =
       (short)(int)((longlong)(int)((uint)*(byte *)(param_4 + 0x10) * 0x900) *
                    (longlong)(int)(param_3 | 0x8e39) >> 0x25);
  *(short *)(param_4 + 0x32) =
       (short)(int)((longlong)(int)((uint)*(byte *)(param_4 + 0x11) * 0x8e8) *
                    (longlong)(int)(param_3 | 0x8e39) >> 0x25);
  *(undefined1 *)(param_4 + 0x38) = in_t2;
  *(undefined2 *)(unaff_s3 + 0x48) = unaff_s2;
  *(undefined2 *)(unaff_s3 + 0x4a) = unaff_s1;
  *(undefined2 *)(unaff_s3 + 0x4c) = unaff_s0;
  func_0x8009a450();
  return;
}

