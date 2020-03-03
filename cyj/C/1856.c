/*  사각형의 높이 n과 너비 m을 입력받은 후 
    사각형 내부에 지그재그 형태로 1부터 n*m번까지 숫자가 차례대로 출력되는 프로그램을 작성하시오. 
 
    < 처리조건 > 
    숫자의 진행 순서는 처음에 왼쪽에서 오른쪽으로 너비 m만큼 진행 한 후 방향을 바꾸어서 이를 반복한다.  */



#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n,&m);

    int arr[n][m];

    int num = 1;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            for(int j=0;j<m;j++){
                arr[i][j] = num;
                printf("%d ",arr[i][j]);
                num++;
            }
            printf("\n");
        }else{
            for(int j=m-1;j>=0;j--){
                arr[i][j] = num;
                num++;
            }
            for(int k=0;k<m;k++){
                printf("%d ",arr[i][k]);
            }
            printf("\n");
        }
    }

    return 0;
}