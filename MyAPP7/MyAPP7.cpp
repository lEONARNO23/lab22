#include <iostream>

int main() {
    int x = 5;
    int y = 0;

    if (y == 0) //ver 3.0 Исправление проверки переменной
    {
        std::cout << "devide on zero!! ERROR ";
        return 0;

    };
    if (y == 0) {
        std::cout << "Division by zero!! ERROR";
        return 0;
    }
    int z = x / y; //ver 1.0 исправлено деление на ноль, добавлена проверка

    std::cout << "The result of division is: " << z << std::endl;

    int uninitialized_value;
    std::cout << "Uninitialized value: " << uninitialized_value << std::endl;

    if (x == 0) { // ver 2.0 Исправление ошибки V559
        std::cout << "x is zero." << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << i << " ";
    }
    std::cout << "The result of division is: " << z << std::endl;

    int uninitialized_value;
    std::cout << "Uninitialized value: " << uninitialized_value << std::endl;

    if (x == 0) { // ver 2.0 Исправление ошибки V559
        std::cout << "x is zero." << std::endl;
    }

    for (int i = 0; i < 5; ++i)
        std::cout << i << " ";

    return 0;
}
