//
// Created by chris on 11/19/26.
//

#ifndef PALINDROME_PALINDROMECHECKER_H
#define PALINDROME_PALINDROMECHECKER_H
#include <string>


class PalindromeChecker {
private:
    std::string m_word;
public:
    PalindromeChecker(std::string);
    bool isPalindrome();
private:
    bool checkIfPalindrome(int,int);
};


#endif //PALINDROME_PALINDROME CHECKER_H
