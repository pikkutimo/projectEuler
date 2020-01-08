#include <iostream>
#include <cmath>

int main(int argc, char *argv[]){

  int sumOfSquares = 0;
  int squareOfSums = 0;
  int limiter = 100;
  int difference;

  squareOfSums = pow((limiter*(limiter+1) / 2) , 2);
  sumOfSquares = (limiter*(limiter+1)*(2*limiter+1)) / 6;

  difference = squareOfSums - sumOfSquares;

  std::cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: " << difference << '\n';
  return 0;
}
