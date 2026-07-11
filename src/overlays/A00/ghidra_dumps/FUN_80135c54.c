// FUN_80135c54

/* WARNING: Control flow encountered bad instruction data */

void FUN_80135c54(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int in_v1;
  int in_t0;
  int in_t1;
  
  if (0xff < in_v1) {
    in_v1 = 0xff;
  }
  if (in_t0 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0xff < in_t0) {
    in_t0 = 0xff;
  }
  if (in_t1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0xff < in_t1) {
    in_t1 = 0xff;
  }
  *param_3 = (char)in_v1;
  param_3[1] = (char)in_t0;
  param_3[2] = (char)in_t1;
  return;
}

