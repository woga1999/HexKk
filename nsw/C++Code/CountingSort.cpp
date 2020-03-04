/*
	계수 정렬: On 의 속도가 나온다.
	- n개의 숫자를 정렬하는데 걸리는 시간은 O(n)
	- 각 숫자가 나온 횟수를 세는데 O(n)
	- 다시 숫자를 정렬된 리스트에 채워넣는데 O(n)
출처: https://www.crocus.co.kr/470 [Crocus]

	정수, 일정한 범위 가 있는 자료에서만 사용 가능.
*/
#include "Sort.h"

countingSort(int *data, int MAX_ARRAY, int range) {
	std::cout << "사전 준비 완료\n";
}

int main(void)
{
	int datarange = 5;
	randomInputData(array, 1, datarange);
	dataShow(array);
	countingSort(array,MAX_ARRAY, datarange);
	dataShow(array);
}