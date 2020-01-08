#include<iostream>

int main(int argc, char *argv[]){

  int first = 3;
  int second = 5;
  int limit = 1000;
  int sumOfMultiples = 0;

  for (int it = 1 ; it < limit ; ++it){

    if( it % 3 == 0 || it % 5 == 0){

      sumOfMultiples += it;

    }
  }

  std::cout << "The sum of the multiples is " << sumOfMultiples << '\n';

}
