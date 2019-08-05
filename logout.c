#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "logout.h"

void _log_output( const char *namefunc , int line , char* fmt , char* str ){

  int len ;
  char* fmtptr ;
  
  len = 1 + strlen(namefunc) + 1 + 100 + strlen(fmt) + 2 ; /* '[' namefunc+de ']' decimal100 fmt '\n' */
  
  fmtptr = (char*)malloc(len + 1);

  if( fmtptr == NULL ){
    printf("%s: %s\n", "Can not allocate memory in " , __func__);
    exit(-1);
  }else{
    strcpy(fmtptr , "[%3d][%s]");
    strcat(fmtptr , fmt);
    strcat(fmtptr , "\n");

    printf(fmtptr , line, namefunc, str);
  }

  free(fmtptr);
  return;
}
