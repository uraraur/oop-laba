#pragma once
#include "test.hpp"

bool TestAnimalNoise(Animal* p, Animals m) {
	switch (m) {
	case Animals::Tigr: return (p->MakeNoise() == "Rrrrr!");
	case Animals::Lion: return (p->MakeNoise() == "Rowwr!");
	case Animals::Dog: return (p->MakeNoise() == "Bark!");
	case Animals::Capybara: return (p->MakeNoise() == "Okay, I pull up!");
	}
}
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
