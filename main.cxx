/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();

  // Exercise 1.1
  int number = 5;
  std::cout << "Before: " << number << std::endl;
  homework::AddOneRef(number);
  std::cout << "After: " << number << '\n' << std::endl;

  // Exercise 1.2
  int oddNumber = 7;
  int evenNumber = 8;
  std::cout << oddNumber << " is odd? " << std::boolalpha << homework::isOdd(oddNumber) << '\n';
  std::cout << evenNumber << " is odd? " << std::boolalpha << homework::isOdd(evenNumber) << '\n' << std::endl;

  // Exercise 1.3
  float floatValue = 3.14;
  int intValue = homework::floatToInt(floatValue);
  std::cout << floatValue << " as an integer is: " << intValue << '\n' << std::endl;

  // Exercise 1.4
  int factorialInput = 5;
  int factorialResult = homework::factorial(factorialInput);
  std::cout << "Factorial of " << factorialInput << " is: " << factorialResult << std::endl;
}

