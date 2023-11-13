#pragma once
#include "IAnimal.h"

class Human : public IAnimal {

	void MakeSound() override {
		printf("fatality...\n");
	};

};