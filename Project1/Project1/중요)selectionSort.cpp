#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

void selectionSort()
{
#define num 20

    int number[num] = { 15,3,23,64,77,46,42,174,68,78,91,5,76,310,84,342,176,120,33,41 };
    int temp;
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (number[i] < number[j]) {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++) {
        printf("[%d]", number[i]);
    }
}