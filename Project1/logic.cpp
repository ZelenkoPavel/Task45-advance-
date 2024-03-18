

void logic(int* vector_1, int* vector_2, int* vector_3, int size_1, int size_2) {

	for (int i = 0; i < size_1; i++)
	{
		*(vector_3 + i) = *(vector_1 + i);
	}
	for (int j = 0; j < size_2; j++)
	{
		*(vector_3 + j + size_1) = *(vector_2 + j);
	}
}