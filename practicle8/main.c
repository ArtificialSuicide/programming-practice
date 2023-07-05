#include <stdio.h>
#include <string.h>

// Створення константи
#define MAX_CHARS 128

// Функція для обчислення факторіалу числа
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for(int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Функція для обчислення кількості анаграм
unsigned long long countAnagrams(char* str) {
    int length = strlen(str);
    int count[MAX_CHARS] = {0};
    for(int i = 0; i < length; i++) {
        count[(int)str[i]]++;
    }

    unsigned long long anagramCount = factorial(length);
    for(int i = 0; i < MAX_CHARS; i++) {
        if(count[i] > 1) {
            anagramCount /= factorial(count[i]);
        }
    }

    return anagramCount;
}

int main() {
    // Створення змінних
    char str[15];

    // Зчитування вхідних даних
    printf("Enter a word: ");
    scanf("%s", str);

    // Перевірка коректності вводу
    if(str > 14) {
        printf("Invalid value entered");
        return 0;
    }

    // Виведення результату
    printf("The number of possible anagrams is: %llu\n", countAnagrams(str));
}
