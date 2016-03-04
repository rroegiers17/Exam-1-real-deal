#include "Event.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Venue.h"
using namespace std;

void Venue::addEvent(int time, string name)// adding an event to the venue
{
   
        
}
bool Venue::validTime(int time)// checking if time is already used in array
{
    
  
}
void Venue::findEvent(int time, Venue::scheduleEvents)
{
   
    
}

int myints[] = { 10, 20, 30, 40 };
int * p;


p = std::find (myints, myints+4, 30);
if (p != myints+4)
std::cout << "Element found in myints: " << *p << '\n';
else
std::cout << "Element not found in myints\n";


