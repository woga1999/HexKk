#include "Sort.h"

int sortedArray[MAX_ARRAY] = { 0, };


void Merge(int* data, int start, int middle, int end) {
	int i = start, j = middle + 1;
	int arrPointer = start;
	while (i <= middle && j <= end)
	{
		if (data[i] < data[j])	//data j�� �� ũ�ٸ� 
		{
			sortedArray[arrPointer] = data[i];	//data[i]�� �� �ְ� 	(���� ������)	
			++i;
		}
		else {
			sortedArray[arrPointer] = data[j];
			++j;
		} //endif
		++arrPointer; //���� �����͸� ���������� ���� ����������
	}
	if (i > middle) {
		for (int p = j; p <= end; ++p) {
			sortedArray[arrPointer] = data[p];
			++arrPointer;
		}
	}
	else {	//if j > end
		for (int p = i; p <= middle; ++p) {
			sortedArray[arrPointer] = data[p];
			++arrPointer;
		}
	}//endif
	for (int p = start; p <= end; ++p) {	//�ܼ��� sorted�� �ӽù����� ���̴ϱ�...
		data[p] = sortedArray[p];
	}
}
void MergeSort(int* data, int start, int end) {
	//ũ�Ⱑ 1����
	if (start < end) {
		int middle = (start + end) / 2;
		MergeSort(data, start, middle);
		MergeSort(data, middle + 1, end);
		Merge(data, start, middle, end);
	}
}


int main(void)
{
	randomInputData(array, 1, 20);
	dataShow(array);
	MergeSort(array, 0, MAX_ARRAY - 1);
	dataShow(array);
}