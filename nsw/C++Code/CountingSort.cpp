/*
	��� ����: On �� �ӵ��� ���´�.
	- n���� ���ڸ� �����ϴµ� �ɸ��� �ð��� O(n)
	- �� ���ڰ� ���� Ƚ���� ���µ� O(n)
	- �ٽ� ���ڸ� ���ĵ� ����Ʈ�� ä���ִµ� O(n)
��ó: https://www.crocus.co.kr/470 [Crocus]
	����, ������ ���� �� �ִ� �ڷῡ���� ��� ����.
	���������� �迭 2�� + ������ �迭 1���� �޸𸮸� ���̾��� �������� �迭�̶� ������.
*/
#include "Sort.h"
const int dataRange = 5;	//��¿������ ��������ȭ ��..

//for���� 4���ϱ� O(4n) �ε� ��� ǥ����� �����κ��� ������ ǥ���Ѵ�.
void counterDebug(int *counter, int counterSize) {
	for (int i = 0; i < counterSize; ++i) {
		std::cout << counter[i] << " ";
	}
	std::cout << "\n";
}
void countingSort(int *data, int size) {
	int sorted[MAX_ARRAY];
	/*https://namwhis.tistory.com/entry/C-%EB%B0%B0%EC%97%B4-%EC%B4%88%EA%B8%B0%ED%99%94-stdfill-stdfilln-%EC%A0%95%EB%A6%AC*/
	int counter[dataRange + 1] = { 0, };
	for (int i = 0; i < size; ++i) {
		++counter[data[i]];
	}//endfor
	//������ �迭ȭ
//	counterDebug(counter, dataRange + 1);
	for (int i = 0; i < dataRange; ++i) {
		counter[i + 1] += counter[i];
	}//endfor ������ �迭ȭ
	counterDebug(counter, dataRange + 1);
	for (int i = MAX_ARRAY - 1; i >= 0; --i) {
		sorted[counter[data[i]] - 1] = data[i];
		--counter[data[i]];
	}//endfor
	//���ĺκ� ���� �����Ѱ�https://sexycoder.tistory.com/31
//	dataShow(sorted);	
	for (int i = 0; i < size; ++i) {
		data[i] = sorted[i];
	}	//�迭 ��ü�� ��ȯ�Ϸ��� �� �迭�� �����ͷ� �����߾��...
}



int main(void)
{
	randomInputData(array, 1, dataRange);
	dataShow(array);
	countingSort(array, MAX_ARRAY);
	dataShow(array);
}