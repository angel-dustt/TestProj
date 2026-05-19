#include "string_lib.h"
#include <algorithm>
#include <cctype>

std::string reverseString(const std::string& s){
    return std::string(s.rbegin(), s.rend());
}

std::string toUpperCase(const std::string& s){
    std::string r = s;
    for(char &c : r) c = std::toupper(c);
    return r;
}

std::string toLowerCase(const std::string& s){
    std::string r = s;
    for(char &c : r) c = std::tolower(c);
    return r;
}

bool isPalindrome(const std::string& s){
    std::string r = toLowerCase(s);
    std::string rev = reverseString(r);
    return r == rev;
}

int countVowels(const std::string& s){
    int count = 0;
    for(char c : s){
        c = std::tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
            count++;
    }
    return count;
}
