// Palindrome Tutorial
// Created by AH on 9/19/20.

#include <iostream>

int main() {
    
    // Initialize two variables to compare the input string
    std::string original_word;
    std::string reversed_word;

    while (true) {
        std::cout<<"Please enter a word: "<<std::endl;
        std::cin>>original_word;
        
        // Declare a boolian to check if the entered word has a number
        bool is_it_digit = std::any_of(original_word.begin(), original_word.end(), ::isdigit);
        
        // Check if the user entered a word
        if (is_it_digit)
        {
            std::cout << "Please enter a valid word"<<std::endl;
        }
        
        // If the user entered a word
        else
        {
        // Reverse the entered word
            reversed_word = original_word;
            std::reverse(reversed_word.begin(), reversed_word.end());
        
        // Compare the words
            if (original_word==reversed_word)
            {
                std::cout << "This word is a palindrome"<<std::endl;;
            }
            else
                std::cout << "This word is not a palindrome"<<std::endl;;
        }
    }
    
    return 0;
}
