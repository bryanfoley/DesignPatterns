/*
 * BossObserver.h
 *
 *  Created on: Feb 22, 2017
 *      Author: bryan
 */

#ifndef BOSSOBSERVER_H_
#define BOSSOBSERVER_H_

#include "Observer.h"

using namespace std;

class BossObserver: public IObserver{
	string name;
public:
	BossObserver(string name);
	void update();
};


#endif /* BOSSOBSERVER_H_ */
