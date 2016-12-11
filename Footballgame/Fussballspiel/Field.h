#pragma once
class CField
{
public:
	CField();
	~CField();

	const int* getGoal(char which_goal); //Gibt die Position des jeweilig geforderten Tors zurück

private:
	const int m_length_x	= 100; //Laenge ist X-Achse
	const int m_width_y		= 130; //Breite ins Y-Achse
	int const m_goal_A[2]	= { 0, 65 }; //Position von Tor A auf dem Spielfeld
	int const m_goal_B[2]	= { 100, 65 }; //Position von Tor B auf dem Spielfeld
};

