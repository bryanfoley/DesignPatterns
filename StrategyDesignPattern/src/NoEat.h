/*
 * NoEat.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef NOEAT_H_
#define NOEAT_H_
#include "IEating.h"

using namespace std;

class NoEat : public IEating
{
    public:
	    void eat()
        {
            cout << "I do not eat." << endl;
        }
};

#endif /* NOEAT_H_ */
