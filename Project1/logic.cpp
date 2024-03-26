

void logic(int* vector_1, int* vector_2, int* vector_3, int size_1, int size_2) {
	
	int min = 2147483647;
	int max = -2147483648;

	for (int i = 0; i < size_1; i++) {
		if (*(vector_1 + i) > max) {
			max = vector_1[i];
		}
	}
	for (int j = 0; j < size_1; j++) {
		if (*(vector_1 + j) < min) {
			min = vector_1[j];
		}
	}

	for (int i = 0; i < size_2; i++) {
		if (*(vector_2 + i) > max) {
			max = vector_2[i];
		}
	}
	for (int j = 0; j < size_2; j++) {
		if (*(vector_2 + j) < min) {
			min = vector_1[2];
		}
	}

	int index = 0;

	for (int k = min; k <= max; k++)
	{
		for (int i = 0; i < size_1; i++) {
			if (*(vector_1 + i) == k) {
				*(vector_3 + index) = *(vector_1 + i);
				index++;
			}
		}
		for (int j = 0; j < size_2; j++) {
			if (*(vector_2 + j) == k) {
				*(vector_3 + index) = *(vector_2 + j);
				index++;
			}
		}
	}
}