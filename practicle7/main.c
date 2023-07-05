#include <stdio.h>
#include <math.h>

int main() {
    // Створення змінних
    double x1, y1, r1, x2, y2, r2;

    // Зчитування вхідних даних
    printf("Enter the coordinates of the circle centers and their radii (2 circles in total): \n");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    // Відстань між центрами кіл
    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Перевірка на кількість перетинів
    if (dist < r1 + r2 && dist > fabs(r1 - r2)) {
        printf("2\n");  // Дві точки перетину
    } else if (dist == r1 + r2 || (dist == fabs(r1 - r2) && dist != 0)) {
        printf("1\n");  // Одна точка перетину
    } else if (dist == 0 && r1 == r2) {
        printf("-1\n");  // Безкінечно багато точок перетину
    } else {
        printf("0\n");  // Немає точок перетину
    }
}
