/*Operation Kindness
Tolulope Allen-Taylor
This program is a small database system for an animal shelter
This is the animal.cpp program for the animal class
Changelog - No major changes to the program
*/

#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(const string& type, const string& name, int age, float weight, const string& breed, const string& color, const string& health, const string& sound)
    : type(type), name(name), age(age), weight(weight), breed(breed), color(color), health(health), sound(sound) {}

void Animal::introduction() const {
    cout << "I am a " << type << "My name is " << name << " I am " << age << " years old, weigh " << weight << " pounds. My breed is " << breed << ". My color is " << color << ". I am in " << health << " health condition. " << sound << "!"<< endl;
}


const string& Animal::getType() const {
    return type;
}

const string& Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

float Animal::getWeight() const {
    return weight;
}

const string& Animal::getBreed() const {
    return breed;
}

const string& Animal::getColor() const {
    return color;
}

const string& Animal::getHealth() const {
    return health;
}

const string& Animal::getSound() const {
    return sound;
}

void Animal::setType(const string& type) {
    this->type = type;
}

void Animal::setName(const string& name) {
    this->name = name; 
}

void Animal::setAge(int age) {
    this->age = age; 
}

void Animal::setWeight(float weight) {
    this->weight = weight; 
}

void Animal::setBreed(const string& breed) {
    this->breed = breed;
}

void Animal::setColor(const string& color) {
    this->color = color; 
}

void Animal::setHealth(const string& health) {
    this->health = health; 
}

void Animal::setSound(const string& sound) {
    this->sound = sound; 
}
