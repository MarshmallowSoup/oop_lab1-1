////////////////////////////////////////
// Time.cpp
#include "Time.h"


int Time::minutes()
{   
    int hoursToMinutes = first * 60;
    return hoursToMinutes + second;
}

void Time::read()
{
    int x, y;
    do
    {
        cout << " Hours = "; cin >> x;
        cout << " Minutes = "; cin >> y;
    } while (!init(x, y));
}

void Time::display()
{
    cout << endl;
    cout << "Hours = " << get_first() << endl;
    cout << "Minutes = " << get_second() << endl;
}

bool Time::init(int first, int second)
{

    if (first > 0 && second > 0 && second < 60) {
        set_first(first);
        set_second(second);
        return true;
    }
    else
        return false;
}
