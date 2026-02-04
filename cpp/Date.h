#pragma once
using namespace std;
#include <string>
class Date
{
private:
    int day;
    int month;
    int year;
    void setDay(int day) { this->day = day; }
    void setMonth(int month) { this->month = month; }
    void setYear(int year) { this->year = year; }
    static bool isLeapYear(int year);
public:
    Date(int day = 1, int month = 1, int year = 2000);
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }
    bool setValues(int day, int month, int year);
    string toString() const;
};
bool operator<(const Date& d1, const Date& d2);


