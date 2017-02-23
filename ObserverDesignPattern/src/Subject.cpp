/*
 * Subject.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "Subject.h"

using namespace std;

void Subject::notifyObservers(){
	for(vector<IObserver*>::const_iterator iter = observers.begin(); iter != observers.end(); ++iter)
	    {
	        if(*iter != 0)
	        {
	            (*iter)->update();
	        }
	    }
};

void Subject::registerObserver(IObserver *obs){
	cout << "Observer added" << endl;
	observers.push_back(obs);
};

void Subject::removeObserver(IObserver *obs){
	cout << "Observer removed" << endl;
	observers.push_back(obs);
};
