#pragma once
#ifndef _VENUE_H_
#define _VENUE_H_
#include<string>

class Venue {
private:
    Event scheduleEvents[12]; // defines a set of 12 events at the venue
    int numEvents; // the number of events at the venue
    bool validTime(int time); // is that event at a valid time
public:
    void addEvent(int time, string name); // adding the event to the venue
    Event findEvent(int time); // finding the time of that event
    Event findEvent(string name); // finding the name of that event.
};
#endif