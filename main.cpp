#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>

int main() {
    
    std::string a(100000, 'a');

   
    std::string Copy{};
   
    std::chrono::system_clock::time_point CopyStart = std::chrono::system_clock::now();
    Copy = a;
    
    std::chrono::system_clock::time_point EndedCopy = std::chrono::system_clock::now();
    auto durationCopy = std::chrono::duration_cast<std::chrono::microseconds>(EndedCopy - CopyStart).count();

    
    std::string move{};
    
    std::chrono::system_clock::time_point MoveingStart = std::chrono::system_clock::now();
    move = std::move(a);
    
    std::chrono::system_clock::time_point EndedMove = std::chrono::system_clock::now();
    auto durationMove = std::chrono::duration_cast<std::chrono::microseconds>(EndedMove - MoveingStart).count();

   
    std::cout << "100,000文字を移動＆コピーで比較。" << std::endl;
    std::cout << "コピー: " << durationCopy << "μs" << std::endl;
    std::cout << "移動: " << durationMove << "μs" << std::endl;

    return 0;
}