#include <cstdio> //	= stdio.h
#include <vector>

using namespace std;

void Vector() {
	vector <int> myArray(10);

	for (int i = 0; i < 10; i++) {
		myArray[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", myArray[i]);
	}

	printf("\n");
	myArray.push_back(10);

	for (int i = 0; i < 11; i++) {
		printf("%d ", myArray[i]);
	} //�� vector�� ũ�Ⱑ �����Ѵ�.
	printf("\n ");
	printf("%d \n ", myArray.size());

	myArray.resize(10, 5);

	for (int i = 0; i < myArray.size(); i++) {
		printf("%d ", myArray[i]);

	}
	printf("\n ");

}