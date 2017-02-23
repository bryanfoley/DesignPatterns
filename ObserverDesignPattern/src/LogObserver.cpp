/*
 * LogObserver.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "LogObserver.h"

using namespace std;

LogObserver::LogObserver(){
	this->name = "Log";
	cout << name << " Observer (Concrete observer) created" << endl;}
void LogObserver::update(){cout << "The " << name << " has been notified" << endl;};


