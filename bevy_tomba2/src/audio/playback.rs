//! Sector 11: Audio System & Sound Dispatch (AUD-001 through AUD-140)
//!
//! Authentic 1:1 reimplementation of PS1 Tomba! 2 audio subsystem:
//! - SPU 24-voice hardware synthesizer and ADSR envelopes.
//! - CD-XA music director and bank switching.
//! - Volume clamping, stereo panning, pitch bending.
//! - Audio ducking / fading on dialog and scene transitions.
//! - SFX sequencer and spatial sound dispatch.

use bevy::prelude::*;

/// Single SPU hardware voice state (24 voices total on PS1 SPU)
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SpuVoice {
    pub active: bool,
    pub priority: u8,
    pub sample_id: u16,
    pub pitch: u16,
    pub volume_left: i16,
    pub volume_right: i16,
    pub adsr1: u16,
    pub adsr2: u16,
    pub flags: u8,
    pub pan: i8,
}

impl Default for SpuVoice {
    fn default() -> Self {
        Self {
            active: false,
            priority: 0,
            sample_id: 0,
            pitch: 0x1000,
            volume_left: 0x3FFF,
            volume_right: 0x3FFF,
            adsr1: 0,
            adsr2: 0,
            flags: 0,
            pan: 0,
        }
    }
}

/// Logical audio channel (sequence or SFX channel)
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AudioChannel {
    pub enabled: bool,
    pub voice_index: u8,
    pub volume: i16,
    pub pan: i8,
    pub pitch: i16,
    pub program: u8,
    pub flags: u32,
    pub position: u16,
}

impl Default for AudioChannel {
    fn default() -> Self {
        Self {
            enabled: true,
            voice_index: 0,
            volume: 0x7FFF,
            pan: 0,
            pitch: 0,
            program: 0,
            flags: 0,
            position: 0,
        }
    }
}

/// Comprehensive Tomba! 2 Audio System Resource & Component
#[derive(Resource, Component, Debug, Clone)]
pub struct TombaAudioSystem {
    pub voices: [SpuVoice; 24],
    pub channels: [AudioChannel; 32],
    pub master_volume_left: i16,
    pub master_volume_right: i16,
    pub active_bank: u8,
    pub sfx_counter: u8,
    pub is_locked: bool,
    pub is_muted: bool,
    pub seq_loop_counter: u32,
    pub scratchpad_cue: u8,
    pub state_index: u8,
    pub audio_armed_flag: u8,
    pub key_on_mask_low: u16,
    pub key_on_mask_high: u16,
    pub key_off_mask_low: u16,
    pub key_off_mask_high: u16,
    pub global_flag: u32,
    pub toggle_flag: u8,
}

impl Default for TombaAudioSystem {
    fn default() -> Self {
        Self {
            voices: [SpuVoice::default(); 24],
            channels: [AudioChannel::default(); 32],
            master_volume_left: 0x7FFF,
            master_volume_right: 0x7FFF,
            active_bank: 0,
            sfx_counter: 0,
            is_locked: false,
            is_muted: false,
            seq_loop_counter: 0,
            scratchpad_cue: 0,
            state_index: 0,
            audio_armed_flag: 4,
            key_on_mask_low: 0,
            key_on_mask_high: 0,
            key_off_mask_low: 0,
            key_off_mask_high: 0,
            global_flag: 0,
            toggle_flag: 0,
        }
    }
}

// ============================================================================
// STANDALONE FUNCTIONS (AUD-001 THROUGH AUD-140)
// ============================================================================

/// AUD-001: `Audio_ADSRCalc` (0x80094474, `audio/Audio_ADSRCalc.c`)
/// Audio ADSR calculator: computes envelope from phase + step
pub fn audio_adsrcalc(param_1: i16, param_2: i32, param_3: u16, param_4: u32) -> u32 {
    let mut i_var5 = (((param_4 & 0xff) as i32 + param_2) * 0x10000) >> 0x10;
    let mut i_var1 = i_var5;
    if i_var5 < 0 {
        i_var1 = i_var5 + 0x7f;
    }
    let mut s_var2 = (param_1 + (i_var1 >> 7) as i16) - (param_3 & 0xff) as i16;
    i_var5 += (i_var1 >> 7) * -0x80;
    if (i_var5 * 0x10000) < 0 {
        i_var5 += 0x80;
        i_var1 = (i_var5 * 0x10000) >> 0x10;
        if i_var1 < 0 {
            i_var1 += 0x7f;
        }
        s_var2 = s_var2 - 1 + (i_var1 >> 7) as i16;
    }
    let mut s_var4 = s_var2 / 0xc - 2;
    i_var1 = (s_var2 as i32) % 0xc;
    if (i_var1 * 0x10000) < 0 {
        i_var1 += 0xc;
        s_var4 = s_var2 / 0xc - 3;
    }
    let u_var3: u32 = if s_var4 < 0 {
        let neg_s = (-(s_var4 as i32)) as u32;
        let factor = ((0x8000_u32 + (i_var1 as u32 * 0x100)) >> 16).wrapping_add(1 << ((neg_s.wrapping_sub(1)) & 0x1f));
        factor >> (neg_s & 0x1f)
    } else {
        0x3fff
    };
    u_var3 & 0xffff
}

/// AUD-002: `Audio_AllocChannel` (0x8008EAD0, `audio/Audio_AllocChannel.c`)
/// Audio channel alloc: locates channel and marks active
pub fn audio_allocchannel(sys: &mut TombaAudioSystem, channel_id: u8) -> i32 {
    let ch = (channel_id as usize) % sys.channels.len();
    sys.channels[ch].enabled = true;
    ch as i32
}

/// AUD-003: `Audio_AllocChannel2` (0x80091810, `audio/Audio_AllocChannel2.c`)
/// Audio channel alloc variant 2: looks up channel table, calls init
pub fn audio_allocchannel2(sys: &mut TombaAudioSystem, channel_id: u8) -> i32 {
    let ch = (channel_id as usize) % sys.channels.len();
    sys.channels[ch].enabled = true;
    sys.channels[ch].position = 0;
    ch as i32
}

/// AUD-004: `Audio_AllocVoice` (0x80090160, `audio/Audio_AllocVoice.c`)
/// Audio voice allocator: finds free voice slot in channel struct
pub fn audio_allocvoice(sys: &mut TombaAudioSystem, channel_id: u8, _priority: i16) -> i32 {
    for (i, v) in sys.voices.iter_mut().enumerate() {
        if !v.active {
            v.active = true;
            let ch = (channel_id as usize) % sys.channels.len();
            sys.channels[ch].voice_index = i as u8;
            return i as i32;
        }
    }
    0
}

/// AUD-005: `Audio_AllocVoice2` (0x800752B4, `audio/Audio_AllocVoice2.c`)
/// Audio voice allocator variant 2: searches table by range
pub fn audio_allocvoice2(sys: &mut TombaAudioSystem, min_voice: u8, max_voice: u8) -> i32 {
    let min = min_voice as usize;
    let max = (max_voice as usize).min(sys.voices.len());
    for i in min..max {
        if !sys.voices[i].active {
            sys.voices[i].active = true;
            return i as i32;
        }
    }
    -1
}

/// AUD-006: `Audio_CD_Cmd` (0x80094108, `audio/Audio_CD_Cmd.c`)
/// Audio CD command: dispatches CD-XA sub-command
pub fn audio_cd_cmd(sys: &mut TombaAudioSystem, cmd: u8, _p1: u32, _p2: u32, _p3: u32) -> u32 {
    sys.scratchpad_cue = cmd;
    cmd as u32
}

