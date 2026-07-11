// FUN_08023238

/* WARNING: Control flow encountered bad instruction data */

bool FUN_08023238(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(short *)(param_1 + 0x7c) != 0) && (*(char *)(param_1 + 0xbf) == '\0')) &&
     (*(char *)(param_1 + 0x29) != '\x01')) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    func_0x0004766c(param_1);
    iVar2 = func_0x00049250(param_1,0,(int)*(short *)(param_1 + 0x84));
    if (iVar2 != 1) {
      *(undefined1 *)(param_1 + 0xbf) = 2;
      *(undefined2 *)(param_1 + 0x50) = 0x180;
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined2 *)(param_1 + 0x66) = 0;
        *(undefined2 *)(param_1 + 0x68) = 1;
        *(undefined1 *)(param_1 + 6) = 4;
        *(undefined1 *)(param_1 + 7) = 2;
      }
      else {
        if (param_2 != 1) {
          cVar1 = *(char *)(param_1 + 6);
          if (cVar1 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (cVar1 == '\x02') {
            *(undefined1 *)(param_1 + 6) = 4;
            *(undefined1 *)(param_1 + 7) = 0;
          }
          return cVar1 == '\x02';
        }
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 6) = 4;
        *(undefined1 *)(param_1 + 7) = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

