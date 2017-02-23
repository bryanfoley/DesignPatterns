/*
 * Subject.h
 *
 *  Created on: Feb 22, 2017
 *      Author: bryan
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <vector>
#include "Observer.h"

using namespace std;

class Subject{
	vector< IObserver * > observers;
public:
	void registerObserver(IObserver *obs);
	void removeObserver(IObserver *obs);
    void notifyObservers();
};
#endif /* SUBJECT_H_ */

