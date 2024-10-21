#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result;
    int n, k;

    // while 
    result = 0;
    n = 1;
    while (n <= 18) {
        k = n;
        while (k <= 20) {
            result += sqrt(abs(1 - static_cast<double>(k) / static_cast<double>(n))) / (2 * pow(n, 2) + pow(k, 2));
            k++;
        }
        n++;
    }
    cout << "Result with while loops: " << result << endl;

    // do-while 
    result = 0;
    n = 1;
    do {
        k = n;
        do {
            result += sqrt(abs(1 - static_cast<double>(k) / static_cast<double>(n))) / (2 * pow(n, 2) + pow(k, 2));
            k++;
        } while (k <= 20);
        n++;
    } while (n <= 18);
    cout << "Result with do-while loops: " << result << endl;

    // for n++
    result = 0;
    for (int n = 1; n <= 18; n++) {
        for (int k = n; k <= 20; k++) {
            result += sqrt(abs(1 - static_cast<double>(k) / static_cast<double>(n))) / (2 * pow(n, 2) + pow(k, 2));
        }
    }
    cout << "Result with for loop (n++): " << result << endl;

    // for n--
    result = 0;
    for (int n = 18; n >= 1; n--) {
        for (int k = 20; k >= n; k--) {
            result += sqrt(abs(1 - static_cast<double>(k) / static_cast<double>(n))) / (2 * pow(n, 2) + pow(k, 2));
        }
    }
    cout << "Result with for loop (n--): " << result << endl;

    return 0;
}
