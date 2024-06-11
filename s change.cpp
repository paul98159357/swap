#include<stdio.h>
#include<stdlib.h>

void swap(char **str1,char **str2)
{
	char *temp = NULL;
	
    temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int main(void)
{
	char *str1="hallo";
	char *str2="taiwan";
	
	printf("%s %s\n",str1,str2);
	
	swap(&str1, &str2);
	
	printf("%s %s\n",str1,str2);
	

	return 0;
 } 
