#include "Sort.h"

// �� �ڷᱸ�� Heap�� root ����� index �� 0 �̴�. 
void heapify(int* data, int size, int mid);

void buildMaxHeap(int* data, int size) {
	int mid = size / 2 - 1;

	for (mid; mid >= 0; --mid) {
		heapify(data, size, mid);
	}
}
void heapSort(int* data, int size) {
	// �߰����� ����( index�� 10�̸� 5���� ����) �׷��� ������ 0�̴ϱ� 4 
	buildMaxHeap(data, size);
	while (size > 1) {
		std::swap(data[0], data[size - 1]);
		--size;
		heapify(data, size, 0);
	}
}

void heapify(int* data, int size, int mid) {
	int parent = mid;
	int left = parent * 2 + 1;	//���� 1���� �����̶�� *2 *2+1 ��.
	int right = parent * 2 + 2;
	int largest = parent;	//���� �񱳳���� ���� ū ���

	if (left < size && data[left] > data[largest]) {
		largest = left;
	}
	// Check if right child exists && compare the value
	if (right < size && data[right] > data[largest]) {
		largest = right;
	}
	// Swap
	if (parent != largest) {	//���� ����(�θ��尡 �� �۴ٸ�)	
		std::swap(data[largest], data[parent]);	//���� largest�� rightOrleft
		// swap �߻���, heapify ���
		heapify(data, size, largest);
	}
}

int main(void)
{
	randomInputData(array, 1, 20);
	dataShow(array);
	heapSort(array, MAX_ARRAY);
	dataShow(array);
	//����? ���� �� ���ڰ� 0���� ��µȴ�.
}