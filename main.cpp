#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*  // number of operations
      int q;
      cin >> q;
      // operations
      vector<string> operations;
      int i = 0;
      // number of worried people
      int worry_count = 0;
      // fill out operations
      while(i < q){
          string s;
          cin >> s;
          operations.push_back(s)          ++i;
      }
     /* // second number in operation description
      int count;
      for(int i = 0; i < operations.size(); i++) {
          // if worry_count
          if (operations[i].length() > 10) {
              // --> print number of worried people
              cout << worry_count << endl;
          } else {
              // others operations:
              // convert second number in operation description
              for (char ch: operations[i]) {
                  if (ch >= '0' && ch <= '9') {
                  count = (int)ch; }
                  // which operation: worry queit come
                  if(operations[i] == "worry"){

                  }
              } */

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
                }
        }
        }
    /*int Q, par;
    string op_code;
    vector<int> line(0), res(0);

    cin >> Q;
    for(int i = 0; i < Q; ++i) {
        cin >> op_code;

        if (op_code == "WORRY_COUNT") {
            int r = 0;
            for(auto k : line)
                if (k == 1) r++;
            res.push_back(r);
        } else {
            cin >> par;
            if (op_code == "COME") {
                if(par < 0) {
                    if (abs(par) <= line.size())
                        line.resize(line.size()+par);
                } else
                    line.resize(line.size()+par,0);
            }
            if (op_code == "WORRY") {
                if (par <= line.size() && par < 0)
                    line[par-1] = 1;
            }
            if (op_code == "QUIET") {
                if (par <= line.size() && par > 0)
                    line[par-1] = 2;
            }
        }
    }
    for(auto g : res)
        cout << g << endl;*/
}

    return 0;}