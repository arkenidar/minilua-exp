// gcc main.c -lm -o main && ./main # simple compilation with just GCC
// tcc -run main.c # for https://repo.or.cz/tinycc.git

#define LUA_IMPL
#include "minilua.h"

int main() {
  lua_State *L = luaL_newstate();
  if(L == NULL)
    return -1;
  luaL_openlibs(L);
  
  luaL_loadstring(L, "print(  1.234 )"); // 'hello world -- ' ..
  lua_call(L, 0, 0);

  luaL_loadstring(L, "print( 'hello world -- ' .. 1.234 )"); // 'hello world -- ' ..
  lua_call(L, 0, 0);

  luaL_loadstring(L, "print( 'hello world -- ' .. io.read('*line') )"); // 'hello world -- ' ..
  lua_call(L, 0, 0);

  lua_close(L);
  return 0;
}
