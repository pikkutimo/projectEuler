#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int&);

int main(int argc, char *argv[]){

  std::vector<int> numberRange;
  std::vector<int> primeNumbers;
  std::vector<int> dividerCount;
  long int product = 1;

  for (int i = 1 ; i <= 20 ; i++){
    numberRange.emplace_back(i);
  }

  for(auto number : numberRange){
    if (isPrime(number) && number != 1){
      primeNumbers.emplace_back(number);
      dividerCount.emplace_back(0);
    }
  }

  for(int i = 0 ; i < numberRange.size() ; i++){
    for(int j = 0 ; j < primeNumbers.size() ; j++){
	int counter = 0;
	while(numberRange.at(i) % primeNumbers.at(j) == 0){
	  numberRange.at(i) = numberRange.at(i) / primeNumbers.at(j);
	  counter++;
	  if(counter > dividerCount.at(j)){
	    dividerCount.at(j) = counter;
	  }
        }
    }
  }

  for(int j = 0 ; j < primeNumbers.size() ; j++){
    product *= pow(primeNumbers.at(j), dividerCount.at(j));
  }

  std::cout << "\nThe smallest positive number that is evenly divisible by all of the numbers from 1 to 20:\t" << product << '\n';
  return 0;
}

bool isPrime(int &candidate){

  for (int divider = 2 ; divider <= sqrt(candidate) ; divider++){
    if(candidate % divider == 0 ){ return false;}
  }

  return true;
}
