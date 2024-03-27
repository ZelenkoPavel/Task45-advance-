

void logic(int* vector_1, int* vector_2, int* vector_3, int size_1, int size_2) {

	int index_1 = 0;
	int index_2 = 0;

	for (int i = 0; i < size_1 + size_2; i++)
	{
		if (*(vector_1 + index_1) > *(vector_2 + index_2)
			&& index_2 < size_2) {
			*(vector_3 + i) = *(vector_2 + index_2);
			index_2++;
		}
		else if (index_1 < size_1) {
			*(vector_3 + i) = *(vector_1 + index_1);
			index_1++;
		}
	}
}