 #include<stdio.h>
int main()
{	int a,b;
	int c=0;
	int t;
	scanf("%d",&t);
	do{
		b=t%10;
		c=c*10+b;
		t=t/10;
	}
	while(t>0);
	printf("c=%d\n",c);
	do
	{
		a=c%10;
		printf("%d ",a);
		c=c/10;
	
	}
	while(c >0);
	printf("\n");


	return 0 ;

}
