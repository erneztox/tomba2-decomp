/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80015CF0 at 0x80015CF0
 */
// DMA_StateManage



undefined4 DMA_StateManage(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint unaff_s1;
  undefined4 *unaff_s2;
  int unaff_s4;
  
  DAT_8002564c = DMA_StateManage(0);
  DAT_80025640 = 0;
  DAT_8002563c = 0;
  uVar3 = param_1 & 7;
  if (uVar3 != 1) {
    if (uVar3 < 2) {
      uVar2 = 0;
      if (uVar3 != 0) goto LAB_8001560c;
    }
    else {
      if (uVar3 == 3) goto LAB_80015dc0;
      if (uVar3 != 5) goto DMA_StateManage;
    }
    *DAT_80025628 = 0x401;
    *DAT_80025638 = *DAT_80025638 | 0x800;
    *DAT_8002561c = 0;
    DMA_StateManage(&DAT_800384f0,0,0x100);
    DMA_StateManage(&DAT_800385f8,0,0x1800);
    uVar2 = DAT_8002563c;
LAB_8001560c:
    do {
      DAT_8002563c = uVar2;
      if ((*DAT_8002561c & unaff_s1) != 0) {
        while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
          *unaff_s2 = *DAT_80025618;
          unaff_s2 = unaff_s2 + 1;
        }
        if (unaff_s4 != 0) {
          *DAT_8002561c = 0x4000003;
          *DAT_80025620 = (int)unaff_s2;
          *DAT_80025624 = unaff_s4 << 0x10 | 0x10;
          *DAT_80025628 = 0x1000200;
        }
        return 0;
      }
      iVar1 = DMA_StateManage();
      uVar2 = DAT_8002563c;
    } while (iVar1 == 0);
    return 0xffffffff;
  }
LAB_80015dc0:
  *DAT_80025628 = 0x401;
  *DAT_80025638 = *DAT_80025638 | 0x800;
  *DAT_8002561c = 0x2000000;
  *DAT_8002561c = 0x1000000;
DMA_StateManage:
  DMA_StateManage(DAT_8002564c);
  uVar2 = 0;
  if ((param_1 & 7) == 0) {
    uVar2 = DMA_StateManage(param_1);
  }
  return uVar2;
}
