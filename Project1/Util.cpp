#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void random_init(int* vector, int size, int min, int max) {
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		vector[i] = rand() % (max - min + 1) + min;
	}
}

void  user_init(int* vector, int size) {
	cout << "Input numbers: \n";
	for (int i = 0; i < size; i++) {
		cin >> vector[i];
	}
}

string convert_to_string(int* vector, int size) {
	if (size <= 0) {
		return "Incorrect data was entered\n";
	}
	for (int j = 0; j < size; j++) {
		if (*(vector + j) <= 0) {
			return "Incorrect data was entered";
		}
	}
	string msg = "";

	for (int i = 0; i < size; i++) {
		msg += to_string(vector[i]) + " ";
	}

	return msg;
}

void sorting_vectors(int* vector, int size) {
	
	bool flag = true;
	
	while (flag) {
		flag = false;

		for (int i = 0; i < size - 1; i++) {
			if (*(vector + i) > *(vector + i + 1)) {
				flag = true;
				int t = *(vector + i);
				*(vector + i) = *(vector + i + 1);
				*(vector + i + 1) = t;
			}
		}
	}
}