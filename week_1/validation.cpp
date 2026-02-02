#include<iostream>
int main()
{
    int any_year;
    std::cout<<"what year is it?";
    std::cin>>any_year;
    while(std::cin.fail())
    {
        std::cout<<"invalid input, please enter  year";
        std::cin.clear();
        std::cin.ignore();
        std::cin>>any_year;
        break;

    }
    std::cout<<"the year is"<<any_year<<std::endl;

}