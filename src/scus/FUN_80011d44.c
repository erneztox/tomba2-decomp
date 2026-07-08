
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x800116e8) */
/* WARNING: Removing unreachable block (ram,0x800118d8) */
/* WARNING: Removing unreachable block (ram,0x800116f0) */
/* WARNING: Removing unreachable block (ram,0x800116f8) */
/* WARNING: Removing unreachable block (ram,0x80011700) */
/* WARNING: Removing unreachable block (ram,0x80011758) */
/* WARNING: Removing unreachable block (ram,0x8001177c) */
/* WARNING: Removing unreachable block (ram,0x80011780) */
/* WARNING: Removing unreachable block (ram,0x8001172c) */
/* WARNING: Removing unreachable block (ram,0x80010f84) */
/* WARNING: Removing unreachable block (ram,0x80011738) */
/* WARNING: Removing unreachable block (ram,0x80010f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80011d44(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_s6;
  undefined1 uStack00000011;
  undefined1 uStack00000012;
  undefined1 uStack00000013;
  undefined2 uStack0000005e;
  undefined1 uStack000000cf;
  undefined1 in_stack_000000d0;
  undefined1 uStack000000d1;
  undefined1 uStack000000d2;
  undefined1 uStack000000d3;
  undefined2 in_stack_0000011c;
  undefined2 uStack0000011e;
  undefined2 in_stack_00000120;
  undefined1 in_stack_00000124;
  undefined1 *in_stack_00000180;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = _DAT_8003848c;
  local_c = _DAT_80038490;
  uVar5 = (uint)(DAT_80038474 == 0);
  sVar2 = DAT_8003848c + DAT_80038490;
  _DAT_8003848c = CONCAT22(DAT_8003848e,sVar2);
  if ((int)sVar2 <
      (int)*(short *)(&DAT_80038478 + DAT_80038488 * 8) +
      (int)*(short *)(&DAT_8003847c + DAT_80038488 * 8)) {
    uStack0000005e = (undefined2)(((int)DAT_80038490 * (int)DAT_80038492) / 2);
    DAT_80038474 = uVar5;
    FUN_8001f2cc(*(undefined4 *)(&DAT_8003846c + uVar5 * 4));
    in_stack_0000011c = 0;
    in_stack_00000120 = 0;
    in_stack_00000124 = 1;
    uStack000000cf = 1;
    in_stack_000000d0 = 1;
    uStack00000011 = 0;
    uStack00000012 = 0;
    uStack00000013 = 0;
    uStack000000d1 = 0;
    uStack000000d2 = 0;
    uStack000000d3 = 0;
    uStack0000011e = uStack0000005e;
    FUN_800138ac();
    FUN_800138ac();
    FUN_800131b0(1);
    in_stack_00000180 = &stack0xfffffff8;
    puVar4 = &stack0x000000b8;
    if (unaff_s6 != in_stack_00000180) {
      puVar4 = in_stack_00000180;
    }
    FUN_8001366c(puVar4 + 0x70,2);
    uVar1 = FUN_800177cc(0x370,0x1ff);
    sVar2 = FUN_8001778c(0,0,0x340,0x100);
    local_10 = 0;
    FUN_8001784c(puVar4 + 0xb4,1,0,(int)sVar2);
    FUN_800177ec(puVar4 + 0x70,puVar4 + 0xb4);
    *(undefined4 *)(puVar4 + 0x7c) = 0;
    FUN_8001782c(puVar4 + 0x78);
    puVar6 = puVar4 + 0x74;
    *(undefined2 *)(puVar4 + 0x82) = 200;
    *(undefined2 *)(puVar4 + 0x80) = 0x18;
    puVar4[0x84] = 0;
    puVar4[0x85] = 0;
    *(undefined2 *)(puVar4 + 0x88) = 0x100;
    *(undefined2 *)(puVar4 + 0x8a) = 0x40;
    *(undefined2 *)(puVar4 + 0x86) = uVar1;
    FUN_800177ec(puVar6);
    *(undefined4 *)(puVar4 + 0x90) = 0;
    FUN_8001782c(puVar4 + 0x8c);
    *(undefined2 *)(puVar4 + 0x96) = 200;
    *(undefined2 *)(puVar4 + 0x94) = 0x118;
    puVar4[0x98] = 0;
    puVar4[0x99] = 0x40;
    *(undefined2 *)(puVar4 + 0x9c) = 0x100;
    *(undefined2 *)(puVar4 + 0x9e) = 0x40;
    *(undefined2 *)(puVar4 + 0x9a) = uVar1;
    FUN_800177ec(puVar6);
    *(undefined4 *)(puVar4 + 0xa4) = 0;
    FUN_8001782c(puVar4 + 0xa0);
    *(undefined2 *)(puVar4 + 0xa8) = 0x218;
    puVar4[0xad] = 0x80;
    *(undefined2 *)(puVar4 + 0xaa) = 200;
    puVar4[0xac] = 0;
    *(undefined2 *)(puVar4 + 0xb0) = 0x40;
    *(undefined2 *)(puVar4 + 0xb2) = 0x20;
    *(undefined2 *)(puVar4 + 0xae) = uVar1;
    FUN_800177ec(puVar6);
    FUN_80013248(0);
                    /* WARNING: Subroutine does not return */
    FUN_80017e4c(0);
  }
  DAT_80038494 = 1;
  DAT_80038488 = (uint)(DAT_80038488 == 0);
  _DAT_8003848c = *(undefined4 *)(&DAT_80038478 + DAT_80038488 * 8);
  iVar3 = DAT_80038474 * 4;
  DAT_80038474 = uVar5;
  FUN_800134f4(&local_10,*(undefined4 *)(&DAT_8003846c + iVar3));
  return;
}

