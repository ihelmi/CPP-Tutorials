//  Factorial.cpp
//  Created by A H on 10/01/20.

#include <iostream>

int main (){
    
    // Initialize a variable to store the input number
    int user_number;
    unsigned long long factorial = 1; // factorial of a number is always positive


    while (true) {
        std::cout<<"Please enter a positive number: "<<std::endl;
        std::cin>>user_number;
        
        // If the input is not a positive number
        if(user_number < 0)
        {
            std::cout<<"The number should be greater than or equal to 0 "<<std::endl;

        }
        // If the input is not a number
       else if(!std::cin)
        {
            // Reset
            std::cin.clear();
            //skip incorrect input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        // If the input is a number
        else
        {
            for (int x=1; x<=user_number; x++)
            {
                factorial = factorial*x;
            }
            std::cout<<"The factorial of "<<user_number<<" is: "<< factorial<<std::endl;
            
            // Reset
            factorial =1;
        }

    }
    return 0;
}
