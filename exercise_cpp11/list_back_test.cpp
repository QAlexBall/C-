//
// Created by deren zhu on 2019/10/15.
//

#include<iostream>
#include<list>

int main(){
    // Initialization of list
    std::list<int> demo_list;
    // Adding elements to the list
    demo_list.push_back(10);
    demo_list.push_back(20);
    demo_list.push_back(30);
    // prints the last element of demo_list
    std::cout << demo_list.back();

    return 0;
}