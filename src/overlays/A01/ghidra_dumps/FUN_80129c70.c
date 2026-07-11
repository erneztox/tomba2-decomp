// FUN_80129c70

/* WARNING: Control flow encountered bad instruction data */

void FUN_80129c70(void)

{
  int *in_t2;
  undefined4 local_res0;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (local_res0 < local_res4) {
    local_res4 = local_res0;
  }
  if (local_res8 < local_resc) {
    local_resc = local_res8;
  }
  if (local_res4 < local_resc) {
    local_resc = local_res4;
  }
  *in_t2 = local_resc >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

