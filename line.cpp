#include <iostream>
#include <vector>

using namespace std;

int main() {

    // number of operations
    int q;
    cin >> q;
    string command;
    vector<int> list;

    for (int j = 0; j <  q; ++j) {
        cin >> command;
        if(command == "WORRY_COUNT"){
            int worried = 0;
            for (int i = 0; i < list.size(); i++){
                if(list[i]==true){
                    worried++;
                }
            }cout << worried << endl;
        }else{
            if(command == "WORRY"){
                int num;
                cin >> num;
                // person num worries
                list[num] = true;
                // number of person who is quiet
            } else if(command == "QUIET"){
                int num;
                cin >> num;
                // person num quiet
                list[num] = false;
            } else if(command == "COME"){
                int num;
                cin >> num;
                // num new persons
                if(abs(num) <= list.size()){
                    list.resize(list.size() + num);
                    // left persons
                } else {
                    list.resize(list.size()+num, 0);
                }}

    return 0;}
