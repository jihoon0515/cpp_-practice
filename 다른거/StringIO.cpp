#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];

    std::cout<<"what's your name?";
    std::cin>>name;

    std::cout<<"what's your favorit programing language?";
    std::cin>>lang;

    std::cout<<"내 이름은 "<<name<<"입니다.\n";
    std::cout<<"제일 좋아하는 언어는 "<<lang<<"입니다."<<std::endl;
    return 0;

}