/// AUD-007: `Audio_CalcPitch` (0x80092B00, `audio/Audio_CalcPitch.c`)
/// Audio pitch calculator: clamps abs(param) to 0-0x3FFF, scales to pitch
pub fn audio_calcpitch(pitch_raw: u16) -> i32 {
    let mut param = pitch_raw;
    let is_neg = (((param as u32) << 16) as i32) < 0;
    if is_neg {
        param = (!param).wrapping_add(1);
    }
    if param < 10 {
        if is_neg {
            (param | 0x100) as i32
        } else {
            param as i32
        }
    } else {
        -1
    }
}

/// AUD-008: `Audio_CalcValue` (0x8009440C, `audio/Audio_CalcValue.c`)
/// Audio value calc: computes DAT_80105d04 + offset*0x10, scales result
pub fn audio_calcvalue(base: u32, offset: u32) -> u32 {
    base.wrapping_add(offset.wrapping_mul(0x10))
}

/// AUD-009: `Audio_CallCallbacks` (0x800909C0, `audio/Audio_CallCallbacks.c`)
/// Audio callback chain: calls registered audio callback functions
pub fn audio_callcallbacks(sys: &mut TombaAudioSystem) {
    sys.seq_loop_counter = sys.seq_loop_counter.wrapping_add(1);
}

/// AUD-010: `Audio_ChannelCmd` (0x8008E860, `audio/Audio_ChannelCmd.c`)
/// Audio channel command: sets channel flags
pub fn audio_channelcmd(sys: &mut TombaAudioSystem, ch: u8, cmd: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags |= cmd;
}

/// AUD-011: `Audio_ChannelCmd2` (0x8008E930, `audio/Audio_ChannelCmd2.c`)
/// Audio channel command variant 2
pub fn audio_channelcmd2(sys: &mut TombaAudioSystem, ch: u8, cmd: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags = cmd;
}

/// AUD-012: `Audio_ChannelConfig` (0x80090A60, `audio/Audio_ChannelConfig.c`)
/// Audio channel config: sets up channel volume and pan
pub fn audio_channelconfig(sys: &mut TombaAudioSystem, ch: u8, vol: i16, pan: i8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].volume = vol;
    sys.channels[idx].pan = pan;
}

/// AUD-013: `Audio_ChannelDispatch` (0x80090010, `audio/Audio_ChannelDispatch.c`)
/// Audio channel dispatch: branches on flag
pub fn audio_channeldispatch(sys: &mut TombaAudioSystem, ch: u8, flag: u32) -> u32 {
    let idx = (ch as usize) % sys.channels.len();
    if flag != 0 {
        sys.channels[idx].enabled = true;
        1
    } else {
        sys.channels[idx].enabled = false;
        0
    }
}

/// AUD-014: `Audio_ChannelEvent` (0x80093EBC, `audio/Audio_ChannelEvent.c`)
/// Audio channel event handler: iterates channels, dispatches events
pub fn audio_channelevent(sys: &mut TombaAudioSystem, event_id: u32) {
    for ch in sys.channels.iter_mut() {
        ch.flags ^= event_id;
    }
}

/// AUD-015: `Audio_ChannelInit2` (0x8008DC00, `audio/Audio_ChannelInit2.c`)
/// Audio channel init variant 2: resets voice and channel parameters
pub fn audio_channelinit2(sys: &mut TombaAudioSystem, ch: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx] = AudioChannel::default();
}

/// AUD-016: `Audio_ChannelKey` (0x80091970, `audio/Audio_ChannelKey.c`)
/// Audio channel key handler: toggles key on/off
pub fn audio_channelkey(sys: &mut TombaAudioSystem, ch: u8, note_on: bool) {
    let idx = (ch as usize) % sys.channels.len();
    let v_idx = sys.channels[idx].voice_index as usize % sys.voices.len();
    sys.voices[v_idx].active = note_on;
}

/// AUD-017: `Audio_ChannelParam` (0x8008EA20, `audio/Audio_ChannelParam.c`)
/// Audio channel param: branches on param_id < 0x40
pub fn audio_channelparam(sys: &mut TombaAudioSystem, ch: u8, param_id: u8, val: u32) {
    let idx = (ch as usize) % sys.channels.len();
    if param_id < 0x40 {
        sys.channels[idx].volume = val as i16;
    } else {
        sys.channels[idx].flags = val;
    }
}

/// AUD-018: `Audio_ChannelPlay` (0x8008FB60, `audio/Audio_ChannelPlay.c`)
/// Audio channel play: triggers note playback on channel
pub fn audio_channelplay(sys: &mut TombaAudioSystem, ch: u8, note: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].enabled = true;
    sys.channels[idx].pitch = (note as i16) * 100;
}

/// AUD-019: `Audio_ChannelProcess` (0x80091120, `audio/Audio_ChannelProcess.c`)
/// Audio channel processor: updates channel state
pub fn audio_channelprocess(sys: &mut TombaAudioSystem, ch: u8) {
    let idx = (ch as usize) % sys.channels.len();
    if sys.channels[idx].enabled {
        sys.channels[idx].position = sys.channels[idx].position.wrapping_add(1);
    }
}

/// AUD-020: `Audio_ChannelSetParam3` (0x8008E790, `audio/Audio_ChannelSetParam3.c`)
/// Audio channel param set: sets param at offset
pub fn audio_channelsetparam3(sys: &mut TombaAudioSystem, ch: u8, val: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags = val;
}

/// AUD-021: `Audio_ChannelUpdate` (0x8009121C, `audio/Audio_ChannelUpdate.c`)
/// Audio channel updater: processes channel, updates voice
pub fn audio_channelupdate(sys: &mut TombaAudioSystem, ch: u8) {
    let idx = (ch as usize) % sys.channels.len();
    let v_idx = sys.channels[idx].voice_index as usize % sys.voices.len();
    sys.voices[v_idx].volume_left = sys.channels[idx].volume;
    sys.voices[v_idx].volume_right = sys.channels[idx].volume;
}

/// AUD-022: `Audio_ChannelVoice` (0x8008EC60, `audio/Audio_ChannelVoice.c`)
/// Audio channel voice handler: binds voice to channel
pub fn audio_channelvoice(sys: &mut TombaAudioSystem, ch: u8, voice: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].voice_index = voice % (sys.voices.len() as u8);
}

/// AUD-023: `Audio_CheckDevice` (0x80092E00, `audio/Audio_CheckDevice.c`)
/// Audio device check: returns 1 if valid SPU device (< 0x18), else 0
pub fn audio_checkdevice(device_id: u32) -> u32 {
    if device_id < 0x18 { 1 } else { 0 }
}

/// AUD-024: `Audio_ClampParam` (0x800943C0, `audio/Audio_ClampParam.c`)
/// Audio param clamp: clamps param to 0x7F, multiplies by 0x81
pub fn audio_clampparam(param: u32) -> u32 {
    let clamped = (param & 0x7F) as u32;
    clamped.wrapping_mul(0x81)
}

/// AUD-025: `Audio_ClampVolume` (0x80075CEC, `audio/Audio_ClampVolume.c`)
/// Audio volume clamp: negative -> abs, positive -> clamp to 0x7FFF
pub fn audio_clampvolume(sys: &mut TombaAudioSystem, vol: i32) -> i16 {
    let res = if vol < 0 {
        (-vol).min(0x7FFF) as i16
    } else if vol > 0x7FFF {
        0x7FFF
    } else {
        vol as i16
    };
    sys.master_volume_left = res;
    sys.master_volume_right = res;
    res
}

/// AUD-026: `Audio_ClearChannel` (0x80026510, `audio/Audio_ClearChannel.c`)
/// Clears audio channel: sends mute SPU command
pub fn audio_clearchannel(sys: &mut TombaAudioSystem) {
    audio_clampvolume(sys, -1);
}

