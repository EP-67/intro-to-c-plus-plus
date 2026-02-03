#include<iostream>

int validation(int max, int atomic_n)
{
    while(std::cin.fail())
    {
        std::cout<<"Invalid input, please enter a valid atomic number";
        std::cin.clear();
        std::cin.ignore();
        std::cin>>atomic_n;
    }
    while(atomic_n > max)
    {
        std::cout<<"please enter a value less than 188 ";
        std::cin.ignore();
        std::cin>>atomic_n;
    }
    return atomic_n;

}

int main()
{
    int atomic_n;
    const int max{188};
    std::cout<<"what is the atomic number of the nucleus?";
    std::cin>>atomic_n;
    atomic_n = validation(max, atomic_n);
    std::cout<<"The atomic number"<<atomic_n<<std::endl;
}
