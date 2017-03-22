/*
 * QuackLoud.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef QUACKLOUD_H_
#define QUACKLOUD_H_
#include "IQuacking.h"

using namespace std;

class QuackLoud : public IQuacking
{
    public:
	    void quack()
        {
            cout << "I quack really loud!!!." << endl;
        }
};

#endif /* QUACKLOUD_H_ */
