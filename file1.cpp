#include<iostream>
namespace syc
{
    int show()
    {
        std::cout<<"My name is darshan"<<"\nI am in namespace syc";
        return 0;
    }
    
    int put()
    { 
        int num1,num2,sum;
        std::cout<<"Enter two numbers";
        std::cin>>num1>>num2;

        sum=num1+num2;
        std::cout<<"the sum is"<<sum;
        return 0;
    }

}