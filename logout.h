#ifndef _LOGOUT_H_
#define _LOGOUT_H_

#define LOG_OUTPUT1( msg )		_log_output( __func__ , __LINE__ , "%s" , msg )
#define LOG_OUTPUT2( fmt , msg )	_log_output( __func__ , __LINE__ , fmt , msg )

void _log_output( const char *namefunc , int line , char* fmt , char* str );

#endif /* _LOGOUT_H */
