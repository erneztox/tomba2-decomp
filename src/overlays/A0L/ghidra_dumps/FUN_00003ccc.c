// FUN_00003ccc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00003ccc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  func_0x0010ca30();
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_8011a6d0 == 0) {
    _DAT_8011a6cc = _DAT_8011a6cc + 6;
    if (0xff < _DAT_8011a6cc) {
      _DAT_8011a6d0 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (0 < _DAT_8011a6cc) {
    _DAT_8011a6cc = _DAT_8011a6cc + -4;
  }
  _DAT_8011a6c4 = _DAT_8011a6c8 * 2 + -0x5a;
  if (0xff < _DAT_8011a6c4) {
    _DAT_8011a6c4 = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_8011a6c4 < 0) {
    _DAT_8011a6c4 = 0;
  }
  iVar10 = 0;
  bVar1 = 0xe5 < _DAT_8011a6c8;
  _DAT_8011a6c8 = _DAT_8011a6c8 + 1;
  do {
    if (iVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = 0x100 - _DAT_8011a6c4 >> 1;
    iVar9 = 0;
    iVar8 = 0;
    sVar7 = 0;
    do {
      puVar2 = _DAT_800bf544;
      _DAT_800bf544[1] = uVar3 << 0x10 | uVar3 << 8 | uVar3;
      puVar2[4] = 0x1000080;
      *(undefined2 *)((int)puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0xd) = 0;
      if (iVar10 == 1) {
        *(undefined2 *)((int)puVar2 + 0xe) = 0x3fa8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)((int)puVar2 + 0xe) = 0x3fe8;
      if (param_1 == 1) {
        if (iVar9 == 0) {
          *(undefined1 *)(puVar2 + 3) = 0x40;
          *(undefined2 *)(puVar2 + 4) = 0x40;
          *(undefined2 *)(puVar2 + 2) = 0;
        }
        else {
          *(undefined1 *)(puVar2 + 3) = 0;
          *(short *)(puVar2 + 2) = sVar7 + -0x40;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(puVar2 + 3) = 0;
      *(short *)(puVar2 + 2) = sVar7;
      func_0x00083cc0(puVar2);
      if (iVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00083c70(puVar2,0);
      puVar5 = puVar2 + 5;
      func_0x00083c30(_DAT_800ed8c8 + 0x10,puVar2);
      _DAT_800bf544 = puVar5;
      if (param_1 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar4 = iVar8 + 0x240;
      iVar8 = iVar8 + 0x40;
      sVar7 = sVar7 + 0x80;
      iVar9 = iVar9 + 1;
      func_0x00083de0(puVar5,1,1,(int)(uVar4 & 0x3ff) >> 6 | 0xa0,0);
      puVar6 = puVar2 + 8;
      func_0x00083c30(_DAT_800ed8c8 + 0x10,puVar5);
      _DAT_800bf544 = puVar6;
    } while (iVar9 < 3);
    iVar10 = iVar10 + 1;
    if (1 < iVar10) {
      func_0x00083db0(puVar6,1);
      iVar10 = _DAT_800ed8c8;
      *puVar6 = *puVar6 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc) & 0xffffff;
      _DAT_800bf544 = puVar2 + 0xb;
      *(uint *)(iVar10 + 0x1ffc) = *(uint *)(iVar10 + 0x1ffc) & 0xff000000 | (uint)puVar6 & 0xffffff
      ;
      return bVar1;
    }
  } while( true );
}

