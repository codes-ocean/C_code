/*heap tree*/
/*ヒープ木に対し、追加の操作を10回行うプログラム。
一つ操作するたびにヒープ木配列の中身を木の形で表示する。
アルゴリズム
step1: i←0
step2: i←i+1
step3: もし i>n なら終了
step4: heap[i]に手入力
step5: x←i
step6: もし heap[x]>heap[x/2]なら　交換　＆　x←x/2 step6へ
step7: そうでないなら　step2へ*/

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
		
		printf("input data : "); //データの入力
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
		//結果表示
		printf("                 %d				\n", heap[1]);
		printf("              ／    ＼\n");
		printf("            ／        ＼\n");
		printf("           %d            %d\n", heap[2], heap[3]);
		printf("        ／ ＼          ／ ＼\n");
		printf("       %d   　%d        %d    %d\n", heap[4], heap[5], heap[6], heap[7]);
		printf("     ／＼ 　／　\n");
		printf("    %d   %d  %d    \n", heap[8], heap[9], heap[10]);
	}
	
}
