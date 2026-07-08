
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

void FUN_80011654(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_s6;
  undefined1 uStack00000031;
  undefined1 uStack00000032;
  undefined1 uStack00000033;
  undefined1 uStack000000f1;
  undefined1 uStack000000f2;
  undefined1 uStack000000f3;
  undefined1 *in_stack_000001a0;
  
  uStack00000031 = 0;
  uStack00000032 = 0;
  uStack00000033 = 0;
  uStack000000f1 = 0;
  uStack000000f2 = 0;
  uStack000000f3 = 0;
  FUN_800138ac();
  FUN_800138ac();
  FUN_800131b0(1);
  in_stack_000001a0 = &stack0x00000018;
  puVar3 = &stack0x000000d8;
  if (unaff_s6 != in_stack_000001a0) {
    puVar3 = in_stack_000001a0;
  }
  FUN_8001366c(puVar3 + 0x70,2);
  uVar1 = FUN_800177cc(0x370,0x1ff);
  sVar2 = FUN_8001778c(0,0,0x340,0x100);
  FUN_8001784c(puVar3 + 0xb4,1,0,(int)sVar2);
  FUN_800177ec(puVar3 + 0x70,puVar3 + 0xb4);
  *(undefined4 *)(puVar3 + 0x7c) = 0;
  FUN_8001782c(puVar3 + 0x78);
  puVar4 = puVar3 + 0x74;
  *(undefined2 *)(puVar3 + 0x82) = 200;
  *(undefined2 *)(puVar3 + 0x80) = 0x18;
  puVar3[0x84] = 0;
  puVar3[0x85] = 0;
  *(undefined2 *)(puVar3 + 0x88) = 0x100;
  *(undefined2 *)(puVar3 + 0x8a) = 0x40;
  *(undefined2 *)(puVar3 + 0x86) = uVar1;
  FUN_800177ec(puVar4);
  *(undefined4 *)(puVar3 + 0x90) = 0;
  FUN_8001782c(puVar3 + 0x8c);
  *(undefined2 *)(puVar3 + 0x96) = 200;
  *(undefined2 *)(puVar3 + 0x94) = 0x118;
  puVar3[0x98] = 0;
  puVar3[0x99] = 0x40;
  *(undefined2 *)(puVar3 + 0x9c) = 0x100;
  *(undefined2 *)(puVar3 + 0x9e) = 0x40;
  *(undefined2 *)(puVar3 + 0x9a) = uVar1;
  FUN_800177ec(puVar4);
  *(undefined4 *)(puVar3 + 0xa4) = 0;
  FUN_8001782c(puVar3 + 0xa0);
  *(undefined2 *)(puVar3 + 0xa8) = 0x218;
  puVar3[0xad] = 0x80;
  *(undefined2 *)(puVar3 + 0xaa) = 200;
  puVar3[0xac] = 0;
  *(undefined2 *)(puVar3 + 0xb0) = 0x40;
  *(undefined2 *)(puVar3 + 0xb2) = 0x20;
  *(undefined2 *)(puVar3 + 0xae) = uVar1;
  FUN_800177ec(puVar4);
  FUN_80013248(0);
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0);
}

