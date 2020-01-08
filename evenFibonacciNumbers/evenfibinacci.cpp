#include<iostream>

int main(int argc, char *argv[]){

  unsigned int firstNumber = 0;
  unsigned int secondNumber = 1;
  unsigned int currentNumber = 0;
  long long int sum = 0;

  while(1){

    currentNumber = firstNumber + secondNumber;
    std::cout << "The current number " << currentNumber << '\t';
    if (currentNumber >= 4000000){break;}

    firstNumber = secondNumber;
    secondNumber = currentNumber;
    
    if (currentNumber % 2 == 0){
      std::cout << "Even number! ";
      sum += currentNumber;
      std::cout << "The sum is " << sum  << '\n';
    }
    else{
      std::cout << '\n';
    }
  }

  std::cout << "The sum of even Fibonacci numbers not exceeding 4 000 000 is " << sum << '\n';

  return 0;
}
