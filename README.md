# 111
#include<stdio.h>

int number(int begin,int end);
int main()
{
	 number(1,10);
	 number(1,100);
	return 0;
}

int number(int begin,int end)
{
	int sum=0;
	int a ;
	for(a=begin;a<=end;a++){
		sum+=a;
	}
	printf("%d\n",sum);
	return 0;
}
