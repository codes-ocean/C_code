#include<stdio.h>
main()
{
	int d,x[16];
	int i,tmp;
	for(i=0;i<16;i++)
	{
		x[i]=0;
	}
	printf("input decimal:");
	scanf("%d",&d);
	tmp=d;
	i=0;

	while(tmp!=0)
	{
		x[i]=tmp%2;
		tmp=tmp/2;
		i=i+1;
	}
	printf("(%d)10=(",d);
	for(i=15;i>-1;i--)
	{
		printf("%d",x[i]);
	}
	printf(" )\n");
}