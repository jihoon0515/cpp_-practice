#include <iostream>

int main(void)
{
    char name[100];
    char number[10];
    
    std::cout<<"이름 :";
    std::cin>>name;
    std::cout<<"번호 : ";
    std::cin>>number;
    std::cout<<"이름 : "<<name<<" 휴대폰번호 : "<<number<<std::endl;
    
}