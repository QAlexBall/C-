//
// Created by alex on 1/17/19.
//

#include <iostream>
#include <thread>

class BackgroundTask {
public:
    void operator()() const {

    }
};

int main() {
    BackgroundTask f;
    std::thread my_thread(f);
}