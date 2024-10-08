/*Operation Kindness
This program is a small database system for an animal shelter
Changelog - No major changes to the program
*/


#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h" 
#include "Dog.h" 

using namespace std;




int main() {
    
    vector<Animal> animals;
    animals.push_back(Animal("bird\n","Perry",4,5,"Mynah","black", "okay" ,"Hello"));
    animals.push_back(Animal("hamster\n","Chippy",2,1,"Syrian","tan","good","Squeak"));
    
    vector<Cat>cats;
    cats.push_back(Cat("Morris\n",9,3,"Kitten","yellow","good","Moan"));
    cats.push_back(Cat("Mittens\n",1,1,"Calico","brown and white","good","Mew"));
    cats.push_back(Cat("Junior\n",1,2.0,"Tabby","Black","Bad","meow"));
    cats.push_back(Cat("Priss\n",4,8,"Kitten","white","good","Mew"));
    cats.push_back(Cat("Charcoal\n",1,2,"Siamese","white and yellow","good","Hiss"));
    cats.push_back(Cat("Charmin\n",1,3,"Parvo","white","good","Meow"));
    cats.push_back(Cat("Heinz\n",5,2,"Parvo","Red","okay","Meow"));
    cats.push_back(Cat("Cute Stuff\n",1,2,"Kitten","yellow","good","Purr"));

    vector<Dog> dogs;
    dogs.push_back(Dog("Bitsy\n",4,6,"Minx","grey","good","Woof"));
    dogs.push_back(Dog("Fido\n",5,7,"Dalmatian","spotted","good","Bark"));
    dogs.push_back(Dog("Rex\n",3,5,"Puffy","brown and white","good","Bark Bark"));
    dogs.push_back(Dog("Spot\n",6,8,"Dalmation","spotted","decent","Woof"));

    

    cout << "Other animals: " << endl;
    for (const auto& animal: animals){
        animal.introduction();
        cout << endl;
    }
    cout << "Cat: " << endl;
    for (const auto& cat : cats) {
        cat.introduction();
        cout << endl;
    }
    
    cout << "Dogs: " << endl;
    for (const auto& dog : dogs) {
        dog.introduction();
        cout << endl;
    }
    

    return 0;
}

