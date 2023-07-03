#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0)
        return a;

    // Використання рекурсії для більш читабельного вигляду
    return findGCD(b, a % b);
}

int findLCM(int arr[], int n) {
    int lcm = arr[0];

    // Виконуємо операції над кожним числом масиву, і кожен раз присвоюємо нашій кінцевій змінній результат
    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findGCD(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    // Створення змінних
    int n;
    int arr[20];

    // Зчитування кількості чисел
    printf("Enter the number of input numbers: ");
    scanf("%d", &n);

    // Перевірка коректності вводу
    if (n <= 2 || n > 20) {
        printf("Invalid value entered");
        return 0;
    }

    // Зчитування чисел
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Перевірка коректності вводу
        if(arr[i] == 0) {
            printf("Invalid value entered");
            return 0;
        }
    }

    // Виведення результату
    printf("Least common multiple: %d\n", findLCM(arr, n));
}