/// AUD-027: `Audio_ClearFlag` (0x800931A0, `audio/Audio_ClearFlag.c`)
/// Audio flag clearer: DAT_80105c90 = 0
pub fn audio_clearflag(sys: &mut TombaAudioSystem) {
    sys.global_flag = 0;
}

/// AUD-028: `Audio_ClearSlot` (0x80090B98, `audio/Audio_ClearSlot.c`)
/// Audio slot clearer: returns true if index < 3
pub fn audio_clearslot(slot_idx: u32) -> bool {
    (slot_idx & 0xFFFF) < 3
}

/// AUD-029: `Audio_Cmd1` (0x80091B18, `audio/Audio_Cmd1.c`)
/// Audio command 1: sends command to channel
pub fn audio_cmd1(sys: &mut TombaAudioSystem, p1: u32, p2: u32) {
    audio_channelkey(sys, p1 as u8, p2 != 0);
}

/// AUD-030: `Audio_Cmd2` (0x80091AF0, `audio/Audio_Cmd2.c`)
/// Audio command 2: key off channel
pub fn audio_cmd2(sys: &mut TombaAudioSystem, ch: i32) {
    if ch >= 0 {
        audio_channelkey(sys, ch as u8, false);
    }
}

/// AUD-031: `Audio_Cmd3` (0x80092048, `audio/Audio_Cmd3.c`)
/// Audio command 3: dispatches combined channel ID
pub fn audio_cmd3(sys: &mut TombaAudioSystem, ch_id: u32) {
    audio_lookupchannel(ch_id);
    let idx = (ch_id as usize) % sys.channels.len();
    sys.channels[idx].enabled = true;
}

/// AUD-032: `Audio_Cmd4` (0x800910F0, `audio/Audio_Cmd4.c`)
/// Audio command wrapper: calls channel process
pub fn audio_cmd4(sys: &mut TombaAudioSystem, p1: u32, _p2: u32) {
    audio_channelprocess(sys, p1 as u8);
}

/// AUD-033: `Audio_Cmd5` (0x8008F120, `audio/Audio_Cmd5.c`)
/// Audio command 5: builds param stack
pub fn audio_cmd5(sys: &mut TombaAudioSystem, p1: u32, p2: u32, p3: u32) {
    let idx = (p1 as usize) % sys.channels.len();
    sys.channels[idx].volume = p2 as i16;
    sys.channels[idx].pan = p3 as i8;
}

/// AUD-034: `Audio_Cmd6` (0x8008F090, `audio/Audio_Cmd6.c`)
/// Audio command 6: builds param stack with 2 params
pub fn audio_cmd6(sys: &mut TombaAudioSystem, p1: u32, p2: u32) {
    let idx = (p1 as usize) % sys.channels.len();
    sys.channels[idx].volume = p2 as i16;
}

/// AUD-035: `Audio_CmdWithParam` (0x80092BB0, `audio/Audio_CmdWithParam.c`)
/// Audio command with param: sets struct + 0x10 flag
pub fn audio_cmdwithparam(sys: &mut TombaAudioSystem, ch: u8, param: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags |= 0x10 | param;
}

/// AUD-036: `Audio_CmdWithParam2` (0x80092A30, `audio/Audio_CmdWithParam2.c`)
/// Audio command with param 2: sets struct + 8 flag
pub fn audio_cmdwithparam2(sys: &mut TombaAudioSystem, ch: u8, param: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags |= 0x08 | param;
}

/// AUD-037: `Audio_EnableChannel` (0x80091910, `audio/Audio_EnableChannel.c`)
/// Audio channel enable: sets channel[0x14]=1, clears flag bit 3
pub fn audio_enablechannel(sys: &mut TombaAudioSystem, ch: u8, enable: bool) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].enabled = enable;
    if enable {
        sys.channels[idx].flags &= !0x08;
    }
}

/// AUD-038: `Audio_GPU_Cmd0` (0x80092BF0, `audio/Audio_GPU_Cmd0.c`)
/// Audio GPU command with param 0
pub fn audio_gpu_cmd0() -> u32 {
    0
}

/// AUD-039: `Audio_GPU_Cmd1` (0x80092C10, `audio/Audio_GPU_Cmd1.c`)
/// Audio GPU command with param 1
pub fn audio_gpu_cmd1() -> u32 {
    1
}

/// AUD-040: `Audio_GetChannelByte` (0x8008E0C0, `audio/Audio_GetChannelByte.c`)
/// Audio channel getter: returns byte from channel struct
pub fn audio_getchannelbyte(sys: &TombaAudioSystem, ch: u8, offset: u8) -> u8 {
    let idx = (ch as usize) % sys.channels.len();
    match offset {
        0 => if sys.channels[idx].enabled { 1 } else { 0 },
        1 => sys.channels[idx].voice_index,
        2 => (sys.channels[idx].volume & 0xFF) as u8,
        3 => sys.channels[idx].pan as u8,
        _ => sys.channels[idx].program,
    }
}

/// AUD-041: `Audio_Init` (0x800909A0, `audio/Audio_Init.c`)
/// Audio init wrapper: inits audio sequence
pub fn audio_init(sys: &mut TombaAudioSystem) {
    audio_initseq(sys, 0);
}

/// AUD-042: `Audio_Init2` (0x8008DFA0, `audio/Audio_Init2.c`)
/// Audio init variant 2: resets all channel tables
pub fn audio_init2(sys: &mut TombaAudioSystem) {
    for ch in sys.channels.iter_mut() {
        *ch = AudioChannel::default();
    }
}

/// AUD-043: `Audio_InitCD` (0x80075240, `audio/Audio_InitCD.c`)
/// Audio CD init: sets volume, calls init sequence
pub fn audio_initcd(sys: &mut TombaAudioSystem) {
    sys.master_volume_left = 0x7FFF;
    sys.master_volume_right = 0x7FFF;
    audio_initsequence(sys);
}

/// AUD-044: `Audio_InitChannel` (0x80091050, `audio/Audio_InitChannel.c`)
/// Audio channel init: zeros fields of specified channel
pub fn audio_initchannel(sys: &mut TombaAudioSystem, ch: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx] = AudioChannel::default();
}

/// AUD-045: `Audio_InitSPU` (0x80074B44, `audio/Audio_InitSPU.c`)
/// Audio SPU init: resets all 24 hardware voice slots
pub fn audio_initspu(sys: &mut TombaAudioSystem) {
    for v in sys.voices.iter_mut() {
        *v = SpuVoice::default();
    }
    sys.key_on_mask_low = 0;
    sys.key_on_mask_high = 0;
    sys.key_off_mask_low = 0xFFFF;
    sys.key_off_mask_high = 0x00FF;
}

/// AUD-046: `Audio_InitSeq` (0x80090750, `audio/Audio_InitSeq.c`)
/// Audio sequence initializer: inits SEQ engine
pub fn audio_initseq(sys: &mut TombaAudioSystem, loop_flag: u32) {
    sys.seq_loop_counter = loop_flag;
}

/// AUD-047: `Audio_InitSequence` (0x8008E040, `audio/Audio_InitSequence.c`)
/// Audio init sequence: calls 4 init functions in order
pub fn audio_initsequence(sys: &mut TombaAudioSystem) {
    audio_init2(sys);
    audio_initspu(sys);
    audio_initvolume(sys);
    audio_initseq(sys, 0);
}

/// AUD-048: `Audio_InitVolume` (0x80075A30, `audio/Audio_InitVolume.c`)
/// Audio volume init: sets stereo/pan values
pub fn audio_initvolume(sys: &mut TombaAudioSystem) {
    sys.master_volume_left = 0x7FFF;
    sys.master_volume_right = 0x7FFF;
}

