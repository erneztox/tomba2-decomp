# Hungarian Notation Reference (canonical table)

This is the **single source of truth** for Hungarian prefix → type
mappings. Every other prompt that mentions Hungarian conventions
should reference this file rather than restating the table — that's
how we keep the validator (`NamingConventions.checkGlobalNameQuality`,
`NamingConventions.validateHungarianPrefix`), the Python mirror
(`fun_doc.py:_HUNGARIAN_PREFIX_TO_TYPES`), and these prompts in sync.

## Scope

- **Locals / parameters** — bare prefix + descriptor, no outer marker.
  Examples: `dwActiveQuestState`, `pMainUnit`, `szPlayerName`.
- **Globals** — `g_` outer marker, then prefix + descriptor.
  Examples: `g_dwActiveQuestState`, `g_pMainUnit`, `g_szPlayerName`.
- **Struct fields** — same prefix table as locals; no outer marker.

The validator strips `g_` before checking the Hungarian portion, so the
rules below apply identically to all three scopes after marker removal.

## Prefix → type table

| Prefix | Allowed types | Example name |
|---|---|---|
| `p` | any pointer (`void *`, struct *, function *) | `g_pMainUnit`, `pBuffer` |
| `pp` | pointer-to-pointer (`Type **`) | `g_ppActorList`, `ppHandle` |
| `pfn` | function pointer | `g_pfnDamageHandler`, `pfnCallback` |
| `dw` | `uint`, `dword`, `unsigned long`, `ulong`, `DWORD`, `undefined4` | `g_dwActiveQuestState`, `dwFlags` |
| `n` | `int`, `short`, `long`, `signed int`, `undefined2`, `undefined4` | `g_nPlayerCount`, `nIndex` |
| `i` | `int`, `signed int` | `g_iLevel`, `iCount` |
| `b` | `byte`, `bool`, `uchar`, `undefined1` | `g_bIsActive`, `bFlag` |
| `by` | `byte`, `uchar` | `g_byCounter`, `byCount` |
| `f` | `bool`, `byte`, `BOOL` (flag style) | `g_fInitialized`, `fEnabled` |
| `w` | `ushort`, `word`, `WORD`, `wchar_t`, `undefined2` | `g_wPort`, `wValue` |
| `sz` | `char *`, `char[N]`, `string` (null-terminated narrow) | `g_szConfigPath`, `szName` |
| `lpsz` | `char *`, `char[N]`, `string` (long-pointer narrow) | `g_lpszWindowTitle`, `lpszPath` |
| `lpcsz` | `const char *` (long-pointer const narrow) | `g_lpcszSchema`, `lpcszKey` |
| `wsz` | `wchar_t *`, `wchar_t[N]`, `wchar16 *` | `g_wszUserName`, `wszPath` |
| `ll` | `longlong`, `long long`, `int64_t`, `__int64`, `undefined8` | `g_llFileSize`, `llOffset` |
| `qw` | `ulonglong`, `unsigned long long`, `uint64_t`, `undefined8` | `g_qwTimestamp`, `qwHandle` |
| `fl` | `float`, `undefined4` | `g_flZoomFactor`, `flScale` |
| `d` | `double`, `undefined8` | `g_dHealthRatio`, `dRatio` |
| `c` | `char`, `signed char` | `g_cDelimiter`, `cChar` |
| `ch` | `char`, `signed char` | `g_chSep`, `chTerm` |
| `l` | `long`, `signed long`, `int` | `g_lOffset`, `lCount` |
| `h` | `HANDLE`, `void *`, `uint`, `dword` (Win32 handle convention) | `g_hWindow`, `hMutex` |
| `ab` | byte array | `g_abPalette`, `abBytes` |
| `aw` | ushort/word array | `g_awTileMap`, `awValues` |
| `ad` | uint/dword array | `g_adRecordOffsets`, `adIndices` |

## Rules the validator enforces

1. **`g_` prefix is mandatory for globals** (locals/params don't get it).
   Failing that returns issue `missing_g_prefix`.
2. **Hungarian prefix must match the type.** A `dw`-prefixed name
   typed as `int *` returns `prefix_type_mismatch`. The match is
   case-insensitive on the type lookup but the prefix must be lowercase.
3. **Descriptor ≥ 2 chars** in PascalCase, after the prefix.
   `g_dwS` returns `short_descriptor`. `g_dwState` passes.
4. **Auto-generated names are exempt** (`DAT_*`, `PTR_DAT_*`, `LAB_*`,
   `s_*`). They get the unrenamed-globals deduction at the scoring
   layer instead of being rejected at the rename layer.
5. **OS-canonical names should not be renamed.** `ExceptionList`,
   `StackBase`, `SubSystemTib`, `KUSER_*`, anything in the `0xffdf****`
   or `0x7ffe****` ranges (TIB/PEB on x86 Windows). The Microsoft
   names are correct under their own convention; renaming them to
   `g_*` form is a regression.

## Common patterns worth memorizing

- **Pointer to a struct**: `g_p<TypeName>` — `g_pUnitTable`,
  `g_pAreaInfo`. Don't repeat the type word (`g_pUnitTablePtr` is wrong).
- **Counter**: `g_dw<Thing>Count` (unsigned) or `g_n<Thing>Count`
  (signed) — `g_dwUnitCount`, `g_nActiveQuests`.
- **Flag/state**: `g_f<State>` (bool flag) or `g_b<State>` (byte/bool) —
  `g_fGameInProgress`, `g_bDebugEnabled`.
- **String**: `g_sz<Purpose>` for narrow, `g_wsz<Purpose>` for wide —
  `g_szLogFile`, `g_wszWindowTitle`.
- **Function pointer**: `g_pfn<Name>` — `g_pfnDamageHandler`.
- **Resource handle**: `g_h<Type>` — `g_hWindow`, `g_hMutex`.
- **Placeholder for unknown** (CLAUDE.md "underclaim with placeholder"
  pattern): `g_dwField<offset>`, `g_pUnk<offset>`, `g_nValue<offset>` —
  these are explicitly accepted by the validator.

## Anti-patterns the validator still catches

- `g_pVoidPtr` — descriptor restates what the prefix already says.
  Prefer the *purpose*: `g_pUnknownTarget`, `g_pInputBuffer`.
- Trailing type tags: `g_dwActiveQuestStateDword` — redundant.
- Mixed-case prefix: `g_DwActiveQuestState` — prefix is always lowercase.
- Generic descriptors: `g_dwData`, `g_pBuffer` — pass the validator's
  character-count check but tell the reader nothing. Use the address's
  xref purpose (`g_dwLastErrorCode`, `g_pInputBuffer`).
