#include "contents_framework.h"
#include "contents.h"
//#include "stdafx.h"
#include "logout.h"

/* コールバック関数 */
void update(char *str){

  LOG_OUTPUT2("%s", str);

  return;

}


/* run_method */
void run(){

  /* コールバック関数(update)を設定 */
  contents_run(update);

  return;
}


