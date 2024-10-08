/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the dog class
Changelog - No major changes to the program
*/
#ifndef DOG_H
#define DOG_H

#include "Animal.h"
using namespace std;

class Dog : public Animal {
private:
    int dogNumber;
    static int numberOfDogs;

public:
    Dog(const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound);
    void introduction() const; 
    static int getNumberOfDogs();
};

#endif // DOG_H
