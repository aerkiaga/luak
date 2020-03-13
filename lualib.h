/**
 ** $Id: lualib.h $
 ** Lua standard libraries
 ** See Copyright Notice in lua.h
 */


#ifndef lualib_h
#define lualib_h

#include "lua.h"


/** version suffix for environment variable names */
#define LUA_VERSUFFIX          "_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR


LUAMOD_API int (luaopen_base) (lua_State *L);


/** open all previous libraries */
LUALIB_API void (luaL_openlibs) (lua_State *L);



#if !defined(lua_assert)
#define lua_assert(x)	((void)0)
#endif


#endif
