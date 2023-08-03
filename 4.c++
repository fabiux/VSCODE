#include <iostream>

int main() {
    double num1, num2, num3;
    
    std::cout << "Digite três números: ";
    std::cin >> num1 >> num2 >> num3;

    double media = (num1 + num2 + num3) / 3;

    std::cout << "A média dos números é: " << media << std::endl;

    return 0;
}
