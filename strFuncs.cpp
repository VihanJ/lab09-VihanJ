#include "strFuncs.h"
#include <cctype>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
    if (tolower(s1[0]) == tolower(s1[s1.length()-1])) {
        if (s1.length() >= 3) {
            return true&&isPalindrome(s1.substr(1,s1.length()-2));
        } else {
            return true;
        }
    } else {
        return false;
    }
    
    
}
