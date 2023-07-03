#include <stdio.h>

// Функція для обчислення кількості чисел із розрядами, що задовольняють умову
int countNumbers(int r) {
    if (r < 3)
        return 0;

    int count = 1;  // Початкова кількість чисел з одним розрядом

    int prevCount = 1;  // Кількість чисел на попередньому розряді
    int prevPrevCount = 0;  // Кількість чисел на розряді перед попереднім

    for (int i = 2; i <= r; i++) {
        int currentCount = prevCount + prevPrevCount;  // Кількість чисел на поточному розряді
        count += currentCount;  // Додавання кількості чисел на поточному розряді до загальної кількості

        // Оновлення значень для наступної ітерації
        prevPrevCount = prevCount;
        prevCount = currentCount;
    }

    return count;
}

int main() {
    int r;

    // Зчитування вхідного числа
    printf("Enter number <=30: ");
    scanf("%d", &r);

    // Перевірка коректності вводу
    if(r >= 30) {
        printf("Invalid value entered");
        return 0;
    }

    // Обчислення кількості чисел
    int count = countNumbers(r);

    // Виведення результату
    printf("Your result: %d\n", count);
}
