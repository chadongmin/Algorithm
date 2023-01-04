#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num, money;
	int cnt = 0;
	scanf("%d %d", &num,&money); //테스트 케이스의 개수와 가치 값을 입력받는다.
	
	//printf("%d\n%d", num,  money);
	int* arr;

	arr = (int*)malloc(sizeof(int) * num); // 테스트 케이스의 개수만큼 동적할당 후, 동전의 값을 입력받는다.

	for (int i = 0; i < num ;i++) {

		scanf("%d", &arr[i]);             //동전의 값을 오름차순으로 입력

	}
	for (int i = num - 1; i  > -1; i--) {
		
		if (money >= arr[i]) {           //가치 값을 동전 값의 역순(큰 값부터)으로 비교하여, 가치 값이 동전 값보다 크면 루프 진입

			while (money >= arr[i]) {

				money = money - arr[i]; //가치 값이 동전값보다 작아질때까지 빼준다.

				//printf("%d\n", money);

				cnt++;                  //카운트
				
			}
		}
	}
	printf("%d", cnt);					//출력



	return 0;
}