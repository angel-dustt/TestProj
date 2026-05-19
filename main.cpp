#include <iostream>
#include "src/string_lib.h"

int main(){
    std::string s;
    int choice;

    while(true){
        std::cout << "1 reverse\n2 upper\n3 lower\n4 palindrome\n5 vowels\n0 exit\n";
        std::cin >> choice;

        if(choice == 0) break;

        std::cout << "Enter string: ";
        std::cin >> s;

        switch(choice){
            case 1: std::cout << reverseString(s) << "\n"; break;
            case 2: std::cout << toUpperCase(s) << "\n"; break;
            case 3: std::cout << toLowerCase(s) << "\n"; break;
            case 4: std::cout << (isPalindrome(s) ? "YES" : "NO") << "\n"; break;
            case 5: std::cout << countVowels(s) << "\n"; break;
        }
    }
}
