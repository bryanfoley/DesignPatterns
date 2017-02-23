/*
 * Database.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "Database.h"

using namespace std;

void Database::notify(){
	this->notifyObservers();
}
