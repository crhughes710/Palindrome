#include "PalindromeChecker.h"

#include <iostream>
#include <string>

PalindromeChecker::PalindromeChecker(std::string word) {
    m_word = word;
}

bool PalindromeChecker::isPalindrome() {
    int len = m_word.length()-1;
    return checkIfPalindrome(0,len);
}

bool PalindromeChecker::checkIfPalindrome(int start,int end) {
    if (start >= end)
        return true;
    if (m_word[start] != m_word[end])
        return false;
    return checkIfPalindrome(start+1,end-1);
}