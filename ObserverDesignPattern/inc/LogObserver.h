/*
 * LogObserver.h
 *
 *  Created on: Feb 22, 2017
 *      Author: bryan
 */

#ifndef LOGOBSERVER_H_
#define LOGOBSERVER_H_

#include "Observer.h"

using namespace std;

class LogObserver: public IObserver{
public:
	LogObserver(){cout << "Log Observer created" << endl;}
	void update(){cout << "The Log has been notified" << endl;};
};

#endif /* LOGOBSERVER_H_ */
