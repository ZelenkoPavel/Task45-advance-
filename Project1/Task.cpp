#include <iostream>

using namespace std;

void random_init(int*, int, int, int);
void user_init(int*, int);
string convert_to_string(int*, int);
void sorting_vectors(int*, int);

void logic(int*, int*, int*, int, int);

int main() {

	int min, max;
	int size_1, size_2;
	int choice;

	do {
		system("cls");
		cout << "Input size_1 and size_2 of vectors: ";
		cin >> size_1 >> size_2;
		cout << "Select initialization (1 or 2): \n1) user_init \n2) random_init \n";
		cin >> choice;
	} while (size_1 <= 0 || size_2 <= 0 || choice < 1 || choice > 2);

	int* vector_1 = new int[size_1];
	int* vector_2 = new int[size_2];

	if (choice == 1) {
		user_init(vector_1, size_1);
		user_init(vector_2, size_2);
	}
	else {
		cout << "Input range of values (min, max) of vector_1: ";
		cin >> min >> max;
		random_init(vector_1, size_1, min, max);
		
		cout << "Input range of values (min, max) of vector_2: ";
		cin >> min >> max;
		random_init(vector_2, size_2, min, max);
	}

	sorting_vectors(vector_1, size_1);
	sorting_vectors(vector_2, size_2);

	cout << "Vector_1 elements: " << convert_to_string(vector_1, size_1) << endl;
	cout << "Vector_2 elements: " << convert_to_string(vector_2, size_2) << endl << endl;

	int* vector_3 = new int[size_1 + size_2];

	logic(vector_1, vector_2, vector_3, size_1, size_2);

	cout << "Vector_3 elements: " << convert_to_string(vector_3, size_1 + size_2) << endl;
	
	delete[] vector_1;
	delete[] vector_2;
	delete[] vector_3;

	return 0;
}