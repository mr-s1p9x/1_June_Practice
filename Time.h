#ifndef INC_1JUNE_PRACTICELESSON_TIME_H
#define INC_1JUNE_PRACTICELESSON_TIME_H
#pragma once // Директива, обеспечивающая, чтобы файл включался только один раз при компиляции

class Time
{
private:
    // Приватные переменные-члены класса, недоступные извне
    int m_hour;
    int m_minute;
    int m_second;



public:
    // Статические переменные, общие для всех экземпляров класса
    static int s_createdObjects; // Счётчик созданных объектов класса
    static int s_liveObjects;    // Счётчик существующих объектов класса

    // Конструктор класса
    Time(const int hour, const int minute, const int second);

    // Деструктор класса
    ~Time();

    // Метод для вывода времени, установленного в объекте
    void Show();

    // Статический метод для вывода информации о количестве объектов
    static void InfoAboutObjects();
    // Статический метод для отображения текущего системного времени
    static void ShowCurrentTime();
};

#endif //INC_1JUNE_PRACTICELESSON_TIME_H
