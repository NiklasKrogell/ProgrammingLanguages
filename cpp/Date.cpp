#include "Date.h"
#include <string.h>

bool Date::isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

Date::Date(int day, int month, int year)
{
    if (!setValues(day, month, year))
        setValues(1, 1, 2000);
}

bool Date::setValues(int day, int month, int year)
{
    if (year < 1900 || year > 2030) return false;
    if (month < 1 || month > 12) return false;
    int maxDays[] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) maxDays[2] = 29;
    if (day < 1 || day > maxDays[month]) return false;
    setDay(day);
    setMonth(month);
    setYear(year);
    return true;
}

string Date::toString() const
{
    return to_string(day) + "." + to_string(month) + "." + to_string(year);
}

bool operator<(const Date& d1, const Date& d2)
{
    if(d1.getYear() < d2.getYear()) return true;
    if(d1.getYear() > d2.getYear()) return false;
    if(d1.getMonth() < d2.getMonth()) return true;
    if(d1.getMonth() > d2.getMonth()) return false;
    if(d1.getDay() < d2.getDay()) return true;
    return false;
}