#include <iostream>

int main(void)
{
    int val1;
    int val2;
    int val3;
    int val4;
    int val5;
    

    std::cout<<"첫번쨰 정수 입력 : ";
    std::cin>>val1;
    std::cout<<"두번째 정수 입력 : ";
    std::cin>>val2;
    std::cout<<"세번째 정수 입력 : ";
    std::cin>>val3;
    std::cout<<"네번쨰 정수 입력 : ";
    std::cin>>val4;
    std::cout<<"다섯번쨰 정수 입력 : ";
    std::cin>>val5;
    int result=val1+val2+val3+val4+val5;
    std::cout<<"합계 :"<<result<<std::endl;
    return 0;
    
}