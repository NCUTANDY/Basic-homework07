#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,num1,final=0;
	printf("�п�J�Ʀr�W��:");
	scanf("%d",&num1); 
	for(num=1;num<=num1;num++)
	final+=num;
	printf("1+2+3....+n���`�M=%d\n",final);
	system("pause");
	return 0;
}
