
#include "Event.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

Event::Event() // default constructor. the name is free and time is -1
{
    Title = "free";
    Time = -1;
}

Event::Event(int time, string name) // constructor to get users inputs
{
    Time = time;
    Title = name;
}
int Event::getTime() // This will return the time-- getter
{
    return Time;
}
string Event::getTitle() // this will return the name of the event -- getter
{
    return Title;
}
void Event::setTime(int t) // this will set the time to a specific event
{
    Time = t;
}
void Event::setTitle(string name)
{
    Title = name;
}