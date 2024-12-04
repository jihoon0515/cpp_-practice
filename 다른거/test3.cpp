#include <iostream>

int main(void)
{
    int number;
    int result;
    std::cout<<"몇단의 구구단을 출력할까요?";
    std::cin>>number;

    for (int i=1; i<=9; i++)
    {
        result = number * i;
        std::cout<<number<< "x"<< i <<"="<< result <<std::endl;
    }
    return 0;
}