#include <iostream>
#include <cmath>
#include <bitset>

bool isPrime(int&);

int main(int argc, char *argv[]){

  const int length = 2000000;
  long long int sum = 0;
  std::bitset<length> numberRange;
  numberRange.set();
  numberRange.set(0, false);
  numberRange.set(1, false);

  for (int i = 2 ; i <= length ; ++i){
    if(isPrime(i)){
      for(int j = i + i ; j <= length; j += i ){
	numberRange[j] = false;
      }
    }
  }

  for (int k = 2 ; k <= length ; ++k){
    if (numberRange[k] == 1){
      sum += k;
      //std::cout << k << ". " << sum << '\n';
    }
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
