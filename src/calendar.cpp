#include <iostream>
#include "calendar.h"

using namespace std;

/**
 * @brief Construct a new Event:: Event object
 *
 * @param title
 * @param startDate
 * @param startTime
 * @param endDate
 * @param endTime
 * @param allDayEvent
 * @param descrption
 * @param location
 * @param priv
 */
Event::Event(string title, string startDate, string startTime, string endDate, string endTime, string descrption, string location, bool priv)
{
    this->title = title;
    this->startDate = startDate;
    this->startDate = startTime;
    this->endDate = endDate;
    this->endTime = endTime;
    this->allDayEvent = false;
    this->descrption = descrption;
    this->location = location;
    this->priv = priv;
}

/**
 * @brief Construct a new Event:: Event object
 *
 */
Event::Event()
{
    this->title = "";
    this->startDate = "";
    this->startDate = "";
    this->endDate = "";
    this->endTime = "";
    this->allDayEvent = false;
    this->descrption = "";
    this->location = "";
    this->priv = false;
}