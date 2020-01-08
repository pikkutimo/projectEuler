#include <iostream>
#include <cmath>

int main(int argc, char *argv[]){

  /*
  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

    a^2 + b^2 = c^2

  For example, 32 + 42 = 9 + 16 = 25 = 52.

  There exists exactly one Pythagorean triplet for which a + b + c = 1000.
  Find the product abc.
  */

  int sum = 1000;
  int a;
  int b;
  int c = 0;
  bool found = false;

  for (a = 1 ; a < (sum/3) ; a++){
    for (b = a ; b < (sum/2) ; b++){
	c = sum - a - b;
	if(a * a + b * b == c * c){
	  found = !found;
	  break;
	}
    }
    if(found){break;}
  }

  std::cout << "The triplet: " << a << ", " << b << ", " << c << ". The product of the triplet is " << a*b*c << '\n';
  return 0;
}
