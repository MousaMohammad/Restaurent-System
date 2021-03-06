#pragma once

#include "..\Defs.h"

#pragma once
class Cook
{
	int ID;
	ORD_TYPE type;	//for each order type there is a corresponding type (VIP, Normal, Vegan) ..cook type
	int speed;		//dishes it can prepare in one clock tick (in one timestep)
	int BreakDuration; //each cook takes a break after serving n consecutive orders
public:
	Cook();
	virtual ~Cook();
	int GetID() const;
	ORD_TYPE GetType() const;
	int GetBreakDuration() const;
	void setID(int);
	void setType(ORD_TYPE);
	void setBreakDuration(int);
	void setSpeed(int);
	int GetSpeed();
	
};
