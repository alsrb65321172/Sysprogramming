#include <stdio.h>
#include "copy.h"
/* copy: from을 to 에 복사 ; to 가 충분히 크다고 가정*/
   void copy(char: from[], char to[])
   {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
   }
#define MAXLINE 100
void copy(char from[], char to[]);