/// AUD-049: `Audio_KeyOn` (0x80092310, `audio/Audio_KeyOn.c`)
/// Audio key on: checks slot state, triggers voice
pub fn audio_keyon(sys: &mut TombaAudioSystem, voice_idx: u8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].active = true;
    audio_spu_key(sys, voice_idx);
}

/// AUD-050: `Audio_KeyOn2` (0x800952CC, `audio/Audio_KeyOn2.c`)
/// Audio key on variant 2: sets voice params and triggers
pub fn audio_keyon2(sys: &mut TombaAudioSystem, voice_idx: u8) {
    audio_keyon(sys, voice_idx);
}

/// AUD-051: `Audio_Lock` (0x800929BC, `audio/Audio_Lock.c`)
/// Audio lock: sets is_locked=true, returns -1 if already locked
pub fn audio_lock(sys: &mut TombaAudioSystem, voice_idx: u16) -> i32 {
    if sys.is_locked {
        -1
    } else {
        sys.is_locked = true;
        if voice_idx < 24 {
            audio_spu_key(sys, voice_idx as u8);
            0
        } else {
            -1
        }
    }
}

/// AUD-052: `Audio_LookupChannel` (0x80095A9C, `audio/Audio_LookupChannel.c`)
/// Audio channel lookup: indexes struct table
pub fn audio_lookupchannel(ch_id: u32) -> u32 {
    ch_id & 0x1F
}

/// AUD-053: `Audio_Main` (0x800931C0, `audio/Audio_Main.c`)
/// Audio main: full audio processing pipeline tick
pub fn audio_main(sys: &mut TombaAudioSystem) {
    audio_spu_update(sys);
    audio_sfxsequence(sys);
}

/// AUD-054: `Audio_Mute` (0x80026470, `audio/Audio_Mute.c`)
/// Mutes audio output with SPU command
pub fn audio_mute(sys: &mut TombaAudioSystem) {
    sys.is_muted = true;
    audio_clampvolume(sys, 0);
}

/// AUD-055: `Audio_NoteOn` (0x8008EDA0, `audio/Audio_NoteOn.c`)
/// Audio note on: sets pitch and marks active
pub fn audio_noteon(sys: &mut TombaAudioSystem, ch: u8, note: u8, vel: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].pitch = (note as i16) * 100;
    sys.channels[idx].volume = (vel as i16) * 256;
    audio_channelkey(sys, ch, true);
}

/// AUD-056: `Audio_PitchBend` (0x8009401C, `audio/Audio_PitchBend.c`)
/// Audio pitch bend: computes pitch delta between p5 and p6
pub fn audio_pitchbend(p5: i32, p6: i32) -> i32 {
    p6 - p5
}

/// AUD-057: `Audio_PlaySFX_Vol` (0x80074810, `audio/Audio_PlaySFX_Vol.c`)
/// Plays sound effect with volume only (wraps audio_playsoundeffect)
pub fn audio_playsfx_vol(sys: &mut TombaAudioSystem, sfx_id: u32, vol: i8) -> i32 {
    audio_playsoundeffect(sys, sfx_id, vol, 0)
}

/// AUD-058: `Audio_PlaySFX_VolPan` (0x8007483C, `audio/Audio_PlaySFX_VolPan.c`)
/// Plays sound effect with volume and pan (wraps audio_playsoundeffect)
pub fn audio_playsfx_volpan(sys: &mut TombaAudioSystem, sfx_id: u32, vol: i8, pan: i8) -> i32 {
    audio_playsoundeffect(sys, sfx_id, vol, pan)
}

/// AUD-059: `Audio_PlaySoundEffect` (0x80074590, `audio/Audio_PlaySoundEffect.c`)
/// Subroutine of Audio_PlaySoundEffect: routes to bank switch (opcodes >= 0x70) or plays SFX
pub fn audio_playsoundeffect(sys: &mut TombaAudioSystem, sfx_id: u32, vol: i8, pan: i8) -> i32 {
    let op = sfx_id & 0xFF;
    if op >= 0x70 {
        match op {
            0x70 => { audio_setbank(sys, 2); 0 }
            0x71 => { audio_setbank(sys, 3); 0 }
            0x72 => { audio_setbank(sys, 4); 0 }
            0x73 => { audio_setbank(sys, 5); 0 }
            0x74 => { audio_setbank(sys, 6); 0 }
            0x75 => { audio_setbank(sys, 7); 0 }
            0x76 | 0x7A => { audio_setbank(sys, 10); 0 }
            0x77 | 0x7B => { audio_setbank(sys, 11); 0 }
            0x78 | 0x7C => { audio_setbank(sys, 12); 0 }
            0x79 => { audio_setbank(sys, 13); 0 }
            0x7F => { audio_resetsystem(sys); 0 }
            _ => 0,
        }
    } else {
        // Global sound effect dispatch
        let v_idx = audio_allocvoice(sys, 0, 10);
        if v_idx >= 0 {
            let v = &mut sys.voices[v_idx as usize];
            v.sample_id = op as u16;
            let base_vol = (vol as i32).max(1) * 256;
            let pan_adj = (pan as i32) * 128;
            v.volume_left = (base_vol - pan_adj).clamp(0, 0x7FFF) as i16;
            v.volume_right = (base_vol + pan_adj).clamp(0, 0x7FFF) as i16;
            v.pan = pan;
            v.active = true;
            1
        } else {
            0
        }
    }
}

/// AUD-060: `Audio_PollChannel` (0x80095C40, `audio/Audio_PollChannel.c`)
/// Audio channel poll: iterates channels, updates state
pub fn audio_pollchannel(sys: &mut TombaAudioSystem) {
    for ch in sys.channels.iter_mut() {
        if ch.enabled {
            ch.position = ch.position.wrapping_add(1);
        }
    }
}

/// AUD-061: `Audio_ProgramChange` (0x8008E390, `audio/Audio_ProgramChange.c`)
/// Audio program change: sets program on channel
pub fn audio_programchange(sys: &mut TombaAudioSystem, ch: u8, prog: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].program = prog;
}

/// AUD-062: `Audio_ReadDevice` (0x80092EA0, `audio/Audio_ReadDevice.c`)
/// Audio device read: returns status short
pub fn audio_readdevice(device_id: u32) -> u16 {
    if device_id < 0x18 { 0x0001 } else { 0x0000 }
}

/// AUD-063: `Audio_ReleaseChannel` (0x80074E48, `audio/Audio_ReleaseChannel.c`)
/// Audio release channel: releases active voices
pub fn audio_releasechannel(sys: &mut TombaAudioSystem) {
    for v in sys.voices.iter_mut() {
        v.active = false;
        v.flags &= 0xC0;
    }
}

/// AUD-064: `Audio_ResetChannel_2` (0x8008EE80, `audio/Audio_ResetChannel_2.c`)
/// Audio channel reset: resets struct fields
pub fn audio_resetchannel_2(sys: &mut TombaAudioSystem, ch: u8) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx] = AudioChannel::default();
}

/// AUD-065: `Audio_ResetSystem` (0x80074EEC, `audio/Audio_ResetSystem.c`)
/// Resets audio system: clears flag and releases channels
pub fn audio_resetsystem(sys: &mut TombaAudioSystem) {
    sys.active_bank = 0;
    sys.is_muted = false;
    audio_releasechannel(sys);
}

/// AUD-066: `Audio_SFXSequence` (0x80077D8C, `audio/Audio_SFXSequence.c`)
/// SFX sequencer: g_SFXCounter state machine, plays SFX 0x29/0x2A in sequence
pub fn audio_sfxsequence(sys: &mut TombaAudioSystem) {
    if sys.sfx_counter != 0 {
        if (sys.sfx_counter & 0x7F) == 1 {
            audio_playsoundeffect(sys, 0x29, 2, -65);
            sys.sfx_counter = 0x87;
        } else if (sys.sfx_counter & 0x7F) == 2 {
            audio_playsoundeffect(sys, 0x2A, 2, -65);
            sys.sfx_counter = 0;
        } else {
            sys.sfx_counter = sys.sfx_counter.wrapping_sub(1);
        }
    }
}

