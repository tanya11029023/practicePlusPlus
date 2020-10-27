#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double res1 = 0.0;
    double res2 = 0.0;
    int disc = pow(b, 2) - 4 * (a * c);
    double div = 2 * a;

    if(disc > 0){
        if (a!= 0 && b!= 0 && c!= 0) {
            res1 = (-b + sqrt(disc)) / div;
            res2 = (-b - sqrt(disc)) / div;
            if (isnan(res1) | isnan(res2) | isinf(res1) | isinf(res2)) {
                cout << " ";
            } else {
                cout << res1 << " " << res2;
            }
        } else if(b == 0){
            if(a<0 | c<0){
                res1 = (-b + sqrt(disc)) / div;
                res2 = (-b - sqrt(disc)) / div;
            } else {
                double fors = (c/a);
                res1 = sqrt(fors);
                res2 = sqrt(fors) * -1;
            }
            if (isnan(res1) | isnan(res2) | isinf(res1) | isinf(res2)) {
                cout << " ";
            } else {
                cout << res1 << " " << res2;
            }
        } else if (c == 0){
            res1 = 0;
            res2 = (b / a) * -1;
            if (isnan(res1) | isnan(res2) | isinf(res1) | isinf(res2)) {
                cout << " ";
            } else {
                cout << res1 << " " << res2;
            }
        } else if(disc > 0 && a == 0) {
            res1 = (c / b) * -1;
            if (isnan(res1) | isinf(res1)) {
                cout << " ";
            } else {
                cout << res1 << " ";
            }
    }}

        if(disc == 0){
            if (a != 0 && b != 0 && c != 0) {
                res1 = -b / div;
                if (isnan(res1) | isinf(res1)) {
                    cout << " ";
                } else {
                    cout << res1 << " ";
                }
            } else if (a == 0) {
                res1 = (c / b) * -1;
                if (isnan(res1) | isinf(res1)) {
                    cout << " ";
                } else {
                    cout << res1 << " ";
                }
            } else if (b == 0 && c == 0) {
                res1 = 0;
                if (isnan(res1) | isinf(res1)) {
                    cout << " ";
                } else {
                    cout << res1 << " ";
                }
        }


        if (disc < 0) {
           cout << " ";
        }
        }
    }
