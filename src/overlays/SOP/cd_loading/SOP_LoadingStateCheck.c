// SOP_LoadingStateCheck (SOP_LoadingStateCheck) - Checks game loading state (g_EntityPool0 + g_LoadSubState) during boot sequence

/* WARNING: Control flow encountered bad instruction data */

void SOP_LoadingStateCheck(void)

{
  if (g_EntityPool0 == '\0') {
    g_EntityPool0 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (g_EntityPool0 == '\x01') {
    if (g_LoadSubState == '\0') {
      Camera_SetModeSeq(&g_EntityPool0,0x800e8040);
    }
    else if (g_LoadSubState == '\x01') {
      g_LoadSubState = 0;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

