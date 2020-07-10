#pragma once
#ifndef __OBSTACLE__
#define __OBSTACLE__
#include "DisplayObject.h"
class Obstacle : public DisplayObject
{
private:
public:
	Obstacle();
	~Obstacle();



	// DisplayObject Life Cycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

};

#endif /* defiend (__OBSTACLE__) */
