#include <iostream>
#include <thread>

void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::thread t1(printMessage, "Hello from thread 1!");
    std::thread t2(printMessage, "Hello from thread 2!");

    t1.join();
    t2.join();

    return 0;
}
