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
	LogObserver();
	void update();
};

#endif /* LOGOBSERVER_H_ */
