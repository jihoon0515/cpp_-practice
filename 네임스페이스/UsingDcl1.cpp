#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"So simple function!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc; //키워드 using을 이용해서 호출하겠다고 선언
    HybFunc(); //선언한 함수를 호출
    return 0;
}