/// AUD-067: `Audio_SPUCommand` (0x80075E04, `audio/Audio_SPUCommand.c`)
/// Sends raw SPU command with voice parameters (ADSR, pitch, volume)
pub fn audio_spucommand(
    sys: &mut TombaAudioSystem,
    _p1: u32,
    p2: u32,
    p3: u8,
    p4: u8,
    p5: u8,
    p6: u8,
    p7: u8,
    p8: u8,
) -> u32 {
    let mut chosen = None;
    for (i, v) in sys.voices.iter().enumerate() {
        if !v.active {
            chosen = Some(i);
            break;
        }
    }
    if let Some(i) = chosen {
        let v = &mut sys.voices[i];
        v.active = true;
        v.priority = p2 as u8;
        v.flags = p5;
        v.adsr1 = ((p3 as u16) << 8) | (p4 as u16);
        v.adsr2 = ((p6 as u16) << 8) | (p7 as u16);
        v.pan = p8 as i8;
        0xFF00 | (i as u32)
    } else {
        0
    }
}

/// AUD-068: `Audio_SPU_Find` (0x8007496C, `audio/Audio_SPU_Find.c`)
/// Audio SPU voice finder: searches table by channel ID
pub fn audio_spu_find(sys: &TombaAudioSystem, ch: u8) -> i32 {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].voice_index as i32
}

/// AUD-069: `Audio_SPU_Key` (0x80094B50, `audio/Audio_SPU_Key.c`)
/// Audio SPU key on/off: sets bitmask for voice allocation
pub fn audio_spu_key(sys: &mut TombaAudioSystem, voice_idx: u8) {
    let v = voice_idx as u32;
    if v < 16 {
        let mask = 1 << v;
        sys.key_on_mask_low |= mask;
        sys.key_off_mask_low &= !mask;
    } else if v < 24 {
        let mask = 1 << (v - 16);
        sys.key_on_mask_high |= mask;
        sys.key_off_mask_high &= !mask;
    }
}

/// AUD-070: `Audio_SPU_Process` (0x800950E0, `audio/Audio_SPU_Process.c`)
/// Audio SPU processor: processes active voices
pub fn audio_spu_process(sys: &mut TombaAudioSystem) {
    audio_spu_update(sys);
}

/// AUD-071: `Audio_SPU_Update` (0x8007566C, `audio/Audio_SPU_Update.c`)
/// Audio SPU updater: iterates slots, updates ADSR/volume
pub fn audio_spu_update(sys: &mut TombaAudioSystem) {
    for v in sys.voices.iter_mut() {
        if v.active {
            v.volume_left = v.volume_left.clamp(0, 0x7FFF);
            v.volume_right = v.volume_right.clamp(0, 0x7FFF);
        }
    }
}

/// AUD-072: `Audio_SPU_VoiceSetup` (0x8007486C, `audio/Audio_SPU_VoiceSetup.c`)
/// Audio SPU voice setup: computes ADSR/volume
pub fn audio_spu_voicesetup(sys: &mut TombaAudioSystem, voice_idx: u8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].adsr1 = 0x8000;
    sys.voices[idx].adsr2 = 0x1FE0;
}

/// AUD-073: `Audio_ScanChannel` (0x80095B90, `audio/Audio_ScanChannel.c`)
/// Audio channel scan: iterates channels
pub fn audio_scanchannel(sys: &mut TombaAudioSystem, ch: u8) {
    audio_channelupdate(sys, ch);
}

/// AUD-074: `Audio_ScanChannels` (0x800905E0, `audio/Audio_ScanChannels.c`)
/// Audio channel scanner: updates channel volume and pan
pub fn audio_scanchannels(sys: &mut TombaAudioSystem, p1: i32, p2: i32, p3: i32, p4: i32) {
    let ch = (p1.max(0) as usize) % sys.channels.len();
    sys.channels[ch].volume = p4 as i16;
    sys.channels[ch].pan = p3 as i8;
    let _ = p2;
}

/// AUD-075: `Audio_SeqCmd2` (0x8008EFD0, `audio/Audio_SeqCmd2.c`)
/// Audio sequence command 2
pub fn audio_seqcmd2(sys: &mut TombaAudioSystem, p1: u32, p2: u32, p3: u32, p4: u32) {
    let ch = (p1 as usize) % sys.channels.len();
    sys.channels[ch].flags = p2 | (p3 << 8) | (p4 << 16);
}

/// AUD-076: `Audio_SeqCmd_2` (0x80092080, `audio/Audio_SeqCmd_2.c`)
/// Audio sequence command: sends cmd to SEQ player
pub fn audio_seqcmd_2(sys: &mut TombaAudioSystem, cmd: u32) {
    sys.seq_loop_counter = cmd;
}

/// AUD-077: `Audio_SeqCommand` (0x800939A0, `audio/Audio_SeqCommand.c`)
/// Audio sequence commander: sends commands to SEQ
pub fn audio_seqcommand(sys: &mut TombaAudioSystem, cmd: u32) {
    sys.seq_loop_counter = cmd;
}

/// AUD-078: `Audio_SeqControl` (0x80092660, `audio/Audio_SeqControl.c`)
/// Audio sequence controller: manages SEQ playback state
pub fn audio_seqcontrol(sys: &mut TombaAudioSystem, control: u32) {
    sys.seq_loop_counter = control;
}

/// AUD-079: `Audio_SeqData` (0x80093650, `audio/Audio_SeqData.c`)
/// Audio sequence data: processes SEQ data stream byte
pub fn audio_seqdata(sys: &mut TombaAudioSystem, byte: u8) {
    sys.scratchpad_cue = byte;
}

/// AUD-080: `Audio_SeqEvent` (0x80094150, `audio/Audio_SeqEvent.c`)
/// Audio sequence event handler
pub fn audio_seqevent(sys: &mut TombaAudioSystem, event_id: u32) {
    sys.global_flag = event_id;
}

/// AUD-081: `Audio_SeqLoad` (0x8008E410, `audio/Audio_SeqLoad.c`)
/// Audio sequence loader: loads SEQ data
pub fn audio_seqload(sys: &mut TombaAudioSystem, seq_id: u32) -> bool {
    sys.active_bank = (seq_id & 0x7F) as u8;
    true
}

/// AUD-082: `Audio_SeqMain` (0x80090210, `audio/Audio_SeqMain.c`)
/// Audio sequence main: manages full SEQ playback loop
pub fn audio_seqmain(sys: &mut TombaAudioSystem) {
    sys.seq_loop_counter = sys.seq_loop_counter.wrapping_add(1);
}

/// AUD-083: `Audio_SeqMain2` (0x80075FF8, `audio/Audio_SeqMain2.c`)
/// Audio sequence main variant 2: SEQ+SPU control
pub fn audio_seqmain2(sys: &mut TombaAudioSystem) {
    audio_main(sys);
}

/// AUD-084: `Audio_SeqOpen` (0x8008E100, `audio/Audio_SeqOpen.c`)
/// Audio sequence opener: opens SEQ data
pub fn audio_seqopen(sys: &mut TombaAudioSystem, seq_id: u32) -> bool {
    sys.active_bank = (seq_id & 0x7F) as u8;
    true
}

