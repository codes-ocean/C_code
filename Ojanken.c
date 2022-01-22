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
		printf("   �Q�Q�Q�Q�Q\n");
		printf("  /          \n");
		printf(" /  �b �b �b �b\n");
		printf("/   �b �b �b �b\n");
		printf("|  �P �P �P �P\n");
		printf("| �Q�Q�@�@�@ �b\n");
		printf("�_  �Q�Q�j�@ /\n");
		printf("  �_�@\n\n");
		return 1;
	}
	else if (pc == 2)
	{
		printf("�@�@�u�_ �u�_\n");
		printf("    �b |  | |\n");
		printf("    �b |  | |\n");
		printf("    �b |  / /\n");
		printf("     �_�_/ /\n");
		printf("       (())\n");
		printf("     �^  |  �_\n");
		printf("    | [] | [] |\n");
		printf("    �___ | __�^\n\n");
		return 2;
	}
	else
	{
		printf("       _     _\n");
		printf("     �u  )  /  )  _\n");
		printf("      | �b /�@/ �^ )\n");
		printf("      | �b/�@/�^ �^\n");
		printf("     _|  /�@�@�^\n");
		printf("  (�P �R�@�@ �P�P�P)\n");
		printf("   �___�A|   (�P�P\n");
		printf("       �_�Q�Q �_\n\n");
		return 3;
	}
	printf(" !  \n\n");
	
}

int InputFunc() {
	int player = 0;
	printf("Choose your hand... ���D:1�A�`��L��F�Q�A�p���F�R\n");
	scanf("%d", &player);
	printf("your hand is...\n\n");
	if (player == 1)
	{
		printf("   �Q�Q�Q�Q�Q\n");
		printf("  /          \n");
		printf(" /  �b �b �b �b\n");
		printf("/   �b �b �b �b\n");
		printf("|  �P �P �P �P\n");
		printf("| �Q�Q�@�@�@ �b\n");
		printf("�_  �Q�Q�j�@ /\n");
		printf("  �_�@\n\n");
		return 4;
	}
	else if (player == 2)
	{
		printf("�@�@�u�_ �u�_\n");
		printf("    �b |  | |\n");
		printf("    �b |  | |\n");
		printf("    �b |  / /\n");
		printf("     �_�_/ /\n");
		printf("       (())\n");
		printf("     �^  |  �_\n");
		printf("    | [] | [] |\n");
		printf("    �___ | __�^\n\n");
		return 5;
	}
	else if (player == 3)
	{
		printf("       _     _\n");
		printf("     �u  )  /  )  _\n");
		printf("      | �b /�@/ �^ )\n");
		printf("      | �b/�@/�^ �^\n");
		printf("     _|  /�@�@�^\n");
		printf("  (�P �R�@�@ �P�P�P)\n");
		printf("   �___�A|   (�P�P\n");
		printf("       �_�Q�Q �_\n\n");
		return 6;
	}
	else {
		printf("error:this number is not supported");			//���͂�123�ȊO
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
		printf("@@@@ -- ������ -- @@@@ \n\n");					//���ʂ����₷������
	}
	else if (player == 4)
	{
		if (pc == 2)
		{
			//i[1]++;			//i[1]=i[1]+1
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Aplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Acomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 5)
	{
		if (pc == 3)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Aplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Acomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}
	}
	else if (player == 6)
	{
		if (pc == 1)
		{
			//i[1]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Aplayer's win \n\n", a);
			
			printf("**** -- player's win -- ****\n\n");
		}
		else {
			//i[0]++;
			//a = i[1] + i[0] + i[2];
			//printf("%d��ڂ́Acomputer's win \n\n", a);
			
			printf("#### -- pc's win -- ####\n\n");
		}			 //�@�ŏI�I�ȏ��s�̕\���i�������s�Ɗe�����̌��ʕ\���j�����
	}

	/*if (a == MAX_LOOP && i[0] > i[1])
	{
		printf("�����%d��%d�s%d���ŃR���s���[�^�̏���", i[0], i[1],i[2]);
		
	}
	else if (a == MAX_LOOP && i[1] >i[0]) {
		printf("�����%d��%d�s%d����player�̏���", i[1], i[0],i[2]);
		
	}else if(a == MAX_LOOP && i[1] == i[0]){
		printf("�����%d��%d�s%d���ň�������", i[0], i[1],i[2]);
	}*/
	return 0;
}

Endjudge(int E)
{
	 
	 printf("1:���Ȃ��@0:����");
	 scanf("%d", &E);

	 return E;
	

	
	
}

int main(void)
{
	int i[2], k,MAX_LOOP,pc=0,player=0,E=0;
	//i[1] = i[0] = 0;
	printf("����킵�܂����H");
	scanf("%d", &MAX_LOOP);

	 //�J�n���b�Z�[�W
	printf("���W�����P���Q�[��(%d���)��\n\n", MAX_LOOP);
	
	k = MAX_LOOP / 2 + 1;
		

	//while (i[0] < k && i[1] < k) {
		do {
			for (int count = 1;count <= MAX_LOOP;count++) {
				//player�̓��͏���
				//InputFunc();
				//PC�̓���
				//InputPc();
				//player�̓��͏���
				ResultDisp(pc, player,MAX_LOOP);        
			}
			printf("����%d������܂���",MAX_LOOP);				//�Ē��킩�ǂ���
		} while (Endjudge(E) != 1);//�I������
	//}
	system("pause");
	return 0;

}

