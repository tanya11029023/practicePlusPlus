#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
}
bool IsPalindrom(string s){
    string s_old = s;
    reverseStr(s);
    if(s_old == s){
    return true; } else {
    return false;
}
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> res;
 for(int i = 0; i < words.size(); i++){
     if(IsPalindrom(words[i]) && words[i].length() >= minLength){
         res.push_back(words[i]);
     }
 } return res;
}

int main() {
    /*string str = "gnudung";
    string str1 = "hannah";
    string str2 = "neben";
    reverseStr(str);
    cout << str << endl;
    reverseStr(str1);
    cout << str1 << endl;
    reverseStr(str2);
    cout << str2 << endl;
    cout << IsPalindrom(str) << endl;
    cout << IsPalindrom(str1) << endl;
    cout << IsPalindrom(str2) << endl;*/

   /* PalindromFilter({"abacaba", "aba"}, 3);
    PalindromFilter({"weew", "bro", "code", "hannah"}, 4);*/
    return 0;

}
