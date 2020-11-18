//  Switch case tutorial
//  Created by A H on 16/11/2020.

#include <iostream>
#include <unistd.h>

enum class State
{
  case_one,
  case_two,
  case_three,
  end
};

int main()
{
  State state;
  // The default case is case ONE
  state = State::case_one;

  int state_number;
  
  while (true)
  {
    // Check the "state" and jump to according case
    switch(state)
    {
      case State::case_one:
      {
    std::cout<< "You are in case ONE, enter (2) for case TWO or (3) for case THREE or (4) for case END: ";
    std::cin>> state_number;

    // If the user didn't input a number
        if(!std::cin)
        {
            // reset
            std::cout << "Please enter a correct number" << std::endl;
            std::cin.clear();
            //skip incorrect input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (state_number == 2)
        {
          state = State::case_two;
          break;
        }
        else if (state_number == 3)
        {
          state = State::case_three;
          break;
        }
        else if (state_number == 4)
        {
          state = State::end;
          break;
        }
        else
        {
        std::cout << "Please enter a correct number" << std::endl;
          break;
        }
      }
      break;
      
      case State::case_two:
      {
        std::cout << "This is case TWO" << std::endl;
        std::cout << "The number of this case is: " << int(State::case_two) +1 << std::endl;
        std::cout << "Sending you back to the default case (Case ONE)" << std::endl;
        state = State::case_one;
        break;
      }
      break;

      case State::case_three:
      {
        std::cout << "This is case THREE" << std::endl;
        std::cout << "The number of this case is: " << int(State::case_three) +1 << std::endl;
        std::cout << "Sending you back to the default case (Case ONE)" << std::endl;
        state = State::case_one;
        break;
      }
      break;

      case State::end:
      {
        std::cout << "This is case END" << std::endl;
        std::cout << "The number of this case is: " << int(State::end) +1 << std::endl;
        std::cout << "Sending you back to the default case (Case ONE)" << std::endl;
        state = State::case_one;
        break;
      }
      break;

    }
    
  }

  return 0;
}

// Use the folloiwng to compile the code
//clang++ -std=c++11 switch_case.cpp -o switch_case