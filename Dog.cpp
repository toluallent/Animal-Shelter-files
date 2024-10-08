/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the dog.cpp for the dog class
Changelog - No major changes to the program
*/
#include "Dog.h"
#include <iostream>
using namespace std;

int Dog::numberOfDogs = 0;

Dog::Dog(const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound)
    : Animal("dog", name, age, weight, breed, color, health, sound) {
    numberOfDogs++;
    dogNumber = numberOfDogs;
}


void Dog::introduction() const{ 
    cout << "Dog " << dogNumber << endl <<"My name is " << getName() << "I am " << getAge() << " years old, weigh " << getWeight() << " pounds. My breed is " << getBreed() << ". My color is " << getColor() << ". I am in " << getHealth() << " health." << getSound() << "!" << endl;
}

int Dog::getNumberOfDogs() {
    return numberOfDogs;
}

