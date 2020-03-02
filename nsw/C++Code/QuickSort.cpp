/*
	�� ���� ����
	�� ����: �ð����⵵ n*logn �� �ڶ��ϳ� �־��� ���(���� ���ĵ�, �Ǵ� ���ĵ� �迭)
	n*n�� �ð����⵵�� ���δ�.
*/

#include "Sort.h"

void quickSort(int *data, int start, int end) {
	if (start >= end)	//���Ұ� 1��(�� ���ɰ��� ���) ���α�
		return;

	int temp;	//������ ��ȯ�� �ӽ� ���� 
	int pivot = start; //pivot ���� 
	int i = start + 1; //���� ���Һ��� Ž�� >(Greater) Ž��
	int j = end;	//�� ���Һ��� Ž�� <(Less) Ž��

	while (i <= j) {	//������ ������ �ݺ�
		while (i <= end && data[pivot] >= data[i]) //�ǹ� ������ ū ���� ã�� 
			++i;
		while (j > start && data[pivot] <= data[j])	//�ǹ� ������ ���� ���� ã��
			--j;

		if (i > j) {//�����ߴٸ� j���� pivot ���� ��ȯ
			temp = data[pivot];
			data[pivot] = data[j];
			data[j] = temp;
		}
		else {	//�ƴ϶�� i�� j ���� ��ȯ
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);	//j�� ��ġ�� pivot�� �����ϱ� j�� �������� �ݰ���
	quickSort(data, j + 1, end);
}


int main(void)
{
	randomInputData(array, 1, 20);
	dataShow(array);
	quickSort(array, 0, MAX_ARRAY - 1);
	dataShow(array);
}