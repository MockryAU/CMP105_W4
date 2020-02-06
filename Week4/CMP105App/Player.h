#pragma once
#include "Framework/GameObject.h"
class Player : 	public GameObject
{
private:
	int speed = 200;

public:

	void handleInput(float dt) override;
	int setSpeed(int newSpeed);

};

