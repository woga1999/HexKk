/*
#include <iostream>

using namespace std;



class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;

	return os;
}



template <typename T>

class BoundCheckArray
{
private:
	T* arr;
	int arrlen;


	BoundCheckArray(const BoundCheckArray& arr) { }
	BoundCheckArray& operator=(const BoundCheckArray& arr) { }

public:

	BoundCheckArray(int len) : arrlen(len)
	{
		arr = new T[len];
	}

	T& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;

			exit(1);
		}

		return arr[idx];
	}

	T operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;

			exit(1);
		}

		return arr[idx];
	}

	int GetArrlen() const { return arrlen; }
	~BoundCheckArray() { delete[] arr; }
};



int main(void)
{
	BoundCheckArray<int> pos1(5);
	BoundCheckArray<Point> pos2(2);
	BoundCheckArray<Point*> pos3(2);

	for (int i = 0; i < 5; i++)
		pos1[i] = i + 1;
	
	for (int i = 0; i < 5; i++)
		cout << "int array: " << pos1[i] << endl;

	pos2[0] = Point(3, 4);
	pos2[1] = Point(2, 6);

	for (int i = 0; i < 2; i++)
		cout << "Point array: " << pos2[i];

	pos3[0] = new Point(2, 7);
	pos3[1] = new Point(3, 6);

	for (int i = 0; i < 2; i++)
		cout << "Point* array: " << *(pos3[i]);

	return 0;
}
*/