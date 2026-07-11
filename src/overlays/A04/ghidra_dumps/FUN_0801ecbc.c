// FUN_0801ecbc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801ecbc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar7;
  ushort *puVar8;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  ushort local_38 [16];
  uint uVar6;
  
  puVar8 = local_38;
  local_3c = 0x10;
  local_3a = 1;
  local_40 = param_1;
  local_3e = param_2;
  func_0x00081278(&local_40,puVar8);
  func_0x00080f6c(0);
  iVar7 = 0x20 - param_5;
  do {
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((uVar1 & 0x8000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = ((uVar1 & 0x1f) * iVar7 + param_5 * 0x12 & 0xffff) >> 5;
      uVar5 = (ushort)uVar6;
      uVar3 = ((uVar1 >> 5 & 0x1f) * iVar7 + param_5 * 0x11 & 0xffff) >> 5;
      uVar4 = ((uVar1 >> 10 & 0x1f) * iVar7 + param_5 * 0x17 & 0xffff) >> 5;
      if (0x1f < uVar6) {
        uVar5 = 0x1f;
      }
      if (0x1f < uVar3) {
        uVar3 = 0x1f;
      }
      uVar2 = (ushort)(uVar4 << 10);
      if (0x1f < uVar4) {
        uVar2 = 0x7c00;
      }
      *puVar8 = uVar5 | uVar1 & 0x8000 | uVar2 | (ushort)(uVar3 << 5);
    }
    puVar8 = puVar8 + 1;
  } while ((int)puVar8 < (int)&stack0xffffffe8);
  local_40 = param_3;
  local_3e = param_4;
  func_0x00081218(&local_40,local_38);
  func_0x00080f6c(0);
  return;
}

