#include <iostream>
#include <cmath>

int numberOfDivisors(int &);

int main(int argc, char* argv[]){
   
    auto number = 0;
    auto term = 1;

    while (numberOfDivisors(number) < 500){
        number += term;
        ++term;
    }

    std::cout << number << std::endl;

    return 0;
}

int numberOfDivisors(int &numberToTest){
    auto counter = 0;
    auto limit = sqrt(numberToTest);

    for (int i = 1 ; i <= limit ; ++i){
        if (numberToTest % i == 0){
            counter += 2;
        }
    }

    if (limit*limit == numberToTest){
        --counter;
    }

    return counter;
}