// FUN_80123664

void FUN_80123664(int param_1,undefined4 param_2)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Jumptable at 0x801236a4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef624c))(param_1,param_2,param_2);
    return;
  }
  return;
}

