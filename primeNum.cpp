#include <iostream>
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int start, end;
    std::cout << "Enter the range (start and end): ";
    std::cin >> start >> end;
    std::cout << "Prime numbers between " << start << " and " << end << " are: " << std::endl; // corrected quotation mark
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
