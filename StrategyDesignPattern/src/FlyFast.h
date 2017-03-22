/*
 * FlyFast.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef FLYFAST_H_
#define FLYFAST_H_
#include "IFlying.h"

using namespace std;

class FlyFast : public IFlying
{
    public:
	    void fly()
        {
            cout << "I fly really fast!!!." << endl;
        }
};

#endif /* FLYFAST_H_ */
