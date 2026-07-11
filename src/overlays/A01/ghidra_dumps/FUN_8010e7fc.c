// FUN_8010e7fc

void FUN_8010e7fc(void)

{
  undefined2 in_v1;
  int unaff_s2;
  int unaff_s3;
  
  *(undefined2 *)(unaff_s2 + 0x40) = in_v1;
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + '\x01';
  if (*(char *)(unaff_s2 + 5) == '\x03') {
    *(ushort *)(unaff_s3 + 6) = *(ushort *)(unaff_s3 + 6) & 0xfffe;
    FUN_80117894();
    return;
  }
  *(ushort *)(unaff_s3 + 6) = *(ushort *)(unaff_s3 + 6) | 1;
  FUN_80117894();
  return;
}

