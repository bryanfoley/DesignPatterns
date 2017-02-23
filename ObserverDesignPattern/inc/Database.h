/*
 * Database.h
 *
 *  Created on: Feb 23, 2017
 *      Author: bryan
 */

#ifndef DATABASE_H_
#define DATABASE_H_
#include "Subject.h"
#include <vector>

using namespace std;

class Database: public Subject{
public:
	Database(){cout << "database created" << endl;};
	void notify();

};


#endif /* DATABASE_H_ */
