/*
 * BossObserver.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "BossObserver.h"

using namespace std;

BossObserver::BossObserver(string name){
	this->name = name;
	cout << this->name << " Observer created" << endl;}
void BossObserver::update(){cout << "The Boss, " << name << ", has been notified" << endl;};



