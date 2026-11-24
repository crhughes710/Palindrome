#include <iostream>
#include "PalindromeChecker.h"
#include <string>

int main() {
    std::string word;
    std::cout << "Enter a word to check: ";
    std::cin >> word;
    PalindromeChecker check(word);

    if (check.isPalindrome()) {
        std::cout << word << " is a palindrome" << std::endl;
    }
    else {
        std::cout << word << " is not a palindrome" << std::endl;
    }
    return 0;
}
