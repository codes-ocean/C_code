#include<stdio.h>
int data[11], l[11], r[11];

void middle(int p)
{
	if (l[0]<l[p])
	{
		middle(l[p]);
	}
	printf("%d", data[p]);
	if (r[0]<r[p])
	{
		middle(r[p]);
	}
}
main()
{
	int i, j, p;
	for (i = 0;i < 11; i++)
	{
		data[i] = l[i] = r[i] = -1;
	}
	for (i = 1;i < 11;i++)
	{
		printf("\ninput data[%d]:", i);
		scanf("%d", &data[i]);
		if (i == 1)
		{
			l[0] = 1;
			continue;
		}
		p = l[0];
		//printf("2:%d\n", p);
		while (1)	//�������[�v
		{
			if (data[i] <= data[p])		//x��data[p] && x<data[p]
			{
				if (l[p] == -1)			//�q����
				{
					l[p] = i;		//tuika
					break;				//nuke
				}
				else {
					p = l[p];			//�X�V
					//printf("3:%d\n", p);
					continue;
				}
			}
			if (data[p] < data[i])		//x>data[p]
			{
				if (r[p] == -1)			//�q����
				{
					r[p] = i;		//tuika
					break;				//nuke
				}
				else {
					p = r[p];			//�X�V
					//printf("4:%d\n", p);
					continue;
				}
			}
		}
		printf("  No.");
		for (j = 0;j < 11;j++)
		{
			printf("%4d", j);
		}
		printf("\ndata:");
		for (j = 0;j < 11;j++)
		{
			printf("%4d", data[j]);
		}
		printf("\n   l:");
		for (j = 0;j < 11;j++)
		{
			printf("%4d", l[j]);
		}
		printf("\n   r:");
		for (j = 0;j < 11;j++)
		{
			printf("%4d", r[j]);
		}
	}
	printf("\n");
	middle(l[0]);
}