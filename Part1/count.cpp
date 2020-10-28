#include <unistd.h>
#include<stdio.h>
#include <iostream>

int main()
{
    int counter = 0;
    while(true)
    {
        counter++;
        std::cout<<counter<<std::endl;
        sleep(1);
    }

    return 0;
}