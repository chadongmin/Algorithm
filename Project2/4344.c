#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int loop; //������ �� Ƚ���� �л��� ���� ����
	int num;//int stud[1000];
	int score; //�л��� ������ ��� ����

	

	scanf("%d", &loop); //��� ���� �� ���� �Է¹ޱ�

	for (int i = 0; i < loop; i++) { 
		int avg = 0; //��� ���� ���� ����
		int cnt = 0; //����� �Ѵ� �л����� ���� ��� ����
		float rate = 0;

		scanf("%d", &num); //�л� �� �Է�

		//int stud[num];
		int* stud;
		stud = (int*)malloc(sizeof(int) * 1000); //�������� �迭�� �����ϱ� ���� ���� �Ҵ�

		stud[num];

		for (int k = 0; k < num; k++) { //�Է��� �� ��ŭ �л��� ������ �Է¹޴� for��
			scanf("%d", &score);
			stud[k] = score;
			avg = avg + stud[k];
		}	
		avg = avg / num; //��� ���ϱ�
		//printf("%d", avg);
		for (int j = 0; j < num; j++) {
			if (stud[j] > avg)
				cnt++;
		}
		rate = (float)cnt / num; //����� ���� �л����� �� (����) 
		

		rate = rate * 100000; //�ݿø� ����
		
		rate = rate + 0.5;
		
		rate = floor(rate);
		
		rate = rate / 1000;
		printf("%.3f%%\n", rate);

	free(stud);
	}

	return 0;
}