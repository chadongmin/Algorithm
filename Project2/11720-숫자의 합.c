#include<stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    char arr[100] = { 0 };

    scanf("%s", &arr);
    for (int i = 0; i < n; i++) {
        
        sum = sum + (arr[i] - 48);
        
    }
    printf("%d", sum);
}

/* char�� �迭���� scanf�� �Է¹����� �迭�� ���ҷ� ���� �ϳ��� ���ٴ� ���� �� �������.
   �׸��� �ƽ�Ű�ڵ忡�� ���ڴ� 48�� ���ָ� ���� ���ڿ� �������� ������ 48�� ���� �� ����*/