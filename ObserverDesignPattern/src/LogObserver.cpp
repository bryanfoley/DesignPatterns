/*
 * LogObserver.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "LogObserver.h"

using namespace std;

LogObserver::LogObserver(){cout << "Log Observer created" << endl;}
void LogObserver::update(){cout << "The Log has been notified" << endl;};


