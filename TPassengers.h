#include "TElevator.h"
#ifndef __PASSENGERS_H__
#define __PASSENGERS_H__

class TPassengers:public TElevator 
{
protected:
int NumberOfPeople;
int price;
public:
int GetNumberOfPeople;
void SetNumberOfPeople(int a);
int GetPrice;
void SetPrice(int b);
};
#endif
