#pragma once

class Match;
class Time
{
	friend Match;
public:
	Time(int hour, int min, int sec);
private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};

