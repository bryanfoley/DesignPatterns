/*
 * Database.cpp
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */
#include "Database.h"

using namespace std;

Database::Database(){
	cout << "database created" << endl;
}
void Database::notify(){
	this->notifyObservers();
}
