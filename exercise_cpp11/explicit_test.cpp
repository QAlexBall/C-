//
// Created by deren zhu on 2019/10/7.
//

#include <iostream>
#include <utility>

class Things {
public:
    explicit Things(std::string  name = ""):
        m_name(std::move(name)), height(0), weight(10){}

    int CompareTo(const Things& other);
    std::string m_name;
    int height;
    int weight;

};

int Things::CompareTo(const Things& other) {
    int result = 0;
    if (m_name == other.m_name) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

int main() {
    std::string hello = "hello, world!";
    Things things("m_name is me!");
    std::cout << things.m_name << std::endl;


    // 可以隐式转换，所以可以这样用
    // int result = things.CompareTo(hello);
    // std::cout << result << std::endl;
    // 增加explicit修饰后，不可以隐式转换

    Things things1("n_name is me1");
    int result = things.CompareTo(things1);
    std::cout << result << std::endl;

    return 0;
}