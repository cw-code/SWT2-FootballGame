#pragma once
#include "Player.h"

const int MAX_PLAYER = 11;

class CTeam
{
public:
	CTeam();
	~CTeam();

private:
	CPlayer* m_playerArr[MAX_PLAYER]; 
};

