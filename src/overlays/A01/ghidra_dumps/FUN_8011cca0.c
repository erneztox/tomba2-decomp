// FUN_8011cca0

void FUN_8011cca0(int param_1,int param_2,int param_3,int param_4)

{
  int in_v1;
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t5;
  int in_t6;
  int unaff_s0;
  int unaff_s1;
  int in_hi;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int iStack00000020;
  int iStack00000024;
  
  *(undefined2 *)(unaff_s0 + 0x7c) = 0x1e;
  *(undefined2 *)(unaff_s0 + 0x7a) = 0x814;
  iStack00000010 = (in_t5 >> 8) - (param_4 >> 0x1f);
  iStack00000018 = (unaff_s1 >> 8) - (in_v1 >> 0x1f);
  iStack00000020 = (in_hi >> 8) - (param_2 >> 0x1f);
  iStack00000014 = (in_t6 >> 8) - (in_t1 >> 0x1f);
  iStack0000001c =
       (int)((longlong)(param_3 + -0x814) * (longlong)in_t2 >> 0x28) - (param_3 + -0x814 >> 0x1f);
  iStack00000024 =
       (int)((longlong)(in_t0 + -0x814) * (longlong)in_t2 >> 0x28) - (in_t0 + -0x814 >> 0x1f);
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_8012f188(param_1,&stack0x00000010,&stack0x00000018,&stack0x00000020);
  return;
}

