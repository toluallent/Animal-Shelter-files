/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the animal class
Changelog - No major changes to the program
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
   string type;
   string name;
   int age;
   float weight;
   string breed;
   string color;
   string health;
   string sound;
public:
    Animal(const string& type, const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound);
    void introduction() const;
    
    const string& getType() const;
    const string& getName() const;
    int getAge() const;
    float getWeight() const;
    const string& getBreed() const;
    const string& getColor() const;
    const string& getHealth() const;
    const string& getSound() const;
    void setType(const string& type);
    void setName(const string& name);
    void setAge(int age);
    void setWeight(float weight);
    void setBreed(const string& breed);
    void setColor(const string& color);
    void setHealth(const string& health);
    void setSound(const string& sound);
};

#endif 
