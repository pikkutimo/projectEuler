#include <iostream>
#include <vector>

int main(int argc, char* argv[]){

    //Creating the nth triangle number
    auto n = 7;
    auto number = 0;

    for (int i = 1 ; i <= n ; ++i){
        number += i;
    }

    //How many divisors?
    std::vector<int> listOfDivisors;

    for (int divisor = 1 ; divisor <= number ; ++divisor){
        if (number % divisor == 0){
            listOfDivisors.emplace_back(divisor);
        }
    }

    //Print the results
    std::cout << "The nth triangle number is " << number << std::endl;
    std::cout << "There are " << listOfDivisors.size() << " divisors in that: ";

    for(auto number : listOfDivisors){
        std::cout << number << ", ";
    }

    std::cout << std::endl;
    return 0;
}