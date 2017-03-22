/*
 * EatSlow.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef EATSLOW_H_
#define EATSLOW_H_
#include "IEating.h"

using namespace std;

class EatSlow : public IEating
{
    public:
	    void eat()
        {
            cout << "I eat really slow." << endl;
        }
};

#endif /* EATSLOW_H_ */
