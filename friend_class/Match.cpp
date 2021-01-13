#include "Match.h"
#include <iostream>
using namespace std;

Match::Match(int hour, int min, int sec):m_tTime(hour,min,sec)
{
}

void Match::testTime()
{
	m_tTime.printTime();
	cout << m_tTime.m_iHour << ":" << m_tTime.m_iMinute << ":" << m_tTime.m_iSecond << endl;
}
