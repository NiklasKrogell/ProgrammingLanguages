
#pragma once
using namespace std;
#include "Date.h"
#include <iostream>
#include <string>

enum Gender{ Male, Female };
enum Continent{ NA, SA, Europe, Asia, Africa, Australia };
enum Sea { Pacific, Atlantic, Indian, Southern, Arctic };

class Animal
{	
protected:
	string name;
	Date birth;
	double weight;
	Gender gender;
public:
	Animal(const string &name = "Elukka",const Date &birth = Date(), double weight = 100, Gender gender = Gender::Male);
	string getName() const { return this->name; }
	Date getBirth() const { return this->birth; }
	double getWeight() const { return this->weight; }
	Gender getGender() const { return this->gender; }
	void setName(const string& name);
	void setBirth(const Date& birth);
	void setWeight(const double weight);
	void setGender(const Gender& gender);

	virtual void move() = 0;
	virtual void utter() = 0;

	virtual string toString() const;
};

class Tiger : public Animal {
private:
	Continent continent;
public:
	Tiger(const string& name = "Elukka", const Date& birth = Date(), double weight = 100, Gender gender = Gender::Male, Continent continent = Continent::Europe);
	Continent getContinent() const { return this->continent; }
	void setContinent(const Continent& continent);
	void move();
	void utter();
	string toString() const;
};

class Shark : public Animal {
private:
	Sea sea;
public:
	Shark(const string& name = "Elukka", const Date& birth = Date(), double weight = 100, Gender gender = Gender::Male, Sea sea = Sea::Arctic);
	Sea getSea() const { return this->sea; }
	void setSea(const Sea& sea);
	void move();
	void utter();
	string toString() const;
};

