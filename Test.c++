
#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;


    std::cout << "Enter either (+ - * /)";
    std::cin >> op;
    std::cout <<"Enter #1 ";
    std::cin >>num1;
    std::cout <<"Enter #2 ";
    std::cin >>num2;

switch(op){
    case '+':
    result=num1+num2;
    std::cout<<"result " << result << '\n';
    break;

    case '-':
    result=num1-num2;
    std::cout<<"result " << result << '\n';
    break;

    case '*':
    result=num1*num2;
    std::cout<<"result " << result << '\n';
    break;


    case '/':
    result=num1/num2;
    std::cout<<"result " << result << '\n';
    break;
    defualt:
    std::cout<< "That wasnt a valid responce\n";
    break;
}
    return 0;
}

