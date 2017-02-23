/*
 * main.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: bryan
 */
using namespace std;


#include "BossObserver.h"
#include "LogObserver.h"
#include "Database.h"

int main(){
	Database database;

	BossObserver boss1("boss1");
	BossObserver boss2("boss2");
	LogObserver logs;

	database.registerObserver(&boss1);
	database.registerObserver(&boss2);
	database.registerObserver(&logs);

	database.notifyObservers();

	return 0;
}


