#include <stdio.h>

#include <stdlib.h>


int main() {

    int size = 2;

    printf("===== size = %d =====\n", size);

    int * phonebook = (int * ) calloc(size, sizeof(int));
    //int *phonebook = (int*) malloc(size * sizeof(int));
    // int *phonebook = (int*) calloc(size, sizeof(int));

    int phone_number = 0;
    int counter = 0;

    while (1) {

        printf("Enter a phone number %d: ", counter);
        scanf("%d", & phone_number);
        if (phone_number == -1) {
            break;
        }

        if (counter >= size) {

            size += 2;
            printf("===== new size = %d =====\n", size);

            phonebook = (int * ) realloc(phonebook, size * sizeof(int));
        }

        phonebook[counter] = phone_number;

        counter++;
    }

    printf("\n===== List =====\n");

    int i;
    for (i = 0; i < counter; i++) {
        printf("number %d : %d \n", i, phonebook[i]);
    }

    free(phonebook);

    return 0;

}
