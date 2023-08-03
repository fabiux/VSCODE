#include <iostream>

bool isPrime(int number) {
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main() {
    int number;

    std::cout << "Digite um número: ";
    std::cin >> number;

    if (isPrime(number))
        std::cout << "O número " << number << " é primo." << std::endl;
    else
        std::cout << "O número " << number << " não é primo." << std::endl;

    return 0;
}
