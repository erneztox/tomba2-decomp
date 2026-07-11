/**
 * @brief Audio sequence opener: checks _DAT_80104c28, opens SEQ data
 * @note Original: func_8008E100 at 0x8008E100
 */
// Audio_SeqOpen



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Audio_SeqOpen(s32 param_1,s16 param_2)

{
  s16 sVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_80104c28 == 0xffffffff) {
    Debug_Printf(s_Can_t_Open_Sequence_data_any_mor_8001c5e0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if ((_DAT_80104c28 & 1 << (uVar2 & 0x1f)) == 0) break;
      uVar2 = uVar2 + 1;
      uVar3 = 0;
    } while ((int)uVar2 < 0x20);
    uVar3 = (uint)(s16)uVar3;
    _DAT_80104c28 = _DAT_80104c28 | 1 << (uVar3 & 0x1f);
    sVar1 = Audio_SeqMain(uVar3,(int)param_2,param_1);
    _DAT_80104b90 = Audio_ChannelDispatch;
    _DAT_80104b94 = SPU_SetVoiceAttr2;
    _DAT_80104b9c = Audio_VoiceControl;
    _DAT_80104b98 = Audio_ChannelPlay;
    _DAT_80104ba0 = Audio_VoiceAlloc2;
    _DAT_80104ba4 = Audio_ProgramChange;
    _DAT_80104bac = Audio_ChannelSetParam3;
    _DAT_80104bb0 = Audio_ChannelCmd;
    _DAT_80104bb4 = Audio_ChannelCmd2;
    _DAT_80104bb8 = Audio_ChannelParam;
    _DAT_80104bbc = Audio_SetChannel;
    _DAT_80104bc0 = Audio_ChannelVoice;
    _DAT_80104bc4 = Audio_NoteOn;
    _DAT_80104bc8 = SPU_SetVoiceAttr;
    _DAT_80104bcc = Audio_AllocChannel;
    _DAT_80104bd0 = Audio_ResetChannel_2;
    _DAT_80104ba8 = Audio_SeqLoad;
    _DAT_80104bd4 = Audio_SeqCmd;
    _DAT_80104bd8 = Audio_SeqCmd2;
    _DAT_80104bdc = Audio_Cmd6;
    _DAT_80104be0 = Audio_Cmd5;
    _DAT_80104be4 = Audio_SetVoice5;
    _DAT_80104be8 = Audio_SetVoice6;
    _DAT_80104bec = Audio_SetVoice3;
    _DAT_80104bf0 = Audio_SetVoice4;
    _DAT_80104bf4 = Audio_SetVoice7;
    _DAT_80104bf8 = Audio_SetVoice9;
    _DAT_80104bfc = Audio_SetVoice10;
    _DAT_80104c00 = Audio_VoiceParam;
    _DAT_80104c04 = Audio_SetVoice8;
    _DAT_80104c08 = Audio_SetVoice;
    _DAT_80104c0c = Audio_SetVoice2;
    _DAT_80104c10 = SPU_Dispatch1;
    _DAT_80104c14 = SPU_Dispatch2;
    _DAT_80104c18 = SPU_Dispatch3;
    _DAT_80104c1c = SPU_Dispatch4;
    _DAT_80104c20 = SPU_Dispatch5;
    uVar2 = 0xffffffff;
    if (sVar1 != -1) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}
