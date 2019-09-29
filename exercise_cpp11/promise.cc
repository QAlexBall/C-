#include <thread>
#include <iostream>
#include <future>
#include <chrono>


struc _data {
  int32_t value;
};

_data data = { 0 };

int main () {
  std::promise<_data> data_promise;
  std::future<_data> data_futrue = data_promise.get_future(); // 得到这个promise封装好的期望
  
  std::thread prepare_data_thread([](std::promise<_data> &data_promise) {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        data_promise.set_value({ 1 });
      }, std::ref(data_futrue));

  std::thread process_data_thread([](std::future<_data> &data_futrue) {
        std::cout << data_futrue.get().value << std::endl;
      }, std::ref(data_futrue));

  prepare_data_thread.join();
  process_data_thread.join();

  return 0;
}

