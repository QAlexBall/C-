//
// Created by deren zhu on 2019/10/6.
//

#include <iostream>

using namespace std;

constexpr float exp(float x, int n) {
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};

int main() {
    cout << exp(10.0, 3) << endl;
}

