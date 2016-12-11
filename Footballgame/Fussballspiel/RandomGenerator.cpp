#include "RandomGenerator.h"



CRandomGenerator::CRandomGenerator()
{
}


CRandomGenerator::~CRandomGenerator()
{
}

int CRandomGenerator::generate()
{
	return (rand() % 10+1);
}
