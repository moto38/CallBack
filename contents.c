#include "contents.h"
//#include "logout.h"

/* callback wrapper method */
void call_back_wrapper(p_func ptr, char* s){

  ptr(s);

}


/* contens_run method */
void contents_run( p_func func_ptr ){

  p_func contents_ptr;

  /* 関数ポインタにコールバック対象の関数を設定 */
  contents_ptr = func_ptr;

  /* コールバック関数をコールする */
  call_back_wrapper(contents_ptr , "Update by contents.");


  return;
}

