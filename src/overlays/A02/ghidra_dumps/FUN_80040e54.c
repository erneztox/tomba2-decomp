// FUN_80040e54

char FUN_80040e54(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  char cVar5;
  
  puVar3 = *(ushort **)(param_1 + 0x6c);
  uVar1 = *puVar3;
  cVar5 = ((uVar1 & 0x1000) != 0) * '\x04';
  uVar2 = (int)(short)uVar1 & 0xe000;
  if (uVar2 == 0x6000) {
    if (param_2 != 0) {
      FUN_80040de0(param_1,puVar3 + 0xc);
      goto LAB_80040f7c;
    }
    uVar4 = *(undefined4 *)(puVar3 + 10);
LAB_80040f54:
    cVar5 = cVar5 + '\x01';
    FUN_80040de0(param_1,uVar4);
  }
  else {
    if (0x6000 < uVar2) {
      if (uVar2 == 0xa000) {
        return '\x02';
      }
      if (uVar2 < 0xa001) {
        if (uVar2 == 0x8000) {
          return '\x02';
        }
      }
      else {
        if (uVar2 == 0xc000) {
          return '\x02';
        }
        if (uVar2 == 0xe000) {
          return '\x02';
        }
      }
      goto LAB_80040f7c;
    }
    if (uVar2 != 0x2000) {
      if (uVar2 < 0x2001) {
        if (uVar2 == 0) {
          FUN_80040de0(param_1,puVar3 + 4);
        }
        goto LAB_80040f7c;
      }
      if (uVar2 != 0x4000) goto LAB_80040f7c;
      if (param_2 == 0) {
        uVar4 = *(undefined4 *)(puVar3 + 6);
        goto LAB_80040f54;
      }
    }
    FUN_80040de0(param_1,puVar3 + 8);
  }
LAB_80040f7c:
  if (((int)(short)uVar1 & 0x800U) != 0) {
    cVar5 = '\x06';
  }
  return cVar5;
}

