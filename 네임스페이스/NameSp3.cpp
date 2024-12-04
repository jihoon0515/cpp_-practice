#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void); // 함수 앞에 void를 붙여서 매개 변수를 받지 않는다는것을 명시적으로 나타냄
}

namespace BestComImpl
{
    void PrettyFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}   

int main(void)
{
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    PrettyFunc(); //같은 네임스페이스 내부이므로 직접 호출 가능
    ProgComImpl::SimpleFunc(); //다른 네임스페이스이므로 명시적으로 지정 필요
}

void BestComImpl::PrettyFunc(void)
{
    std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}