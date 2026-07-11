// FUN_08036480

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036480(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    func_0x00077c40(param_1,0x80144a98,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00077cfc(param_1,0x80144a98,param_2,(int)(short)param_3);
  *(short *)(param_1 + 0x7a) = (short)param_2;
  *(ushort *)(param_1 + 0x4e) = 0x1000 - (short)param_3 * (ushort)*(byte *)(param_2 + -0x7febe4f4);
  bVar1 = *(byte *)(param_2 + -0x7febe50c);
  if ((uint)bVar1 != (int)*(short *)(param_1 + 0x7e)) {
    uVar2 = 0x15;
    if (*(char *)(param_1 + 2) == '\x1c') {
      uVar2 = 0x14;
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 200),uVar2,(uint)bVar1);
    *(ushort *)(param_1 + 0x7e) = (ushort)bVar1;
  }
  return;
}

