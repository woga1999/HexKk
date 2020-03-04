/*  정사각형의 한 변의 길이 n을 입력받은 후 다음과 같이 숫자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오. 
 
    < 처리조건 > 
    숫자의 진행 순서는 처음에 왼쪽 위에서 아래쪽으로 n만큼 진행 한 후 
    바로 오른쪽 위에서 다시 아래쪽으로 진행하는 방법으로 정사각형이 될 때까지 반복한다.  */



#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n,&m);

    int arr[n][m];

    int num = 1;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[j][i] = num++;
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

         

    return 0;
}