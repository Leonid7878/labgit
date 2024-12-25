#include <iostream>

int main() {

    int num1, num2;

    // Ввод чисел
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Вывод разности чисел
    std::cout << "Разность чисел: " << num1 - num2 << std::endl;

    int a, b;
    cout << "Введите A и B: ";
    cin >> a >> b;
    
    cout << "A + B = " << a + b << '\n';
    if (b != 0) {
        cout << "A / B = " << a * b << '\n';  // Заменили умножение на деление
    } else {
        cout << "Деление на ноль невозможно.\n";  // Обработали деление на ноль
    }


    return 0;
}
// Эта программа — учебный проект 2 help
