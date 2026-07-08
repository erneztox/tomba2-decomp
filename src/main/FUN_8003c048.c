
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003c048(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  iVar1 = _DAT_800f2624;
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    if (*(char *)(iVar1 + 1) == '\0') goto switchD_8003c0ac_caseD_9;
    switch(*(undefined1 *)(iVar1 + 0xb)) {
    case 0:
    case 0xf:
      FUN_8003cca4(iVar1);
      iVar1 = iVar2;
      break;
    case 1:
      FUN_8003f174(iVar1,0);
      iVar1 = iVar2;
      break;
    case 2:
      FUN_8003ef9c(iVar1);
      iVar1 = iVar2;
      break;
    case 3:
      func_0x8012a43c(iVar1);
      iVar1 = iVar2;
      break;
    case 4:
      FUN_80039f4c(iVar1);
      iVar1 = iVar2;
      break;
    case 5:
      func_0x801295b4(iVar1);
      iVar1 = iVar2;
      break;
    case 6:
      func_0x80129114(iVar1);
      iVar1 = iVar2;
      break;
    case 7:
      func_0x8013dd58(iVar1);
      iVar1 = iVar2;
      break;
    case 8:
      FUN_800726d4(iVar1);
      iVar1 = iVar2;
      break;
    case 0x10:
      FUN_8003c2d4(iVar1);
      iVar1 = iVar2;
      break;
    case 0x11:
      FUN_8003c464(iVar1);
      iVar1 = iVar2;
      break;
    case 0x12:
      FUN_8003c5f8(iVar1);
      iVar1 = iVar2;
      break;
    case 0x13:
      FUN_8003c788(iVar1);
      iVar1 = iVar2;
      break;
    case 0x14:
      if (DAT_800bf870 == '\x04') {
        func_0x8011be5c(iVar1);
        iVar1 = iVar2;
      }
      else {
        if (*(short **)(iVar1 + 0x38) == (short *)0x0) goto switchD_8003c0ac_caseD_9;
        FUN_8003b054(auStack_60,
                     *(int *)(iVar1 + 0x3c) +
                     (int)*(short *)(*(int *)(iVar1 + 0x3c) + **(short **)(iVar1 + 0x38) * 4 + 2),0)
        ;
        local_59 = 0x2d;
        local_38 = *(undefined2 *)(iVar1 + 0x60);
        local_36 = *(undefined2 *)(iVar1 + 0x62);
        local_34 = *(undefined2 *)(iVar1 + 100);
        local_30 = *(undefined2 *)(iVar1 + 0x66);
        local_2e = *(undefined2 *)(iVar1 + 0x68);
        local_2c = *(undefined2 *)(iVar1 + 0x6a);
        local_28 = *(undefined2 *)(iVar1 + 0x6c);
        local_26 = *(undefined2 *)(iVar1 + 0x6e);
        local_24 = *(undefined2 *)(iVar1 + 0x70);
        local_20 = *(undefined2 *)(iVar1 + 0x72);
        local_1e = *(undefined2 *)(iVar1 + 0x74);
        local_1c = *(undefined2 *)(iVar1 + 0x76);
        FUN_80084660(&DAT_1f8000f8);
        FUN_80084690(&DAT_1f8000f8);
        FUN_8003b320(auStack_60,&local_38,0x10);
        iVar1 = iVar2;
      }
      break;
    case 0x20:
      (**(code **)(iVar1 + 0x18))(iVar1);
    default:
switchD_8003c0ac_caseD_9:
      iVar1 = iVar2;
    }
  } while( true );
}

