// FUN_80111f84

void FUN_80111f84(int param_1)

{
  int in_v0;
  int in_v1;
  
  if (in_v0 == 0) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x10);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x29);
    return;
  }
  if (199 < in_v1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xf);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x28);
    return;
  }
  if (in_v1 < 100) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xd);
      return;
    }
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x26);
    return;
  }
  if (*(char *)(param_1 + 0x5e) == '\0') {
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xe);
    return;
  }
  FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x27);
  return;
}

