#include<bits/stdc++.h>
using namespace std;
bool isLetter(char c) { return (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z');}
bool isUpperCase(char c) {return c >= 'A' and c <= 'Z';}
bool isLowerCase(char c) {    return c >= 'a' and c <= 'z';}
bool isDigit(char c) {return c >= '0' and c <= '9';}
bool isVowel(char c) {return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';}
bool isConsonant(char c){    return !isVowel(c); }
int main()
{
   return 0;
}
