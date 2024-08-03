#include <iostream>
#include <memory>
#include <string>

int main()
{
    int number = 5;
    std::unique_ptr<int> penesote = std::make_unique<int>(number);
    std::cout<< "Rust es mierda xD" <<std::endl;
    std::cout<< *penesote <<std::endl;

    return 0;
}