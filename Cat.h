/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the cat class
Changelog - No major changes to the program
*/
#ifndef CAT_H
#define CAT_H

#include "Animal.h"

using namespace std;

class Cat : public Animal {
private:
    int catNumber;
    static int numberOfCats;

public:
    Cat(const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound);
    void introduction() const; 
    static int getNumberOfCats();
};

#endif // CAT_H

