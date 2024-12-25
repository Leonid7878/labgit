#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите A и B: ";
    cin >> a >> b;
    
    cout << "A + B = " << a + b << '\n';
    if (b != 0) {
        cout << "A / B = " << a / b << '\n';  // Заменили умножение на деление
    } else {
        cout << "Деление на ноль невозможно.\n";  // Обработали деление на ноль
    }

    return 0;
}
