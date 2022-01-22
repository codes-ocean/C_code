#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int InputPc()
{
	int pc=0;
	printf("computer's hand is:\n\n");

	srand(time(NULL));
	pc = rand() % 3 + 1;

	
	if (pc == 1)
	{
		printf("   ＿＿＿＿＿\n");
		printf("  /          \n");
		printf(" /  ｜ ｜ ｜ ｜\n");
		printf("/   ｜ ｜ ｜ ｜\n");
		printf("|  ￣ ￣ ￣ ￣\n");
		printf("| ＿＿　　　 ｜\n");
		printf("＼  ＿＿）　 /\n");
		printf("  ＼　\n\n");
		return 1;
	}
	else if (pc == 2)
	{
		printf("　　「＼ 「＼\n");
		printf("    ｜ |  | |\n");
		printf("    ｜ |  | |\n");
		printf("    ｜ |  / /\n");
		printf("     ＼＼/ /\n");
		printf("       (())\n");
		printf("     ／  |  ＼\n");
		printf("    | [] | [] |\n");
		printf("    ＼__ | __／\n\n");
		return 2;
	}
	else
	{
		printf("       _     _\n");
		printf("     「  )  /  )  _\n");
		printf("      | ｜ /　/ ／ )\n");
		printf("      | ｜/　/／ ／\n");
		printf("     _|  /　　／\n");
		printf("  (￣ ヽ　　 ￣￣￣)\n");
		printf("   ＼__、|   (￣￣\n");
		printf("       ＼＿＿ ＼\n\n");
		return 3;
	}
	printf(" !  \n\n");
	
}

int InputFunc() {
	int player = 0;
	printf("Choose your hand... ぐゥ:1、チょキん：２、パぁ：３\n");
	scanf("%d", &player);
	printf("your hand is...\n\n");
	if (player == 1)
	{
		printf("   ＿＿＿＿＿\n");
		printf("  /          \n");
		printf(" /  ｜ ｜ ｜ ｜\n");
		printf("/   ｜ ｜ ｜ ｜\n");
		printf("|  ￣ ￣ ￣ ￣\n");
		printf("| ＿＿　　　 ｜\n");
		printf("＼  ＿＿）　 /\n");
		printf("  ＼　\n\n");
		return 4;
	}
	else if (player == 2)
	{
		printf("　　「＼ 「＼\n");
		printf("    ｜ |  | |\n");
		printf("    ｜ |  | |\n");
		printf("    ｜ |  / /\n");
		printf("     ＼＼/ /\n");
		printf("       (())\n");
		printf("     ／  |  ＼\n");
		printf("    | [] | [] |\n");
		printf("    ＼__ | __／\n\n");
		return 5;
	}
	else if (player == 3)
	{
		printf("       _     _\n");
		printf("     「  )  /  )  _\n");
		printf("      | ｜ /　/ ／ )\n");
		printf("      | ｜/　/／ ／\n");
		printf("     _|  /　　／\n");
		printf("  (￣ ヽ　　 ￣￣￣)\n");
		printf("   ＼__、|   (￣￣\n");
		printf("       ＼＿＿ ＼\n\n");
		return 6;
	}
	else {
		printf("error:this number is not supported");			//入力が123以外
	}
	printf(" !  \n\n");
	return 0;
	
}

int ResultDisp(int pc, int player,int MAX_LOOP)
{
	player = InputFunc(player);
	pc = InputPc(pc);
	//int i[3],a;
		//i[0] = i[1] = i[2] = 0;
	
	
	if (pc == player-3)
	{
		//i[2]++;
		//a = i[0] + i[1] + i[2];
		printf("@@@@ -- あいこ -- @@@@ \n\n");					//結果を見やすくする
	}
	else if (player == 4)
	{
		if (pc == 2)
		{
			//i[1]++;			//i[1]=i[1]+1
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、player's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、computer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 5)
	{
		if (pc == 3)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、player's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、computer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 6)
	{
		if (pc == 1)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、player's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d回目は、computer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}			 //　最終的な勝敗の表示（何勝何敗と各試合の結果表示）をやる
	}

	/*if (a == MAX_LOOP && i[0] > i[1])
	{
		printf("よって%d勝%d敗%d分でコンピュータの勝利", i[0], i[1],i[2]);
		
	}
	else if (a == MAX_LOOP && i[1] >i[0]) {
		printf("よって%d勝%d敗%d分でplayerの勝利", i[1], i[0],i[2]);
		
	}else if(a == MAX_LOOP && i[1] == i[0]){
		printf("よって%d勝%d敗%d分で引き分け", i[0], i[1],i[2]);
	}*/
	return 0;
}

Endjudge(int E)
{
	 
	 printf("1:しない　0:する");
	 scanf("%d", &E);

	 return E;
	

	
	
}

int main(void)
{
	int i[2], k,MAX_LOOP,pc=0,player=0,E=0;
	//i[1] = i[0] = 0;
	printf("何回戦しますか？");
	scanf("%d", &MAX_LOOP);

	 //開始メッセージ
	printf("★ジャンケンゲーム(%d回線)★\n\n", MAX_LOOP);
	
	k = MAX_LOOP / 2 + 1;
		

	//while (i[0] < k && i[1] < k) {
		do {
			for (int count = 1;count <= MAX_LOOP;count++) {
				//playerの入力処理
				//InputFunc();
				//PCの入力
				//InputPc();
				//playerの入力処理
				ResultDisp(pc, player,MAX_LOOP);        
			}
			printf("もう%d回線やりますか",MAX_LOOP);				//再挑戦かどうか
		} while (Endjudge(E) != 1);//終了判定
	//}
	system("pause");
	return 0;

}

