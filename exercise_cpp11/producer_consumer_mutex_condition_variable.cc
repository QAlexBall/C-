#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <memory>
#include <condition_variable>

struct _data {
  bool ready;
  int32_t value;
};

_data data = { false, 0 };
std::mutex data_mutex;
std::condition_variable data_con; // 条件变量

int main () {
  int sleep_time;
  std::cout << "please enter sleep time: " << std::endl;
  std::cin >> sleep_time;
  // producer
  std::thread prepdare_data_thread([] (int n) {
        std::cout << "sleep " << n << " seconds" << std::endl; 
        std::this_thread::sleep_for(std::chrono::seconds(n));
        std::unique_lock<std::mutex> ulock(data_mutex);
        data.ready = true;
        data.value = 1;
        data_con.notify_one(); // 唤醒某个wait线程，如果当前没有等待线程，则该函数什么也做。
      }, sleep_time);

  // consumer
  std::thread process_data_thread([] () {
        std::unique_lock<std::mutex> ulock(data_mutex);
        data_con.wait(ulock, []() { return data.ready; });
        std::cout << data.value << std::endl;
      });

  prepdare_data_thread.join();
  process_data_thread.join();

  return 0;

}
