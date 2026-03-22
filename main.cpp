#include <iostream>

enum Operation {
    ADD = 1,
    SUBTRACT,
    DIVIDE,
    MULTIPLY
};

int main() {
    std::cout << "calculator" << std::endl;
    std::cout << "----------" << std::endl;

    char again;

do {
    double num1, num2;
    double sum = 0;
    int operation;

    std::cout << "provide a number: ";
    if (!(std::cin >> num1)) {
        std::cout << "invalid input";
        return 1;
    }

    std::cout << "provide another number: ";
    if (!(std::cin >> num2)) {
        std::cout << "invalid input!";
        return 1;
    }

    std::cout << "do you want to 1. add, 2. subtract, 3. divide or 4. multiply: ";
    std::cin >> operation;

    switch (operation) {
        case ADD:
            sum = num1 + num2;
            break;
        case SUBTRACT:
            sum = num1 - num2;
            break;
        case DIVIDE:
            if (num2 == 0) {
                std::cout << "cannot divide by zero" << std::endl;
                return 1;
            }
            sum = num1 / num2;
            break;
        case MULTIPLY:
            sum = num1 * num2;
            break;
        default:
            std::cout << "incorrect choice" << std::endl;
            return 1;
    }
    std::cout << sum << std::endl;

    std::cout << "continue? (y/n): ";
    std::cin >> again;

    std::cout << "\n";

 } while (again == 'y' || again == 'Y');

    std::cout << "thank you and see you later";
    return 0;
}