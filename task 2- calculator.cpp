#include <iostream>

class Calculator {
public:
    void getOperands() {
        std::cout << "Enter the first number: ";
        std::cin >> operand1;
        std::cout << "Enter the second number: ";
        std::cin >> operand2;
    }

    void performOperation() {
        std::cout << "Choose an operation (+, -, *, /): ";
        std::cin >> operation;

        switch (operation) {
        case '+':
            result = operand1 + operand2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = operand1 - operand2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = operand1 * operand2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                std::cout << "Result: " << result << std::endl;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cerr << "Invalid operation!" << std::endl;
            break;
        }
    }

private:
    double operand1, operand2, result;
    char operation;
};

int main() {
    Calculator calc;

    calc.getOperands();
    calc.performOperation();

    return 0;
}
