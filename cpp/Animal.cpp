#include "Animal.h"

// Animal
Animal::Animal(const string& name, const Date& birth, double weight, Gender gender) {
	setName(name);
	setBirth(birth);
	setWeight(weight);
	setGender(gender);
}

void Animal::setName(const string& name) {
	this->name = name;
}
void Animal::setBirth(const Date& birth) {
	this->birth = birth;
}
void Animal::setWeight(const double weight) {
	this->weight = weight;
}
void Animal::setGender(const Gender& gender) {
	this->gender = gender;
}
string Animal::toString() const {
	return "Name: " + name + " birth: " + birth.toString() + " gender: " + (gender == Gender::Female ? "female" : gender == Gender::Male ? "male" : "unknown");
}

// Tiger
Tiger::Tiger(const string& name, const Date& birth, double weight, Gender gender, Continent continent) : Animal(name, birth, weight, gender), continent(continent) {
	setContinent(continent);
}
void Tiger::setContinent(const Continent& continent) {
	this->continent = continent;
}
void Tiger::move() {
	cout << "Tiger " + name + " walks" << endl;
}
void Tiger::utter() {
	cout << "Tiger " + name + " meows" << endl;
}
string Tiger::toString() const {
	return "Name: " + name + ", birth: " + birth.toString() + ", gender: " + (gender == Gender::Female ? "female" : gender == Gender::Male ? "male" : "unknown") + ", Continent: " +
		(continent == Continent::NA ? "North America" : continent == Continent::SA ? "South America" : continent == Continent::Europe ? "Europe" : continent == Continent::Asia ? "Asia"
		: continent == Continent::Africa ? "Africa" : continent == Continent::Australia ? "Australia" :"unknown");
}

// Shark

Shark::Shark(const string& name, const Date& birth, double weight, Gender gender, Sea sea) : Animal(name, birth, weight, gender), sea(sea) {
	setSea(sea);
}
void Shark::setSea(const Sea& sea) {
	this->sea = sea;
}
void Shark::move() {
	cout << "Shark " + name + " swims" << endl;
}
void Shark::utter() {
	cout << "Shark " + name + " makes bubbles with it's mouth" << endl;
}
string Shark::toString() const
{
	return "Name: " + name + ", birth: " + birth.toString() + ", gender: " + (gender == Gender::Female ? "female" : gender == Gender::Male ? "male" : "unknown") + ", Sea: " +
		(sea == Sea::Arctic ? "Arctic" : sea == Sea::Atlantic ? "Atlantic" : sea == Sea::Indian ? "Indian" : sea == Sea::Pacific ? "Pacific"
			: sea == Sea::Southern ? "Southern" : "unknown");
}
