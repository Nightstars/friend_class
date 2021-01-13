#pragma once
#include "Time.h"

class Match
{
public:
	Match(int hour, int min, int sec);
	void testTime();
private:
	Time m_tTime;
};

