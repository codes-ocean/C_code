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
		printf("   QQQQQ\n");
		printf("  /          \n");
		printf(" /  b b b b\n");
		printf("/   b b b b\n");
		printf("|  P P P P\n");
		printf("| QQ@@@ b\n");
		printf("_  QQj@ /\n");
		printf("  _@\n\n");
		return 1;
	}
	else if (pc == 2)
	{
		printf("@@u_ u_\n");
		printf("    b |  | |\n");
		printf("    b |  | |\n");
		printf("    b |  / /\n");
		printf("     __/ /\n");
		printf("       (())\n");
		printf("     ^  |  _\n");
		printf("    | [] | [] |\n");
		printf("    ___ | __^\n\n");
		return 2;
	}
	else
	{
		printf("       _     _\n");
		printf("     u  )  /  )  _\n");
		printf("      | b /@/ ^ )\n");
		printf("      | b/@/^ ^\n");
		printf("     _|  /@@^\n");
		printf("  (P R@@ PPP)\n");
		printf("   ___A|   (PP\n");
		printf("       _QQ _\n\n");
		return 3;
	}
	printf(" !  \n\n");
	
}

int InputFunc() {
	int player = 0;
	printf("Choose your hand... ‚®ƒD:1Aƒ`‚åƒL‚ñF‚QAƒp‚ŸF‚R\n");
	scanf("%d", &player);
	printf("your hand is...\n\n");
	if (player == 1)
	{
		printf("   QQQQQ\n");
		printf("  /          \n");
		printf(" /  b b b b\n");
		printf("/   b b b b\n");
		printf("|  P P P P\n");
		printf("| QQ@@@ b\n");
		printf("_  QQj@ /\n");
		printf("  _@\n\n");
		return 4;
	}
	else if (player == 2)
	{
		printf("@@u_ u_\n");
		printf("    b |  | |\n");
		printf("    b |  | |\n");
		printf("    b |  / /\n");
		printf("     __/ /\n");
		printf("       (())\n");
		printf("     ^  |  _\n");
		printf("    | [] | [] |\n");
		printf("    ___ | __^\n\n");
		return 5;
	}
	else if (player == 3)
	{
		printf("       _     _\n");
		printf("     u  )  /  )  _\n");
		printf("      | b /@/ ^ )\n");
		printf("      | b/@/^ ^\n");
		printf("     _|  /@@^\n");
		printf("  (P R@@ PPP)\n");
		printf("   ___A|   (PP\n");
		printf("       _QQ _\n\n");
		return 6;
	}
	else {
		printf("error:this number is not supported");			//“ü—Í‚ª123ˆÈŠO
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
		printf("@@@@ -- ‚ ‚¢‚± -- @@@@ \n\n");					//Œ‹‰Ê‚ğŒ©‚â‚·‚­‚·‚é
	}
	else if (player == 4)
	{
		if (pc == 2)
		{
			//i[1]++;			//i[1]=i[1]+1
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAcomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 5)
	{
		if (pc == 3)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAcomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 6)
	{
		if (pc == 1)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d‰ñ–Ú‚ÍAcomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}			 //@ÅI“I‚ÈŸ”s‚Ì•\¦i‰½Ÿ‰½”s‚ÆŠe‡‚ÌŒ‹‰Ê•\¦j‚ğ‚â‚é
	}

	/*if (a == MAX_LOOP && i[0] > i[1])
	{
		printf("‚æ‚Á‚Ä%dŸ%d”s%d•ª‚ÅƒRƒ“ƒsƒ…[ƒ^‚ÌŸ—˜", i[0], i[1],i[2]);
		
	}
	else if (a == MAX_LOOP && i[1] >i[0]) {
		printf("‚æ‚Á‚Ä%dŸ%d”s%d•ª‚Åplayer‚ÌŸ—˜", i[1], i[0],i[2]);
		
	}else if(a == MAX_LOOP && i[1] == i[0]){
		printf("‚æ‚Á‚Ä%dŸ%d”s%d•ª‚Åˆø‚«•ª‚¯", i[0], i[1],i[2]);
	}*/
	return 0;
}

Endjudge(int E)
{
	 
	 printf("1:‚µ‚È‚¢@0:‚·‚é");
	 scanf("%d", &E);

	 return E;
	

	
	
}

int main(void)
{
	int i[2], k,MAX_LOOP,pc=0,player=0,E=0;
	//i[1] = i[0] = 0;
	printf("‰½‰ñí‚µ‚Ü‚·‚©H");
	scanf("%d", &MAX_LOOP);

	 //ŠJnƒƒbƒZ[ƒW
	printf("šƒWƒƒƒ“ƒPƒ“ƒQ[ƒ€(%d‰ñü)š\n\n", MAX_LOOP);
	
	k = MAX_LOOP / 2 + 1;
		

	//while (i[0] < k && i[1] < k) {
		do {
			for (int count = 1;count <= MAX_LOOP;count++) {
				//player‚Ì“ü—Íˆ—
				//InputFunc();
				//PC‚Ì“ü—Í
				//InputPc();
				//player‚Ì“ü—Íˆ—
				ResultDisp(pc, player,MAX_LOOP);        
			}
			printf("‚à‚¤%d‰ñü‚â‚è‚Ü‚·‚©",MAX_LOOP);				//Ä’§í‚©‚Ç‚¤‚©
		} while (Endjudge(E) != 1);//I—¹”»’è
	//}
	system("pause");
	return 0;

}

