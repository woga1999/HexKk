#include "Sort.h"

int array[MAX_ARRAY] = { 0, };

void dataShow(const int *data) {
	for (int i = 0; i < MAX_ARRAY; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}

void randomInputData(int *data) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < MAX_ARRAY; ++i)
	{
		array[i] = rand();
	}
}
void randomInputData(int *data,int start, int end) {	//�Լ� �����ε�  
	srand((unsigned int)time(NULL));
	for (int i = 0; i < MAX_ARRAY; ++i)
	{
		array[i] = rand() % end + start;		//0~19 + 1 
	}
}