#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal//Declaration of Animal class
{
public:
	Animal() = default;//Default constructor for class Animal
	Animal(string name, int age);//Constructor overloading for class Animal
	string getName();//Getter function for Name
	int getAge();//Getter function for Age
	void setName(string name);//Setter function for Name
	void setAge(int age);//Setter function for Age
	virtual void Speak();//Virtual function Speak which can be overridden
	virtual void Action();//Virtual function Action which can be overridden
	virtual void Introduce();//Virtual function Introduce which can be overridden
private:
	string Name;//Name property of class Animal
	int Age;//Age property of class Animal

};
Animal::Animal(string name, int age)//Function definition of overloaded constructor of class Animal
{
	setAge(age);
	setName(name);
}
string Animal::getName()//Getter function for Name
{
	return Name;
}
void Animal::setName(string name)//Setter function for Name
{
	Name = name;
}
int Animal::getAge()//Getter function for Age
{
	return Age;
}
void Animal::setAge(int age)//Setter function for Age
{
	Age = age;
}
void Animal::Speak() //Function definition for Speak
{
	cout << "I don't know what am I" << endl;
}
void Animal::Action() //Function definition for Action
{
	cout << "I don't know what I should do" << endl;
}

void Animal::Introduce()//Function definition of Introduce
{
	cout << "I am " << Name << " and I am " << Age << " years old" << endl;
}




class Dog :public Animal//Declaration of class Dog with public inherited from class Animal
{
public:
	Dog() = default;//Default constructor for class Dog
	Dog(string name, int age);//Constructor overloading for class Dog
	virtual void Speak();//Virtual function Speak which can be overridden
	virtual void Action();//Virtual function Action which can be overridden
};
Dog::Dog(string name, int age) :Animal(name, age)//Function definition of overloaded constructor of class Dog
{
	//Copying class Dog data to class Animal
}
void Dog::Speak()//Function definition for overridden Speak
{
	cout << "Bark" << endl;
}
void Dog::Action()//Function definition for overridden Action
{
	cout << "Rawr" << endl;
}





class PetDog :public Dog//Declaration of class PetDog with public inherited from class Dog
{
public:
	PetDog() = default;//Default constructor for class PetDog
	PetDog(string name, int age);//Constructor overloading for class PetDog
	void Speak() override;//Overriding Speak function
	void Action() override;//Overriding Action function
};
PetDog::PetDog(string name, int age) :Dog(name, age)//Function definition of overloaded constructor of class PetDog
{
	//Copying class PetDog data to class Dog
}
void PetDog::Speak()//Function definition for overridden Speak
{
	cout << "BarkBark" << endl;
}
void PetDog::Action()//Function definition for overridden Action
{
	cout << "Fetch a stick" << endl;
}





class StrayDog :public Dog//Declaration of class StrayDog with public inherited from class Dog
{
public:
	StrayDog() = default;//Default constructor for class StrayDog
	StrayDog(string name, int age);//Constructor overloading for class StrayDog
	void Speak() override;//Overriding Speak function
	void Action() override;//Overriding Action function
};
StrayDog::StrayDog(string name, int age) :Dog(name, age)//Function definition of overloaded constructor of class Dog
{
	//Copying class StrayDog data to class Dog
}
void StrayDog::Speak()//Function definition for overridden Speak
{
	cout << "woof woof" << endl;
}
void StrayDog::Action()//Function definition for overridden Action
{
	cout << "Chase Cars" << endl;
}





class Cat :public Animal//Declaration of class Cat with public inherited from class Animal
{
public:
	Cat() = default;//Default constructor for class Cat
	Cat(string name, int age);//Constructor overloading for class Cat
	void Speak() override;//Overriding Speak function
	void Action() override;//Overriding Action function
};
Cat::Cat(string name, int age) :Animal(name, age)//Function definition of overloaded constructor of class Cat
{
	//Copying class Cat data to class Animal
}
void Cat::Speak()//Function definition for overridden Speak
{
	cout << "Meow" << endl;
}
void Cat::Action()//Function definition for overridden Action
{
	cout << "Playing with knit" << endl;
}





int main()
{
	int a;
	Animal* Animals[7];		//Declaring an array of 7 of object of Animal type pointer
	Animal dummyRandom = Animal("Sam", 10);//Declaring object pointers
	Animal* Random = &dummyRandom;
	Animal dummyRandom1 = Animal("Tom", 12);
	Animal* Random1 = &dummyRandom1;
	Dog dummyDoge = Dog("Doggy", 13);
	Dog* Doge = &dummyDoge;
	StrayDog dummyStrayDoge = StrayDog("Sobaka", 5);
	StrayDog* StrayDoge = &dummyStrayDoge;
	PetDog dummyPetDoge = PetDog("Doge", 6);
	PetDog* PetDoge = &dummyPetDoge;
	PetDog dummyPetDoge1 = PetDog("Calculus", 6);
	PetDog* PetDoge1 = &dummyPetDoge1;
	Cat dummyKris = Cat("Kot", 5);
	Cat* Kris = &dummyKris;



	Animals[0] = Random;		//Assigning object as elements of Animal array
	Animals[1] = Random1;
	Animals[2] = Doge;
	Animals[3] = StrayDoge;
	Animals[4] = PetDoge;
	Animals[5] = PetDoge1;
	Animals[6] = Kris;

	for (a = 0; a < 7; a++)		//Looping the Speak and Introduce function of the object that are pointed to
	{
		Animals[a]->Introduce();
		Animals[a]->Speak();
		cout << endl;
	}
	system("pause");
}