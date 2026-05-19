#include <iostream>
#include <cassert>
#include "../src/string_lib.h"

int main(){

    assert(reverseString("abc") == "cba");
    assert(toUpperCase("ab") == "AB");
    assert(toLowerCase("AB") == "ab");
    assert(isPalindrome("level") == true);
    assert(countVowels("hello") == 2);

    std::cout << "ALL TESTS PASSED" << std::endl;
    return 0;
}
