#pragma once
#include "IAnimal.h"

class Dog : public IAnimal {

	void MakeSound() override {
		printf("wooo\n");
	};

};