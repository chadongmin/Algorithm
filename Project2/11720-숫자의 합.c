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

/* char형 배열에는 scanf로 입력받으면 배열의 원소로 문자 하나씩 들어간다는 것을 꼭 기억하자.
   그리고 아스키코드에서 숫자는 48을 빼주면 실제 숫자와 같아지기 때문에 48을 빼준 뒤 연산*/