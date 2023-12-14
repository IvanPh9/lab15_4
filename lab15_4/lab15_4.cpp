#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale>
int main() {
    setlocale(LC_CTYPE, "ukr"); //Українізація

    int size, i, sum = 0; // Змінні для розміру масиву, індексу циклу та суми
    printf("Введіть розмір масиву\n"); // Повідомлення користувачеві
    scanf_s("%d", &size); // Введення розміру масиву від користувача

    // Виділення пам'яті для масиву
    int* array = (int*)malloc(size * sizeof(int));

    printf("Введіть елементи масиву\n");
    // Заповнення масиву елементами, введеними користувачем та обчислення суми
    for (i = 0; i < size; i++) {
        printf("Елемент %d: ", i + 1 );
        scanf_s("%d", &array[i]);
        sum = sum + array[i];
    }

    printf("Сума = %d\n", sum); // Виведення суми

    free(array); // Звільнення пам'яті
    return 0;
}
