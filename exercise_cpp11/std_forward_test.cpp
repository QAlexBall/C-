//
// Created by deren zhu on 2019/10/7.
//

#include <iostream>

//template <typename T>
//void forward_value(const T& val) {
//    process_value(val);
//}
//
//template <typename T>
//void forward_value(T& val) {
//    process_value(val);
//}

int main() {
    int a = 0;
    const int& b = 1;
    std::forward(a);

}
