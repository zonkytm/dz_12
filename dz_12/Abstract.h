#ifndef abstract_h

#define abstract_h

#include <iostream>
#include <string>

using namespace std;


class Animal {
protected:
	int age;
	string color;
public:
	string sort;
	Animal(int age, string color) : age(age), color(color) {
	

	}
	virtual void voice() = 0;
	

};



class Parrot :public Animal {
public:
	
	Parrot(int age, string color) :Animal(age, color) {
		
		this->sort = "Parrot";
	}
	void voice() override {
		cout << "sing\n";
	}
};


class Dog :public Animal {
public:
	Dog(int age, string color) :Animal(age, color) {
		
		this->sort = "Dog";
	}
	void voice() override {
		cout << "Gawg\n";
	}
};


class Cat :public Animal {
public:
	Cat(int age, string color) :Animal(age, color) {
		
		this->sort = "Cat";
	}
	void voice() override {
		cout << "Meow\n";
	}
};



#endif