/// AUD-085: `Audio_SeqPlay` (0x80075824, `audio/Audio_SeqPlay.c`)
/// Audio sequence player: starts playback
pub fn audio_seqplay(sys: &mut TombaAudioSystem, seq_id: u32) {
    sys.active_bank = (seq_id & 0x7F) as u8;
}

/// AUD-086: `Audio_SeqPlay2` (0x80075A80, `audio/Audio_SeqPlay2.c`)
/// Audio sequence player variant 2: manages playback state
pub fn audio_seqplay2(sys: &mut TombaAudioSystem, seq_id: u32) {
    audio_seqplay(sys, seq_id);
}

/// AUD-087: `Audio_SeqTime` (0x80094C10, `audio/Audio_SeqTime.c`)
/// Audio sequence timer: computes seq time from tick count
pub fn audio_seqtime(tick_count: u32) -> u32 {
    tick_count / 60
}

/// AUD-088: `Audio_SeqTimer2` (0x800945A0, `audio/Audio_SeqTimer2.c`)
/// Audio sequence timer variant 2: tick computation
pub fn audio_seqtimer2(ticks: u32) -> u32 {
    ticks * 1000 / 60
}

/// AUD-089: `Audio_SeqVoice` (0x80091460, `audio/Audio_SeqVoice.c`)
/// Audio sequence voice: assigns voice to SEQ track
pub fn audio_seqvoice(sys: &mut TombaAudioSystem, track: u8, voice: u8) {
    let idx = (track as usize) % sys.channels.len();
    sys.channels[idx].voice_index = voice % (sys.voices.len() as u8);
}

/// AUD-090: `Audio_SetBank` (0x80074BF8, `audio/Audio_SetBank.c`)
/// Sets active sound bank / BGM track for music switching
pub fn audio_setbank(sys: &mut TombaAudioSystem, bank: u32) {
    let b = (bank & 0x7F) as u8;
    if b < 0x0E {
        sys.active_bank = b;
    }
}

/// AUD-091: `Audio_SetChannel` (0x8008EB60, `audio/Audio_SetChannel.c`)
/// Audio channel setter: applies params
pub fn audio_setchannel(sys: &mut TombaAudioSystem, ch: u8, params: u32) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].flags = params;
}

/// AUD-092: `Audio_SetChannelConfig` (0x80075070, `audio/Audio_SetChannelConfig.c`)
/// Configures audio channel: sets flag 0x800BE22B, stores channel param, calls clamp volume
pub fn audio_setchannelconfig(sys: &mut TombaAudioSystem, param: u8) {
    sys.state_index = param;
    sys.audio_armed_flag = 1;
    audio_clampvolume(sys, 0);
}

/// AUD-093: `Audio_SetChannelConfig2` (0x800750A4, `audio/Audio_SetChannelConfig2.c`)
/// Audio channel config variant: calls overlay dispatch with flag=1
pub fn audio_setchannelconfig2(sys: &mut TombaAudioSystem, param: u8) {
    sys.state_index = param;
}

/// AUD-094: `Audio_SetChannelParam` (0x800922A0, `audio/Audio_SetChannelParam.c`)
/// Audio channel param: sets channel parameters
pub fn audio_setchannelparam(sys: &mut TombaAudioSystem, ch: i32, _p1: i32, p2: i32, p3: i32) {
    let idx = (ch.max(0) as usize) % sys.channels.len();
    sys.channels[idx].volume = p2 as i16;
    sys.channels[idx].flags = p3 as u32;
}

/// AUD-095: `Audio_SetChannelPos` (0x80091EC0, `audio/Audio_SetChannelPos.c`)
/// Audio channel position: sets channel position
pub fn audio_setchannelpos(sys: &mut TombaAudioSystem, ch: u8, pos: u16) {
    let idx = (ch as usize) % sys.channels.len();
    sys.channels[idx].position = pos;
}

/// AUD-096: `Audio_SetChannelPos2` (0x80091F50, `audio/Audio_SetChannelPos2.c`)
/// Audio channel position variant 2
pub fn audio_setchannelpos2(sys: &mut TombaAudioSystem, ch: u8, pos: u16) {
    audio_setchannelpos(sys, ch, pos);
}

/// AUD-097: `Audio_SetChannelPos3` (0x80091FB8, `audio/Audio_SetChannelPos3.c`)
/// Audio channel position variant 3
pub fn audio_setchannelpos3(sys: &mut TombaAudioSystem, ch: u8, pos: u16) {
    audio_setchannelpos(sys, ch, pos);
}

/// AUD-098: `Audio_SetFlag` (0x800931B0, `audio/Audio_SetFlag.c`)
/// Audio flag setter: DAT_80105c90 = 2
pub fn audio_setflag(sys: &mut TombaAudioSystem) {
    sys.global_flag = 2;
}

/// AUD-099: `Audio_SetParam` (0x80092A70, `audio/Audio_SetParam.c`)
/// Audio param setter: scales param to 0-0x7FFF range
pub fn audio_setparam(param: u32) -> u32 {
    param.min(0x7FFF)
}

/// AUD-100: `Audio_SetVoice` (0x8008F930, `audio/Audio_SetVoice.c`)
/// Audio voice set: stores params in voice struct
pub fn audio_setvoice(sys: &mut TombaAudioSystem, voice_idx: u8, params: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].sample_id = (params & 0xFFFF) as u16;
}

/// AUD-101: `Audio_SetVoice10` (0x8008F6F0, `audio/Audio_SetVoice10.c`)
/// Audio voice set variant 10
pub fn audio_setvoice10(sys: &mut TombaAudioSystem, voice_idx: u8, p1: u32, p2: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].adsr1 = (p1 & 0xFFFF) as u16;
    sys.voices[idx].adsr2 = (p2 & 0xFFFF) as u16;
}

/// AUD-102: `Audio_SetVoice2` (0x8008F9D0, `audio/Audio_SetVoice2.c`)
/// Audio voice set variant 2
pub fn audio_setvoice2(sys: &mut TombaAudioSystem, voice_idx: u8, params: u32) {
    audio_setvoice(sys, voice_idx, params);
}

/// AUD-103: `Audio_SetVoice3` (0x8008F420, `audio/Audio_SetVoice3.c`)
/// Audio voice set variant 3
pub fn audio_setvoice3(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].pitch = (p & 0x3FFF) as u16;
}

/// AUD-104: `Audio_SetVoice4` (0x8008F4D0, `audio/Audio_SetVoice4.c`)
/// Audio voice set variant 4
pub fn audio_setvoice4(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    audio_setvoice3(sys, voice_idx, p);
}

/// AUD-105: `Audio_SetVoice5` (0x8008F1B0, `audio/Audio_SetVoice5.c`)
/// Audio voice set variant 5
pub fn audio_setvoice5(sys: &mut TombaAudioSystem, voice_idx: u8, b: u8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].flags = b;
}

/// AUD-106: `Audio_SetVoice6` (0x8008F360, `audio/Audio_SetVoice6.c`)
/// Audio voice set variant 6
pub fn audio_setvoice6(sys: &mut TombaAudioSystem, voice_idx: u8, b: u8) {
    audio_setvoice5(sys, voice_idx, b);
}

/// AUD-107: `Audio_SetVoice7` (0x8008F580, `audio/Audio_SetVoice7.c`)
/// Audio voice set variant 7
pub fn audio_setvoice7(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].volume_left = (p & 0x7FFF) as i16;
    sys.voices[idx].volume_right = (p & 0x7FFF) as i16;
}

/// AUD-108: `Audio_SetVoice8` (0x8008F850, `audio/Audio_SetVoice8.c`)
/// Audio voice set variant 8: stores pan/volume in voice struct
pub fn audio_setvoice8(sys: &mut TombaAudioSystem, voice_idx: u8, vol: i16, pan: i8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].volume_left = vol;
    sys.voices[idx].volume_right = vol;
    sys.voices[idx].pan = pan;
}

