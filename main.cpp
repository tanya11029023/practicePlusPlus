#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a = {};
    int n;
    cin >> n;
    while(n>0){
        a.push_back(n%2);
        n = n/2;
}
    reverse(a.begin(), a.end());
     for(auto i : a){
        cout << i;
    }

     /*
      * for (int i = a.size() - 1; i >= 0; --i){
      * cout << a[i];
      * }
      */
    return 0;
}
