#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Task 1 bubble sorting

void fillRandom(int* arr, int len, int border) {
    for(int i = 0; i < len; i++) {
    *(arr + i) = rand() % border;
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubblesort(int* arr, int len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len - 1; j++) {
            if(arr[j] > arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
        }
    }
}

void printintArray(int* array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d  ", array[i]);
        }
        printf("\n");
    }

//-------------------------------

//Task 2 Trabb-Prado-knut

void array_fill(int *arr){
    for(int i = 0; i < 11; i++){
        scanf("%f", &arr[i]);
    }
}

void array_reverse(int *arr){
    float temp;
        for(int i = 0; i < 6; i++){
        temp = arr[i];
        arr[i] = arr[10-i];
        arr[10-i] = temp;
    }
}

void array_print(float* arr){
    for(int i = 0; i < 11; i++){
    printf("%f ", arr[i]);
    }
}

int array_formula(float* arr){
    for(int i = 0; i < 11; i++){
        arr[i] = sqrt(fabs(arr[i])) + 5*pow(arr[i], 3);
        if(arr[i] > 400){
            return -1;
        }
    }
    return 0;
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    printf("Bubble sorting");
    printf("\n");
    fillRandom(arr, SIZE, 10);
    printintArray(arr, SIZE);
    bubblesort(arr, SIZE);
    printintArray(arr, SIZE);
    printf("\n");


    float array [11];
    printf("Trabb-Prado-knut");
    printf("\n");
    printf("Input 11 numbers: ");
    array_fill(array);
    array_reverse(array);

    if(array_formula(array) == - 1){
        printf(" Alarm! Result > 400! \n");
    }else{
        array_print(array);
    }
    printf("\n");
    return 0;
}

