#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num, money;
	int cnt = 0;
	scanf("%d %d", &num,&money); //�׽�Ʈ ���̽��� ������ ��ġ ���� �Է¹޴´�.
	
	//printf("%d\n%d", num,  money);
	int* arr;

	arr = (int*)malloc(sizeof(int) * num); // �׽�Ʈ ���̽��� ������ŭ �����Ҵ� ��, ������ ���� �Է¹޴´�.

	for (int i = 0; i < num ;i++) {

		scanf("%d", &arr[i]);             //������ ���� ������������ �Է�

	}
	for (int i = num - 1; i  > -1; i--) {
		
		if (money >= arr[i]) {           //��ġ ���� ���� ���� ����(ū ������)���� ���Ͽ�, ��ġ ���� ���� ������ ũ�� ���� ����

			while (money >= arr[i]) {

				money = money - arr[i]; //��ġ ���� ���������� �۾��������� ���ش�.

				//printf("%d\n", money);

				cnt++;                  //ī��Ʈ
				
			}
		}
	}
	printf("%d", cnt);					//���



	return 0;
}