#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int loop; //루프를 돌 횟수와 학생수 변수 선언
	int num;//int stud[1000];
	int score; //학생의 점수를 담는 변수

	

	scanf("%d", &loop); //몇번 루프 돌 건지 입력받기

	for (int i = 0; i < loop; i++) { 
		int avg = 0; //평균 값을 담을 변수
		int cnt = 0; //평균이 넘는 학생들의 수를 담는 변수
		float rate = 0;

		scanf("%d", &num); //학생 수 입력

		//int stud[num];
		int* stud;
		stud = (int*)malloc(sizeof(int) * 1000); //가변길이 배열을 생성하기 위한 동적 할당

		stud[num];

		for (int k = 0; k < num; k++) { //입력한 수 만큼 학생의 점수를 입력받는 for문
			scanf("%d", &score);
			stud[k] = score;
			avg = avg + stud[k];
		}	
		avg = avg / num; //평균 구하기
		//printf("%d", avg);
		for (int j = 0; j < num; j++) {
			if (stud[j] > avg)
				cnt++;
		}
		rate = (float)cnt / num; //평균을 넘은 학생들의 수 (비율) 
		

		rate = rate * 100000; //반올림 구현
		
		rate = rate + 0.5;
		
		rate = floor(rate);
		
		rate = rate / 1000;
		printf("%.3f%%\n", rate);

	free(stud);
	}

	return 0;
}