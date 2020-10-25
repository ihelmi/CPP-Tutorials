//  Map.cpp
//  Created by A H on 10/01/20.

#include <iostream>
#include <vector>

int main (){

    // Initialize a variable to store the input number
    int number;
    
    // Initialize a vector to store the binary number
    std::vector<int> binary;

    while (true) {
        std::cout<<"Please enter a number: "<<std::endl;
        std::cin>>number;

        // If the input is not a positive number
        if(number < 0)
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
        
        // If the input is a number
        else
        {
            std::cout<<"The factorial of "<<number<<" is: ";
            
            for (int x=0; number>0; x++)
            {
                binary.push_back(number % 2);
                number = number/2;
            }
            
            // Reverse the vector to display the correct order of the binary
            std::reverse(binary.begin(),binary.end());
            for (int x=0; x<binary.size(); x++)
            {
                std::cout<<binary[x];
            }
            std::cout<<"\n";
            
            // Reset the vector
            binary.clear();
        }
    }
    return 0;
}
