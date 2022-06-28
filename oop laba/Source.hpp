#pragma once
#include <string>

using namespace std;

class Animal { //abstract animal class
public:
	virtual string MakeNoise() = 0; //abstract makenoise function
};

//----------------------------Animals implementations------------------------------------
class Dog :public Animal {
public:
	string MakeNoise() override;
};
class Capybara :public Animal {
public:
	string MakeNoise() override;
};

//Cats ^__^
class Cat :public Animal { //cat abstract class
public:
	string MakePurr();
	virtual string Colour() = 0; //abstract colour function
};
class Lion :public Cat {
public:
	string MakeNoise() override;
	string Colour() override;
};
class Tigr :public Cat {
public:
	string MakeNoise() override;
	string Colour() override;
};

//enum for testing convenience 
enum class Animals {  
	Tigr, Lion, Dog, Capybara
};
enum class Cats {
	Tigr, Lion
};