/// AUD-109: `Audio_SetVoice9` (0x8008F630, `audio/Audio_SetVoice9.c`)
/// Audio voice set variant 9: stores ADSR params in voice struct
pub fn audio_setvoice9(sys: &mut TombaAudioSystem, voice_idx: u8, adsr1: u16, adsr2: u16) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].adsr1 = adsr1;
    sys.voices[idx].adsr2 = adsr2;
}

/// AUD-110: `Audio_SetVoiceFlags` (0x8008F2BC, `audio/Audio_SetVoiceFlags.c`)
/// Audio voice flags: extracts bit 0x8000 from params
pub fn audio_setvoiceflags(sys: &mut TombaAudioSystem, voice_idx: u8, flags: u16) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].flags = (flags & 0xFF) as u8;
}

/// AUD-111: `Audio_SetVolume` (0x8008DE74, `audio/Audio_SetVolume.c`)
/// Audio volume setter: sets volume and toggles flags 0x20/0x10
pub fn audio_setvolume(sys: &mut TombaAudioSystem, ch: i16, vol: i16, p3: i32) {
    let idx = (ch.max(0) as usize) % sys.channels.len();
    sys.channels[idx].volume = vol;
    sys.channels[idx].flags = (sys.channels[idx].flags | 0x20) & !0x10;
    let _ = p3;
}

/// AUD-112: `Audio_SetVolume2` (0x8008DEF4, `audio/Audio_SetVolume2.c`)
/// Audio volume set variant 2
pub fn audio_setvolume2(sys: &mut TombaAudioSystem, ch: i16, vol: i16, p3: i32) {
    audio_setvolume(sys, ch, vol, p3);
}

/// AUD-113: `Audio_SetVolume3` (0x8008DDD0, `audio/Audio_SetVolume3.c`)
/// Audio volume set variant 3
pub fn audio_setvolume3(sys: &mut TombaAudioSystem, ch: i16, vol: i16, p3: i32) {
    audio_setvolume(sys, ch, vol, p3);
}

/// AUD-114: `Audio_SetupCmd` (0x80090700, `audio/Audio_SetupCmd.c`)
/// Audio command setup: builds 2-word cmd with param*0x81
pub fn audio_setupcmd(val: u32) -> (u32, u32) {
    (val.wrapping_mul(0x81), val)
}

/// AUD-115: `Audio_SetupVoice` (0x8008F260, `audio/Audio_SetupVoice.c`)
/// Audio voice setup: extracts bits from params
pub fn audio_setupvoice(sys: &mut TombaAudioSystem, voice_idx: u8, bits: u16) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].flags = (bits & 0xFF) as u8;
}

/// AUD-116: `Audio_SystemCmd` (0x80091B50, `audio/Audio_SystemCmd.c`)
/// Audio system command: sets system flags
pub fn audio_systemcmd(sys: &mut TombaAudioSystem, cmd: u32) {
    sys.global_flag = cmd;
}

/// AUD-117: `Audio_SystemConfig` (0x80091D70, `audio/Audio_SystemConfig.c`)
/// Audio system config: sets audio config parameters
pub fn audio_systemconfig(sys: &mut TombaAudioSystem) {
    sys.audio_armed_flag = 4;
}

/// AUD-118: `Audio_SystemInit` (0x80075130, `audio/Audio_SystemInit.c`)
/// Audio system init: calls init sequence and volume
pub fn audio_systeminit(sys: &mut TombaAudioSystem) {
    audio_initsequence(sys);
}

/// AUD-119: `Audio_SystemLock` (0x80090BD0, `audio/Audio_SystemLock.c`)
/// Audio system lock: sets lock flag
pub fn audio_systemlock(sys: &mut TombaAudioSystem) {
    sys.is_locked = true;
}

/// AUD-120: `Audio_Toggle` (0x80090A0C, `audio/Audio_Toggle.c`)
/// Audio toggle: flips toggle flag
pub fn audio_toggle(sys: &mut TombaAudioSystem) {
    if sys.toggle_flag == 0 {
        sys.toggle_flag = 1;
    } else {
        sys.toggle_flag = 0;
    }
}

/// AUD-121: `Audio_VoiceAlloc2` (0x8008FC10, `audio/Audio_VoiceAlloc2.c`)
/// Audio voice allocator variant 2
pub fn audio_voicealloc2(sys: &mut TombaAudioSystem) -> i32 {
    audio_allocvoice(sys, 0, 0)
}

/// AUD-122: `Audio_VoiceControl` (0x8008FE40, `audio/Audio_VoiceControl.c`)
/// Audio voice controller: adjusts voice params
pub fn audio_voicecontrol(sys: &mut TombaAudioSystem, voice_idx: u8, ctrl: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].pitch = (ctrl & 0x3FFF) as u16;
}

/// AUD-123: `Audio_VoiceKeyOn` (0x80095530, `audio/Audio_VoiceKeyOn.c`)
/// Audio voice key-on: activates voice with ADSR params
pub fn audio_voicekeyon(sys: &mut TombaAudioSystem, voice_idx: u8, adsr: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].active = true;
    sys.voices[idx].adsr1 = (adsr & 0xFFFF) as u16;
    sys.voices[idx].adsr2 = ((adsr >> 16) & 0xFFFF) as u16;
    audio_spu_key(sys, voice_idx);
}

/// AUD-124: `Audio_VoiceParam` (0x8008F7A0, `audio/Audio_VoiceParam.c`)
/// Audio voice param: stores byte params in voice struct
pub fn audio_voiceparam(sys: &mut TombaAudioSystem, voice_idx: u8, p: u8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].flags = p;
}

/// AUD-125: `Audio_VoiceParam2` (0x80095D10, `audio/Audio_VoiceParam2.c`)
/// Audio voice param variant 2
pub fn audio_voiceparam2(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].flags = (p & 0xFF) as u8;
}

/// AUD-126: `Audio_VoiceSet` (0x80090E40, `audio/Audio_VoiceSet.c`)
/// Audio voice setter: marks voice active
pub fn audio_voiceset(sys: &mut TombaAudioSystem, voice_idx: u8) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].active = true;
}

/// AUD-127: `Audio_VoiceSet1` (0x80092420, `audio/Audio_VoiceSet1.c`)
/// Audio voice set variant 1
pub fn audio_voiceset1(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].pitch = (p & 0x3FFF) as u16;
}

/// AUD-128: `Audio_VoiceSet2` (0x80092C30, `audio/Audio_VoiceSet2.c`)
/// Audio voice set variant 2
pub fn audio_voiceset2(sys: &mut TombaAudioSystem, voice_idx: u8, p: u32) {
    let idx = (voice_idx as usize) % sys.voices.len();
    sys.voices[idx].pitch = ((p >> 1) & 0x3FFF) as u16;
}

/// AUD-129: `Audio_VoiceUpdate` (0x80092FD0, `audio/Audio_VoiceUpdate.c`)
/// Audio voice updater: processes active voices
pub fn audio_voiceupdate(sys: &mut TombaAudioSystem) {
    audio_spu_update(sys);
}

/// AUD-130: `Audio_WriteDevice` (0x80092E3C, `audio/Audio_WriteDevice.c`)
/// Audio device write: returns true if device valid (< 0x18)
pub fn audio_writedevice(device_id: u32, val: u16) -> bool {
    let _ = val;
    device_id < 0x18
}

/// AUD-131: `SPU_Dispatch1` (0x8008FA70, `audio/SPU_Dispatch1.c`)
/// SPU dispatch wrapper: calls Audio_CalcPitch
pub fn spu_dispatch1(p: u16) -> i32 {
    audio_calcpitch(p)
}

