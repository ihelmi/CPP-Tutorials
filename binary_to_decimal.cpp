//  Binary to Decimal.cpp
//  Created by AH.

#include <iostream>
#include <vector>

int main (){

    // Initialize a variable to store the binary number
    int entered_number;
    // Initialize a variable to split the entered number
    int dig;
    // Declare a variable to calculate the decimal number
    int decimal = 0;
    
    // Initialize a vector to store the binary number
    std::vector<int> binary;

    while (true) {
        std::cout<<"Please enter a binary number: "<<std::endl;
        std::cin>>entered_number;
        bool done = false;

        // If the input is not a positive number
        if(entered_number < 0)
        {
            std::cout<<"The number should be greater than 0 "<<std::endl;
        }
        // If the input is not a number
       else if(!std::cin)
        {
            // Reset
            std::cin.clear();
            //skip incorrect input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        // Split the entered number and store it in a vector
        else
        {
            
            for (int x=0; entered_number>0; x++)
            {
                dig = entered_number % 10;
                entered_number /=10;
                binary.push_back(dig);
            }
            
            for (int x=0; x<binary.size(); x++)
            {
                if (binary[x] > 1)
                {
                    std::cout<<"This number is not in a binary format"<<std::endl;
                    break;
                }
                else if (binary[x] == 1)
                {
                    decimal = decimal + pow(2, x);
                    done = true;
                }
            }
            if (done)
            {
                std::cout<<"The decimal number is: "<<decimal<<"\n";
            }
            // Reset the variables
            binary.clear();
            decimal = 0;
        }
    }
    return 0;
}
