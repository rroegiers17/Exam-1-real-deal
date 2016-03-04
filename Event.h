#pragma once
#ifndef _EVENT_H_
#define _EVENT_H_
#include <string>
using namespace std;

class Event{
private:
    int Time; // what time is the event at
    string Title; // the title of the event
public:
    Event(); // default constructor
    Event(int time, string name); // creates an event with name and time
    int getTime(); // returns the time of the event
    string getTitle(); // returns the name of the event
    void setTime(int t); // sets the time of the event
    void setTitle(string name); // sets the title of the event
    
};
#endif
