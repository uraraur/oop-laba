#include <iostream>
#include <string>

using namespace std;

class Animal { //abstract animal class
public:
	virtual string MakeNoise() = 0; //abstract makenoise function
};



//----------------------------Animals implementations------------------------------------
class Dog :public Animal {
public:
	string MakeNoise() override {
		return "Bark!";
	}
};
class Capybara :public Animal {
public:
	string MakeNoise() override {
		return "Okay, I pull up!";
	}
};

//Cats ^__^
class Cat :public Animal { //cat abstract class
public:
	string MakePurr(){
		return "Purr!";
	}
	virtual string Colour() = 0; //abstract colour function
};
class Lion :public Cat {
public:
	string MakeNoise() override {
		return "Rowwr!";
	}
	string Colour() override {
		return "Yellow";
	}
};
class Tigr :public Cat {
public:
	string MakeNoise() override {
		return "Rrrrr!";
	}
	string Colour() override {
		return "Orange-black";
	}
};

//enum for testing convenience 
enum class Animals {  
	Tigr, Lion, Dog, Capybara
};
enum class Cats {
	Tigr, Lion
};

//(check if animals do noise that they should do)
bool TestAnimalNoise(Animal* p, Animals m) {
	switch (m) {
		case Animals::Tigr: return (p->MakeNoise() == "Rrrrr!");
		case Animals::Lion: return (p->MakeNoise() == "Rowwr!");
		case Animals::Dog: return (p->MakeNoise() == "Bark!");
		case Animals::Capybara: return (p->MakeNoise() == "Okay, I pull up!");
	}
}
//(check if cats have colour that they should have)
bool TestCatColour(Cat* p, Cats m) {
	switch (m) {
	case Cats::Tigr: return (p->Colour() == "Orange-black");
	case Cats::Lion: return (p->Colour() == "Yellow");
	}
}

bool test() {
	Tigr* ShereKhan = new Tigr;
	Lion* Simba = new Lion;
	Dog* Bob = new Dog;
	Capybara* CoolGuy = new Capybara;

	bool v1 = TestAnimalNoise(ShereKhan, Animals::Tigr);
	bool v2 = TestAnimalNoise(Simba, Animals::Lion);
	bool v3 = TestAnimalNoise(Bob, Animals::Dog);
	bool v4 = TestAnimalNoise(CoolGuy, Animals::Capybara);
	bool v = v1 && v2 && v3 && v4;

	bool c1 = TestCatColour(ShereKhan, Cats::Tigr);
	bool c2 = TestCatColour(Simba, Cats::Lion);
	bool c = c1 && c2;

	delete ShereKhan;
	delete Simba;
	delete Bob;
	delete CoolGuy;

	return (v && c);
}

int main() {
	Lion* l = new Lion;
	Animal* var = l;
	cout << var->MakeNoise() << endl;
	Cat* cat = l;
	cout << cat->MakePurr() << endl;
	var = new Dog;
	cout << var->MakeNoise() << endl;
	delete var;
	cout << "Test result: " << test();
}

