#include <iostream>

bool ValidNumber(int number) {
    // sayinin kosullarini kontrol ettiğimiz kisim
    int sumOfDigits = 0;
    int productOfDigits = 1;

    // sayilari olusturma kismi
    int tempNumber = number;
    while (tempNumber > 0) {
        int digit = tempNumber % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        tempNumber /= 10;
    }

    return sumOfDigits > 20 && productOfDigits >= 50 && productOfDigits <= 200;
}

void findNumbers() {
    // sayilari bulma ve yazdirma 
    std::cout << "4-digit numbers with sum of digits > 20 and product of digits between 50 and 200:\n";

    for (int number = 1000; number < 10000; ++number) {
        if (ValidNumber(number)) {
            std::cout << number << std::endl;
        }
    }
}

int main() {
    findNumbers();

    return 0;
}
