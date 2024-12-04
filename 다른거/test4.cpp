#include <iostream>

int main(void)
{
    int number;
    const double Rate = 0.12;
    const int base = 50;
    while (true) {
        std::cout << "판매금액을 적어주세요 : ";
        std::cin >> number;
        
        if (number == -1)
            break;
            
        double salary = number * Rate + base;
        std::cout << "이번달 급여 : " << salary << std::endl;
    }
    
    return 0;
}