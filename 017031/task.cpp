#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal
{
public:
	Animal(string name, int age);
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);
	virtual void Speak();
	virtual void Action();
protected:
	string Name;
	int Age;

};
Animal::Animal(string name, int age)
{
	Name = name;
	Age = age; 
}
string Animal::getName()
{
	return Name;
}

void Animal::setName(string name)
{
	Name = name;
}
int Animal::getAge()
{
	return Age;
}
void Animal::setAge(int age)
{
	Age = age;
}
void Animal::Speak()
{
	//empty
}
void Animal::Action()
{
	//empty
}



class Dog :public Animal
{
public:
	Dog(string name, int age);
	virtual void Speak();
	virtual void Action();
};

Dog::Dog(string name, int age):Animal(name, age)
{
	//Empty
}
void Dog::Speak()
{
	cout << "Bark" << endl;
}
void Dog::Action()
{
	cout << "Rawr" << endl;
}




class PetDog :public Dog
{
public:
	PetDog(string name, int age);
	void Speak() override;
	void Action() override;
};
PetDog::PetDog(string name, int age) :Dog(name, age)
{

}
void PetDog::Speak()
{
	cout << "BarkBark" << endl;
}
void PetDog::Action()
{
	cout << "Fetch a stick" << endl;
}


class StrayDog :public Dog
{
public:
	StrayDog(string name, int age);
	void Speak() override;
	void Action() override;
};
StrayDog::StrayDog(string name, int age) :Dog(name, age)
{

}
void StrayDog::Speak()
{
	cout << "woof woof" << endl;
}
void StrayDog::Action()
{
	cout << "Chase Cars" << endl;
}



class Cat :public Animal
{
public:
	Cat(string name, int age);
	void Speak() override;
	void Action() override;
};
Cat::Cat(string name, int age) :Animal(name, age)
{

}
void Cat::Speak()
{
	cout << "Meow" << endl;
}
void Cat::Action()
{
	cout << "Playing with knit" << endl;
}


int main()
{
	vector<Animal> Animals;
	Animals.push_back(Animal("James",10));
	Animals.push_back(Animal("Doge", 10));
	Animals.push_back(Animal("Cate", 10));
	Animals.push_back(Animal("Random Dog", 10));
	Animals.push_back(Animal("Lost Dog", 10));
	Animals.push_back(Animal("Kot", 10));
	Animals.push_back(Animal("Sobaka", 10));


	system("pause");
}