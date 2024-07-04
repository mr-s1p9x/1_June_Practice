#include "Time.h"

#include <ctime>
#include <iostream>

using namespace std;

int Time::s_createdObjects = 0U;
int Time::s_liveObjects = 0U;

Time::Time(const int hour, const int minute, const int second):m_hour(hour), m_minute(minute), m_second(second)
{
    ++s_createdObjects;
    ++s_liveObjects;
}

Time::~Time()
{
    --s_liveObjects;
}

void Time::InfoAboutObjects()
{
    cout << "Created objects: " << s_createdObjects << endl;
    cout << "Live objects: " << s_liveObjects << endl;
}

void Time::Show()
{
    cout << m_hour << ":" << m_minute << ":" << m_second << endl;
}

void Time::ShowCurrentTime()
{
    time_t unixTime = time(nullptr); // Получение текущего времени
    char* dateString = ctime(&unixTime); // Преобразование времени в строку

    if (dateString) {
        cout << dateString << endl; // Вывод даты и времени
    } else {
        cout << "Error converting time" << endl;
    }
}