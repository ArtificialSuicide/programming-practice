#include <stdio.h>
#include <math.h>

// Функція обчислення кількості кроків
long minSteps(long x, long y) {
    // Обчислення відстані
    long distance = y - x;

    // Знаходимо максимально можливу довжину кроку
    long step = (long) sqrt(distance);

    // Обчислюємо залишок відстані після того, як ми зробили максимальну кількість кроків з довжиною
    long remaining = distance - step * step;

    // Якщо залишок дорівнює нулю, це означає, що ми змогли дійти до y, роблячи кроки з максимальною довжиною.
    // Тоді мінімальна кількість кроків - це (2 * step - 1).
    if(remaining == 0) {
        return 2 * step - 1;
    }

        // Якщо залишок менше або дорівнює step, це означає, що нам потрібен ще один крок, щоб дійти до y.
        // Тоді мінімальна кількість кроків - це (2 * step).
    else if(remaining <= step) {
        return 2 * step;
    }

        // Якщо залишок більше, ніж step, це означає, що нам потрібно зробити ще два кроки, щоб дійти до y.
        // Тоді мінімальна кількість кроків - це (2 * step + 1).
    else {
        return 2 * step + 1;
    }
}

int main() {
    // Створення змінних
    long x, y;

    // Зчитування вхідних даних
    printf("Enter the x and y values: ");
    scanf("%ld %ld", &x, &y);

    // Виведення результат
    printf("Minimum number of steps: %ld\n", minSteps(x, y));
}
