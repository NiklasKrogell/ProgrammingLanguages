// 
// Niklas Krogell
// Ohjelmointikielet 2025
#include <iostream>
#include <map>
#include <list>
#include "Animal.h"

class Zoo {
private:
    map<string, Animal*> animals;
public:
    Animal* add(Animal* a) {
        Animal* oldAnimal = remove(a->getName());
        animals[a->getName()] = a;
        return oldAnimal;
    }
    Animal* remove(string name) {
        Animal* oldAnimal = nullptr;
        auto it = animals.find(name);
        if (it != animals.end())
        {
            oldAnimal = it->second;
            animals.erase(it);
        }
        return oldAnimal;
    }
    void printSortedByName() {
        printf("------------------------------- Animals sorted by name: ------------------------------\n");
        for (auto a : animals)
        {
            printf("%s:     %s\n",a.first.c_str(), a.second->toString().c_str());
        }
        printf("--------------------------------------------------------------------------------------\n");
    }
    void printSortedByAge() {
        list<Animal*> values;
        for (auto a : animals) {
            values.push_back(a.second);
        }

        values.sort([](Animal* a, Animal* b) {
            return a->getBirth() < b->getBirth();
            });

        printf("------------------------------- Animals sorted by age: ------------------------------\n");
        for (auto a : values) {
            cout << a->toString() << std::endl;
        }
        printf("-------------------------------------------------------------------------------------\n");
    }

    ~Zoo() {
        for (auto a : animals) {
            delete a.second;
        }
        animals.clear();
    }
};

int main()
{
    Zoo zoo;

    Animal* pa = new Tiger("Keijo");
    Animal* sh = new Shark("Jari");
    zoo.add(pa);
    pa->move();
    pa->utter();
    zoo.add(new Tiger("Timo", Date(11, 12, 1990), 200, Gender::Male, Continent::Asia));
    zoo.add(new Shark("Kai", Date(12, 12, 1990), 300, Gender::Male, Sea::Atlantic));
    pa = zoo.remove("Keijo");
    if (pa) {
        cout << "Removed: " + pa->toString() + "\n";
        delete pa;
    }
    zoo.printSortedByAge();
    zoo.printSortedByName();
    sh->move();
    sh->utter();
}

