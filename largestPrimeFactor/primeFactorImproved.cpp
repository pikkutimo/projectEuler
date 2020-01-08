#include <iostream>
#include <cmath>

int nextPrime(int);
bool isPrime(long long int);

int main(int argc, char *argv[]){

  long long int toFactorize = 600851475143;
  long long int prime = 2;
  long long int tempToFactorize = 0;

  //Factoring
  while(1){

    tempToFactorize = toFactorize;

    if (tempToFactorize % prime == 0){

      toFactorize = tempToFactorize / prime;

      if (toFactorize == 1){
          std::cout << "The largest prime factor is " << tempToFactorize << '\n';
          break;
        
      }
    }
      prime = nextPrime(prime);
  }


  return 0;
}


int nextPrime(int counter){

  bool primeFound = false;
  counter++;

  while(!primeFound){
    if (isPrime(counter)){return counter;}
    counter++;
  }
  return 0;
}

bool isPrime(long long int candidate){

  long long int upperLimit = sqrt(candidate);
  for (long long int divider = 2 ; divider <= upperLimit ; divider++){
    if(candidate % divider == 0){ return false;}
  }
  
  return true;
}
