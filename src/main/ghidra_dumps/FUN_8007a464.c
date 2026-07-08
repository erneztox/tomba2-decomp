
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8007a464(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = _DAT_800f273c;
  if (_DAT_800f273c == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar4 = *(undefined4 *)(_DAT_800f273c + 0x24);
  DAT_800f2410 = DAT_800f2410 + -1;
  if (param_2 != 1) {
    if (1 < param_2) {
      if (param_2 == 2) {
        if (*(int *)(param_1 + 0x24) != 0) {
          piVar1 = (int *)(_DAT_800f273c + 0x20);
          _DAT_800f273c = (undefined1 *)uVar4;
          *piVar1 = param_1;
          *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
          *(undefined1 **)(*(int *)(param_1 + 0x24) + 0x20) = puVar3;
          *(undefined1 **)(param_1 + 0x24) = puVar3;
          uVar4 = _DAT_800f273c;
          goto LAB_8007a590;
        }
      }
      else if (param_2 != 3) goto LAB_8007a590;
      puVar2 = (undefined4 *)(_DAT_800f273c + 0x24);
      _DAT_800f273c = (undefined1 *)uVar4;
      *puVar2 = 0;
      *(undefined1 **)(puVar3 + 0x20) = _DAT_800f23a0;
      if (_DAT_800f23a0 == (undefined1 *)0x0) {
        _DAT_800f2738 = puVar3;
      }
      else {
        *(undefined1 **)(_DAT_800f23a0 + 0x24) = puVar3;
      }
      _DAT_800f23a0 = puVar3;
      uVar4 = _DAT_800f273c;
      goto LAB_8007a590;
    }
    if (param_2 != 0) goto LAB_8007a590;
    if (*(int *)(param_1 + 0x20) != 0) {
      piVar1 = (int *)(_DAT_800f273c + 0x20);
      _DAT_800f273c = (undefined1 *)uVar4;
      *piVar1 = *(int *)(param_1 + 0x20);
      *(int *)(puVar3 + 0x24) = param_1;
      *(undefined1 **)(*(int *)(param_1 + 0x20) + 0x24) = puVar3;
      *(undefined1 **)(param_1 + 0x20) = puVar3;
      uVar4 = _DAT_800f273c;
      goto LAB_8007a590;
    }
  }
  puVar2 = (undefined4 *)(_DAT_800f273c + 0x20);
  _DAT_800f273c = (undefined1 *)uVar4;
  *puVar2 = 0;
  *(undefined1 **)(puVar3 + 0x24) = _DAT_800f2738;
  if (_DAT_800f2738 == (undefined1 *)0x0) {
    _DAT_800f23a0 = puVar3;
  }
  else {
    *(undefined1 **)(_DAT_800f2738 + 0x20) = puVar3;
  }
  _DAT_800f2738 = puVar3;
  uVar4 = _DAT_800f273c;
LAB_8007a590:
  _DAT_800f273c = (undefined1 *)uVar4;
  *puVar3 = 2;
  puVar3[0xc] = 1;
  return puVar3;
}

