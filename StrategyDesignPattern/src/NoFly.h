/*
 * NoFly.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef NOFLY_H_
#define NOFLY_H_
#include "IFlying.h"

using namespace std;

class NoFly : public IFlying
{
    public:
	    void fly()
        {
            cout << "I do not fly." << endl;
        }
};

#endif /* NOFLY_H_ */
