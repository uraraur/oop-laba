#pragma once
#include <iostream>
#include "Source.hpp"
#include "test.hpp"

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
