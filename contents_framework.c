#include "contents_framework.h"
#include "contents.h"
//#include "stdafx.h"
#include "logout.h"

/* �R�[���o�b�N�֐� */
void update(char *str){

  LOG_OUTPUT2("%s", str);

  return;

}


/* run_method */
void run(){

  /* �R�[���o�b�N�֐�(update)��ݒ� */
  contents_run(update);

  return;
}


