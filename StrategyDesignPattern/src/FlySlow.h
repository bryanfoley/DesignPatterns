/*
 * FlySlow.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef FLYSLOW_H_
#define FLYSLOW_H_
#include "IFlying.h"

using namespace std;

class FlySlow : public IFlying
{
    public:
	    void fly()
        {
            cout << "I fly slow." << endl;
        }
};

#endif /* FLYSLOW_H_ */
