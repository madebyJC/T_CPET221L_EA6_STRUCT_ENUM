#include <iostream>

enum age {
    Minor = 17,
    Legal = 18,
    Senior = 60
};

int main() {
    int minor = Minor;
    int legal = Legal;
    int senior = Senior;
    int age;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if (age <= Minor){
        std::cout << "You are a Minor!" << std::endl;
    } else if (age >= Legal && age < Senior){
        std::cout << "You are a Legal!" << std::endl;
    } else if (age >= senior){
        std::cout << "You are Senior!" << std::endl;
    }
}
