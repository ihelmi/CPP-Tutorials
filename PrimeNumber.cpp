//  PrimeNumber.cpp
//  Created by A H on 10/01/20.

#include <iostream>

int main (){
    
    // Initialize a variable to store the input number
    int prime;

    while (true) {
        std::cout<<"Please enter a number: "<<std::endl;
        std::cin>>prime;
        bool composite = false;

        // If the user didn't input a number
        if(!std::cin)
        {
            // reset
            std::cin.clear();
            //skip incorrect input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        // If the input is a number
        else
        {
            for (int x=prime-1; x>1; x--)
            {
                if (prime % x == 0)
                {
                    composite = true;
                    break;
                }
            }
            
            if (composite || prime < 2)
            {
                std::cout<<"The entered number is not prime"<<std::endl;
            }
            
            else
                std::cout<<"The entered number is a prime"<<std::endl;
        }

    }
    return 0;
}
