# LuaK
A freestanding Lua interpreter, forked from the official Lua interpreter and
stripped down to remove all its dependencies. The end goal is to embed it into a
tiny C exokernel-like host and implement the rest of the kernel, including
drivers, multiprocessing, memory management and any startup code, as well as the
Lua standard library, entirely in Lua.

## Remaining dependencies

### ctype.h
Included by lbaselib.c, lctype.h, onelua.c:
 * `__ctype_b_loc` (ctype functions)
   - `isalnum`: **3** occurrences (lbaselib.c, lctype.h)
   - `isalpha`: **1** occurrence (lctype.h)
   - `isdigit`: **2** occurrences (lbaselib.c, lctype.h)
   - `isxdigit`: **1** occurrence (lctype.h)
   - `isspace`: **1** occurrence (lctype.h)
   - `isprint`: **1** occurrence (lctype.h)
 * `__ctype_toupper_loc` (`toupper`): **1** occurrence (lbaselib.c)
 * `tolower`: **1** occurrence (lctype.h) (doesn't appear in .dynsym)

### errno.h
Included by lauxlib.c, onelua.c:
 * `__errno_location` (`errno`): **2** occurrences (lauxlib.c)

### locale.h
Included by llex.c, lobject.c, onelua.c:
 * `localeconv`: **1** occurrence (luaconf.h)

### math.h
Included by lcode.c, lobject.c, ltable.c, lvm.c, onelua.c:
 * `fmod`: **1** occurrence (llimits.h)
 * `frexp`: **1** occurrence (ltable.c)
 * `pow`: **1** occurrence (llimits.h)

### setjmp.h
Included by ldo.c, onelua.c:
 * `_longjmp` (`longjmp`): **1** occurrence (ldo.c)
 * `_setjmp` (`setjmp`): **1** occurrence (ldo.c)

### signal.h
Included by lstate.h, lua.c, onelua.c:
 * `__sysv_signal` (`signal`): **3** occurrences (lua.c)

### stdio.h
Included by lauxlib.c, lauxlib.h, lbaselib.c, lgc.c, lobject.c, lua.c, lvm.c, onelua.c:
 * `_IO_getc` (`getc`): **4** occurrences (lauxlib.c)
 * `fclose`: **1** occurrence (lauxlib.c)
 * `feof`: **1** occurrence (lauxlib.c)
 * `ferror`: **1** occurrence (lauxlib.c)
 * `fflush`: **2** occurrences (lauxlib.h)
 * `fopen64` (`fopen`): : **1** occurrence (lauxlib.c)
 * `fputc`: **0** occurrences (??)
 * `fputs`: **0** occurrences (??)
 * `fprintf`: **1** occurrence (lauxlib.h)
 * `fread`: **1** occurrence (lauxlib.c)
 * `freopen64` (`freopen`): **1** occurrence (lauxlib.c)
 * `fwrite`: **1** occurrence (lauxlib.h)
 * `snprintf`: **1** occurrence (luaconf.h)
 * `stdin`: **1** occurrence (lauxlib.c)
 * `stdout`: **2** occurrences (lauxlib.h)
 * `stderr`: **2** occurrences (lauxlib.h)

### stdlib.h
Included by lauxlib.c, lbaselib.c, lcode.c, ldo.c, lobject.c, lua.c, lvm.c, onelua.c:
 * `abort`: **1** occurrence (ldo.c)
 * `free`: **1** occurrence (lauxlib.c)
 * `getenv`: **2** occurrences (lua.c)
 * `realloc`: **1** occurrence (lauxlib.c)
 * `strtod`: **2** occurrences (luaconf.h)

### string.h
Included by lapi.c, lauxlib.c, lbaselib.c, ldebug.c, ldo.c, lgc.c, llex.c, lobject.c, lparser.c, lstate.c, lstring.c, ltm.c, lua.c, lundump.c, lvm.c, lzio.c, onelua.c:
 * `memcmp`: **3** occurrences (lstring.c, lundump.c)
 * `memcpy`: **16** occurrences (lauxlib.c, lobject.c, lstate.c, string.c, lvm.c, lzio.c)
 * `strchr`: **8** occurrences (ldebug.c, ldo.c, lgc.c, lobject.c)
 * `strcmp`: **11** occurrences (lauxlib.c, ldebug.c, lparser.c, lstring.c, lua.c)
 * `strcoll`: **1** occurrence (lvm.c)
 * `strerror`: **3** occurrences (lauxlib.c)
 * `strlen`: **11** occurrences (lauxlib.c, lobject.c, string.c, lua.c, lundump.c, lvm.c)
 * `strpbrk`: **1** occurrence (lobject.c)
 * `strspn`: **3** occurrences (lbaselib.c, lobject.c)
 * `strstr`: **1** occurrence (lauxlib.c)

### time.h
Included by lstate.c, onelua.c:
 * `time`: **1** occurrence (lstate.c)
