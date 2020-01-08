#include <iostream>
#include <cmath>

bool isPrime(int&);

int main(int argc, char* argv[]){

  int primeCounter = 1;
  int number = 3;

  while(1){

    if (isPrime(number)){primeCounter++;}

    if (primeCounter == 10001){break;}

    number += 2;
  }

  std::cout << "The 10001st prime is: " << number << '\n';

  return 0;
}

bool isPrime(int &candidate){

  for (int i = 2 ; i <= sqrt(candidate) ; i++){

    if (candidate % i == 0){return false;}
 
  }

  return true;

}
