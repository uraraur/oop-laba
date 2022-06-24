#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual string MakeNoise() = 0;
};
class Dog :public Animal {
public:
	string MakeNoise()override {
		return "Bark!";
	}
};
class Capybara :public Animal {
public:
	string MakeNoise()override {
		return "Okay, I pull up!";
	}
};
class Cats :public Animal {
public:
	string MakePurr(){
		return "Purr!";
	}
};
class Lion :public Cats {
public:
	string MakeNoise()override {
		return "Rowwr!";
	}
};
class Tigr :public Cats {
public:
	string MakeNoise()override {
		return "Rrrrr!";
	}
};

int main() {
	Lion* l = new Lion;
	Animal* var = l;
	cout << var->MakeNoise() << endl;
	Cats* cat = l;
	cout << cat->MakePurr() << endl;
	var = new Dog;
	cout << var->MakeNoise() << endl;
	delete var;
}

