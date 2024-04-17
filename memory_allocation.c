#include <stdio.h>
#include <stdlib.h>


int main(){

	int size = 5;

	//To observe the variance in memory allocation behavior between malloc() and calloc()

    printf("===== Malloc =====\n");
    int *malloc_array = (int*) malloc(size * sizeof(int));

    if (malloc_array == NULL) {
        printf("Memory allocation failed for malloc.\n");
        return 1;
    }

    // Writing to the allocated memory
    for (int i = 0; i < size; i++) {
        malloc_array[i] = i + 1; // Writing values 1, 2, 3, ...
    }

    printf("Contents of memory allocated using malloc:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", malloc_array[i]);
    }
    printf("\n");

    printf("===== Calloc =====\n");
    int *calloc_array = (int*) calloc(size, sizeof(int));

    if (calloc_array == NULL) {
        printf("Memory allocation failed for calloc.\n");
        free(malloc_array); // Free memory allocated by malloc before exiting
        return 1;
    }

    printf("Contents of memory allocated using calloc:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", calloc_array[i]);
    }
    printf("\n");



    //Phone-Book

	printf("===== size = %d =====\n", size);

	int *phonebook = (int*) calloc(size, sizeof(int));
	//int *phonebook = (int*) malloc(size * sizeof(int));
	// int *phonebook = (int*) calloc(size, sizeof(int));

	int phone_number = 0;
	int counter = 0;

	while(1){

		printf("Enter a phone number %d: ", counter);
		scanf("%d", &phone_number);
		if (phone_number == -1)
		{
			break;
		}

		if (counter >= size){

			size += 2;
			printf("===== new size = %d =====\n", size);

			phonebook = (int*) realloc(phonebook, size * sizeof(int));
		}

		phonebook[counter] = phone_number;

		counter++;
	}



	printf("===== List =====\n");

	int i;
	for(i=0; i<counter; i++){
		printf("number %d : %d \n", i, phonebook[i]);
	}

	free(phonebook);

	return 0;

}