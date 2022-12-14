/* ------------------------------------------------------------------------ */
/*  ML - 01/2004: changed licence to GPL                                    */
/* ------------------------------------------------------------------------ */  

#ifndef __uac_sys_h
#define __uac_sys_h


#include "declare.h"

#define upcase(ch) ((in(ch,'a','z'))?(ch-32):(ch))

void memset16(USHORT * dest, SHORT val, INT len);
INT  cancel(void);
INT  wrask(CHAR * s);
void beep(void);
void set_handler(void);


#if defined(UNIX)
  #define getch() getchar()
#endif /* UNIX */

#endif
