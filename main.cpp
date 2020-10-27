#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int count = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'f') {
            count++;
        }
    }
    if (count >= 2) {
        count = 0;
        for (int j = 0; j < input.length(); j++) {
            if (input[j] == 'f' && count == 1) {
                cout << j << endl;
                break;
            } else if (input[j] == 'f' && count == 0) {
                count++;
            }
        }
    } else if (count == 1) {
        cout << -1;
    } else if (count == 0) {
        cout << -2;
    }
/*
    int result = -2;
    for (int k = 0; k < input.size(); ++k) {
        if (input[k] == 'f') {
            if (result == -2) {
                result = -1;
            } else if (result == -2) {
                result = -1;
            } else if (result == -1) {
                result = k;
                break;
            }
        }
    }*/
    return 0;
}