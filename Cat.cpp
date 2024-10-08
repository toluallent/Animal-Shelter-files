/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the cat.cpp file for the cat class
Changelog - No major changes to the program
*/
#include "Cat.h"
#include <iostream>

using namespace std;

int Cat::numberOfCats = 0;

Cat::Cat(const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound)
    : Animal("cat", name, age, weight, breed, color, health, sound) {
    numberOfCats++;
    catNumber = numberOfCats;
}

void Cat::introduction() const {
    cout << "Cat " << catNumber << endl << "My name is " << getName() << "I am " << getAge() << " years old, weigh " << getWeight() << " pounds. My breed is " << getBreed() << ". My color is " << getColor() << ". I am in " << getHealth() << " condition. " << getSound() << "!" << endl;
}

int Cat::getNumberOfCats() {
    return numberOfCats;
}
