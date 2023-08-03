#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

int main() {
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    std::cout << "A palavra invertida é: " << reverseString(palavra) << std::endl;

    return 0;
}
