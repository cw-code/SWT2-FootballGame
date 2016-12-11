#include "Field.h"



CField::CField()
{
}


CField::~CField()
{
}

const int* CField::getGoal(char which_goal)
{
	const int *ptrGoal;
	if (which_goal == 'A')
	{
		ptrGoal = &m_goal_A[2];
	}
	else
	{
		ptrGoal = &m_goal_B[2];
	}

	return ptrGoal;
}
