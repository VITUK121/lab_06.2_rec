#include <iostream>
#include <ctime>
using namespace std;

int* make_arr(int size) {
	return new int[size];
}

void fill_arr(int* arr, int size, int index) {
	if (index != size) {
		arr[index] = -10 + rand() % (10 - (-10) + 1);
		fill_arr(arr, size, index + 1);
	}
}

void print_arr(int* arr, int size, int index) {
	if (index != size-1) {
		cout << arr[index] << ",";
		print_arr(arr, size, index + 1);
	}
	if (index == size-1) {
		cout << arr[index] << endl;
	}

}

int counter(int* arr, int size, int index){
	if (index != size) {
		return (arr[index] % 2 != 0) + counter(arr, size, index + 1);
	}
	return 0;
}

int main()
{
	srand(time(NULL));
	int size;
	cout << "Size = "; cin >> size;

	int* a = make_arr(size);
	fill_arr(a, size, 0);
	print_arr(a, size, 0);
	cout << counter(a, size, 0) << endl;
}