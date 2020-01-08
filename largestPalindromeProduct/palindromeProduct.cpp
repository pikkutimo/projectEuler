#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

bool isPalindrome(int&);

int main(int argc, char *argv[]){

  int upperlimit = 998001; //999*999
  int largestPalindrome = 0;
  int firstNumber = 0;
  int secondNumber = 0;
  bool found = false;

  while(!found){
    if(isPalindrome(upperlimit)){
      for (int divider = 998 ; divider > 900 ; divider--){
	if (upperlimit % divider == 0 && upperlimit / divider <= 999){
	  largestPalindrome = upperlimit;
	  firstNumber = divider;
	  secondNumber = upperlimit / divider;
	  found = true;
	}
      }
    }
    upperlimit--;
  }

  std::cout << "Largest palindrome product of two three-digit numbers is " << largestPalindrome << " and the numbers are " << firstNumber << " and " << secondNumber << '\n';

  return 0;
}

bool isPalindrome(int &candidate){

  std::string candidateString = std::to_string(candidate);
  std::string reverseString = candidateString;
  std::reverse(reverseString.begin(), reverseString.end());

  if (candidateString == reverseString){ 
    return true;
  }
  return false;

}

