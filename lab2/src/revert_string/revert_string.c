#include "revert_string.h"

void RevertString(char *str)
{
	int i=0;
	char c;
	while(str[i]!='\0')
	{
	    i++;
	}
	i--; 
	for(int j=0;j<i;j++)
	{
	    c=str[j];
	    str[j]=str[i];
	    str[i]=c;
	    i--;
	}// your code here
}

