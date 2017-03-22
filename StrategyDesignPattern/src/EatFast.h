/*
 * EatFast.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef EATFAST_H_
#define EATFAST_H_
#include "IEating.h"

using namespace std;

class EatFast : public IEating
{
    public:
	    void eat()
        {
            cout << "I eat really fast!!!" << endl;
        }
};

#endif /* EATFAST_H_ */
