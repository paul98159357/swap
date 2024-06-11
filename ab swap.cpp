#include<stdio.h>
#include<stdlib.h>
void swap (int *,int *);

int main(void)
{
	int a=5,b=20;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	
	system("pause");
	return 0;
}

void swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