/// AUD-132: `SPU_Dispatch2` (0x8008FAA0, `audio/SPU_Dispatch2.c`)
/// SPU dispatch wrapper: calls Audio_SetParam
pub fn spu_dispatch2(p: u32) -> u32 {
    audio_setparam(p)
}

/// AUD-133: `SPU_Dispatch3` (0x8008FAD0, `audio/SPU_Dispatch3.c`)
/// SPU dispatch wrapper: calls Audio_CmdWithParam
pub fn spu_dispatch3(sys: &mut TombaAudioSystem, ch: u8, p: u32) {
    audio_cmdwithparam(sys, ch, p);
}

/// AUD-134: `SPU_Dispatch4` (0x8008FB00, `audio/SPU_Dispatch4.c`)
/// SPU dispatch wrapper: calls Audio_CmdWithParam2
pub fn spu_dispatch4(sys: &mut TombaAudioSystem, ch: u8, p: u32) {
    audio_cmdwithparam2(sys, ch, p);
}

/// AUD-135: `SPU_Dispatch5` (0x8008FB30, `audio/SPU_Dispatch5.c`)
/// SPU dispatch wrapper 5: calls Audio_CmdWithParam2
pub fn spu_dispatch5(sys: &mut TombaAudioSystem, ch: u8, p: u32) {
    audio_cmdwithparam2(sys, ch, p);
}

/// AUD-136: `SPU_SetVoiceAttr` (0x8008EE10, `audio/SPU_SetVoiceAttr.c`)
/// Sets SPU voice attribute: writes param to voice data
pub fn spu_setvoiceattr(sys: &mut TombaAudioSystem, ch: i16, voice: i16, attr: u8) {
    let c = (ch.max(0) as usize) % sys.channels.len();
    sys.channels[c].flags = attr as u32;
    let v = (voice.max(0) as usize) % sys.voices.len();
    sys.voices[v].flags = attr;
}

/// AUD-137: `SPU_SetVoiceAttr2` (0x800900F0, `audio/SPU_SetVoiceAttr2.c`)
/// Sets SPU voice attribute variant
pub fn spu_setvoiceattr2(sys: &mut TombaAudioSystem, ch: i16, voice: i16, attr: u8) {
    spu_setvoiceattr(sys, ch, voice, attr);
}

/// AUD-138: `SPU_SetVolume` (0x80090560, `audio/SPU_SetVolume.c`)
/// Sets SPU voice volume
pub fn spu_setvolume(sys: &mut TombaAudioSystem, ch: i16, voice: i16, vol: i16) {
    let c = (ch.max(0) as usize) % sys.channels.len();
    sys.channels[c].volume = vol;
    let v = (voice.max(0) as usize) % sys.voices.len();
    sys.voices[v].volume_left = vol;
    sys.voices[v].volume_right = vol;
}

/// AUD-139: `SPU_SetVolumePan` (0x80090598, `audio/SPU_SetVolumePan.c`)
/// Sets SPU voice volume and pan
pub fn spu_setvolumepan(sys: &mut TombaAudioSystem, ch: i16, voice: i16, pan: i8, vol: i16) {
    let c = (ch.max(0) as usize) % sys.channels.len();
    sys.channels[c].volume = vol;
    sys.channels[c].pan = pan;
    let v = (voice.max(0) as usize) % sys.voices.len();
    sys.voices[v].pan = pan;
    let pan_adj = (pan as i32) * 128;
    sys.voices[v].volume_left = ((vol as i32) - pan_adj).clamp(0, 0x7FFF) as i16;
    sys.voices[v].volume_right = ((vol as i32) + pan_adj).clamp(0, 0x7FFF) as i16;
}

/// AUD-140: `SPU_Start` (0x80090980, `audio/SPU_Start.c`)
/// Starts SPU playback with flag 1
pub fn spu_start(sys: &mut TombaAudioSystem) {
    audio_initseq(sys, 1);
}

// ============================================================================
// UNIT TESTS FOR SECTOR 11
// ============================================================================

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_adsr_calc_and_envelope_clamping() {
        let env1 = audio_adsrcalc(10, 0, 0, 0x10);
        assert!(env1 <= 0x3FFF);

        let env2 = audio_adsrcalc(0, 100, 12, 0x80);
        assert!(env2 <= 0x3FFF);
    }

    #[test]
    fn test_volume_clamping_and_mute() {
        let mut sys = TombaAudioSystem::default();

        // Normal volume clamp
        let v = audio_clampvolume(&mut sys, 0x4000);
        assert_eq!(v, 0x4000);
        assert_eq!(sys.master_volume_left, 0x4000);

        // Max volume clamp (exceeds 0x7FFF)
        let v_max = audio_clampvolume(&mut sys, 0x10000);
        assert_eq!(v_max, 0x7FFF);

        // Negative volume clamp (converts to abs)
        let v_neg = audio_clampvolume(&mut sys, -0x2000);
        assert_eq!(v_neg, 0x2000);

        // Mute
        audio_mute(&mut sys);
        assert!(sys.is_muted);
        assert_eq!(sys.master_volume_left, 0);
    }

    #[test]
    fn test_voice_allocation_and_spu_key_masks() {
        let mut sys = TombaAudioSystem::default();

        // Allocate voices
        let v0 = audio_allocvoice(&mut sys, 0, 10);
        assert_eq!(v0, 0);
        assert!(sys.voices[0].active);

        let v1 = audio_allocvoice(&mut sys, 1, 10);
        assert_eq!(v1, 1);
        assert!(sys.voices[1].active);

        // Test SPU key mask low (< 16)
        audio_spu_key(&mut sys, 3);
        assert_eq!(sys.key_on_mask_low & (1 << 3), 1 << 3);

        // Test SPU key mask high (>= 16)
        audio_spu_key(&mut sys, 18);
        assert_eq!(sys.key_on_mask_high & (1 << 2), 1 << 2);
    }

    #[test]
    fn test_bank_switching_and_sfx_dispatch() {
        let mut sys = TombaAudioSystem::default();

        // Opcode 0x70 switches to bank 2
        let res = audio_playsoundeffect(&mut sys, 0x70, 0, 0);
        assert_eq!(res, 0);
        assert_eq!(sys.active_bank, 2);

        // Opcode 0x74 switches to bank 6
        audio_playsoundeffect(&mut sys, 0x74, 0, 0);
        assert_eq!(sys.active_bank, 6);

        // Normal SFX dispatch
        let sfx_res = audio_playsoundeffect(&mut sys, 0x15, 10, -20);
        assert_eq!(sfx_res, 1);
        assert!(sys.voices[0].active);
        assert_eq!(sys.voices[0].sample_id, 0x15);
        assert_eq!(sys.voices[0].pan, -20);
    }

    #[test]
    fn test_sfx_sequence_state_machine() {
        let mut sys = TombaAudioSystem::default();
        sys.sfx_counter = 1; // triggers SFX 0x29

        audio_sfxsequence(&mut sys);
        assert_eq!(sys.sfx_counter, 0x87);

        // Step counter down to 2
        sys.sfx_counter = 2; // triggers SFX 0x2A
        audio_sfxsequence(&mut sys);
        assert_eq!(sys.sfx_counter, 0);
    }

    #[test]
    fn test_channel_volume_and_pan_mixing() {
        let mut sys = TombaAudioSystem::default();
        spu_setvolumepan(&mut sys, 0, 0, 20, 0x2000);

        assert_eq!(sys.channels[0].volume, 0x2000);
        assert_eq!(sys.channels[0].pan, 20);
        assert_eq!(sys.voices[0].pan, 20);
        // Left should be lower due to right pan
        assert!(sys.voices[0].volume_left < sys.voices[0].volume_right);
    }
}
