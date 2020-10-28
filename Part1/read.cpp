#include <unistd.h>
#include <iostream>


int main(int argc, char *argv[]){

   if(argc!=2)
   {
       printf("Invalid number of arguments, exiting!\n");
       return -1;
    }
    int retVal;
    int inputVal;


    while(true)
    {
        std::cin>>inputVal;
        retVal = inputVal * atoi(argv[1]);
        std::cout<<"The multiplied value is: "<< retVal<<std::endl;
    }


    return 0;
}