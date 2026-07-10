// FUN_80090a0c

void FUN_80090a0c(void)

{
  if (DAT_800ac438 == 0) {
    DAT_800ac438 = 1;
  }
  else {
    DAT_800ac438 = 0;
    (*(code *)PTR_FUN_800ac42c)();
  }
  return;
}

