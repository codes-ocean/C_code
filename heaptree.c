/*heap tree*/
#include<stdio.h>

main()
{
	int heap[11];
	int x, tmp, i, j;
	for (i = 0;i < 11;i = i + 1)
	{
		heap[i] = -1;
	}
	for (i = 1;i < 11;i++)
	{
		
		printf("input data : "); //ƒf[ƒ^‚Ì“ü—Í
		scanf("%d", &heap[i]);
		x = i;
		while (heap[x] > heap[x / 2] && x > 1)
		{
			//if (x != 3) {
				//for (j = 1;j < 11;j++) {
					

					tmp = heap[x];
					heap[x] = heap[x / 2];
					heap[x / 2] = tmp;
					x = x / 2;
					
				//}
			//}
		}

		for (j = 1;j < 11; j++) { printf("%d", heap[j]); printf("\n"); }
		//Œ‹‰Ê•\Ž¦
		printf("                 %d				\n", heap[1]);
		printf("              ^    _\n");
		printf("            ^        _\n");
		printf("           %d            %d\n", heap[2], heap[3]);
		printf("        ^ _          ^ _\n");
		printf("       %d   @%d        %d    %d\n", heap[4], heap[5], heap[6], heap[7]);
		printf("     ^_ @^@\n");
		printf("    %d   %d  %d    \n", heap[8], heap[9], heap[10]);
	}
	
}