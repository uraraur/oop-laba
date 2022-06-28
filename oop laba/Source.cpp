#pragma once
#include <iostream>
#include "Source.hpp"

using namespace std;

string Dog::MakeNoise(){
	return "Bark!";
}
string Capybara::MakeNoise(){
	return "Okay, I pull up!";
}

string Cat::MakePurr() {
	return "Purr!";
}
string Lion::MakeNoise() {
	return "Rowwr!";
}
string Lion::Colour(){
	return "Yellow";
}
string Tigr::MakeNoise(){
	return "Rrrrr!";
}
string Tigr::Colour(){
	return "Orange-black";
}

