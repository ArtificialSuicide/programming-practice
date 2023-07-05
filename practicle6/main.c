#include <stdio.h>
#include <math.h>

int main() {
    // Створення змінних
    int x1, y1, x2, y2;

    // Зчитування вхідних даних
    printf("Enter four values: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Розрахунок довжини
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Виведення результат
    printf("Vector length: %.6lf\n", length);
}
