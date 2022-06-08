// CALENDAR.H
#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>

using namespace std;

class Event
{
    string title;
    string startDate;
    string startTime;
    string endDate;
    string endTime;
    bool allDayEvent;
    string descrption;
    string location;
    bool priv;

public:
    // default constructor
    Event();

    // overloaded constructor
    Event(string title, string startDate, string startTime, string endDate, string endTime, string descrption, string location, bool priv);
};

#endif