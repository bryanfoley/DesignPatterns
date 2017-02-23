/*
 * Observer.h
 *
 *  Created on: Feb 22, 2017
 *      Author: bryan
 */

#ifndef IOBSERVER_H_
#define IOBSERVER_H_

#include <iostream>

using namespace std;

class IObserver{
public:
	//Virtual update function
	virtual void update()=0;
};


#endif /* IOBSERVER_H_ */
