# Remaining dependencies

## ctype.h:
 * `__ctype_b_loc` (ctype functions)
   - `isalnum`: **3** occurrences
   - `isalpha`: **1** occurrence
   - `isdigit`: **2** occurrences
   - `isxdigit`: **1** occurrence
   - `isspace`: **1** occurrence
   - `isprint`: **1** occurrence
 * `__ctype_toupper_loc` (`toupper`): **1** occurrence
 * `tolower`: **1** occurrence (doesn't appear in .dynsym)

## errno.h:
 * `__errno_location` (`errno`): **2** occurrences

## locale.h:
 * `localeconv`: **1** occurrence

## math.h:
 * `fmod`: **1** occurrence
 * `frexp`: **1** occurrence
 * `pow`: **1** occurrence

## setjmp.h:
 * `_longjmp` (`longjmp`): **1** occurrence
 * `_setjmp` (`setjmp`): **1** occurrence

## signal.h:
 * `__sysv_signal` (`signal`): **3** occurrences

## stdio.h:
 * `_IO_getc` (`getc`): **4** occurrences
 * `fclose`: **1** occurrence
 * `feof`: **1** occurrence
 * `ferror`: **1** occurrence
 * `fflush`: **2** occurrences
 * `fopen64` (`fopen`): : **1** occurrence
 * `fputc`: **0** occurrences (??)
 * `fputs`: **0** occurrences (??)
 * `fprintf`: **1** occurrence
 * `fread`: **1** occurrence
 * `freopen64` (`freopen`): **1** occurrence
 * `fwrite`: **1** occurrence
 * `snprintf`: **1** occurrence
 * `stdin`: **1** occurrence
 * `stdout`: **2** occurrences
 * `stderr`: **2** occurrences

## stdlib.h:
 * `abort`: **1** occurrence
 * `free`: **1** occurrence
 * `getenv`: **2** occurrences
 * `realloc`: **1** occurrence
 * `strtod`: **2** occurrences

## string.h:
 * `memcmp`: **3** occurrences
 * `memcpy`: **16** occurrences
 * `strchr`: **8** occurrences
 * `strcmp`: **11** occurrences
 * `strcoll`: **1** occurrence
 * `strerror`: **3** occurrences
 * `strlen`: **11** occurrences
 * `strpbrk`: **1** occurrence
 * `strspn`: **3** occurrences
 * `strstr`: **1** occurrence

## time.h:
 * `time`: **1** occurrence
