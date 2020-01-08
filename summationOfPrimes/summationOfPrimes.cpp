#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

bool isPrime(int&);

int main(int argc, char *argv[]){

  int counter = 0;
  int length = 2000000;
  long long int sum = 0;
  std::vector<bool> numberRange (length, true); 
  numberRange.at(0) = false;
  numberRange.at(1) = false;

  for (int i = 2 ; i < (int)numberRange.size() ; i++){
    if(isPrime(i)){
      for(int j = i + i ; j < (int)numberRange.size() ; j += i ){
	numberRange.at(j) = false;
      }
    }
  }

  for (auto val : numberRange){
    if (val == 1){
      sum += counter;
      //std::cout << counter << ". " << sum << '\n';
    }
    counter++;
  }

  std::cout << "The sum of all the primes under 2 000 000 is " << sum << '\n';
  return 0;
}

bool isPrime(int &candidate){

  if (candidate == 2 || candidate == 3){return true;}
  else if (candidate % 2 == 0 || candidate % 3 == 0){return false;}
  else{
    for (int i = 5 ; i < sqrt(candidate) ; i++){
      if(candidate % i == 0) {return false;}
    }
  }
  
  return true;

}
