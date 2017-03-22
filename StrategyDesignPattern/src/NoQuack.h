/*
 * NoQuack.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef NOQUACK_H_
#define NOQUACK_H_
#include "IQuacking.h"

using namespace std;

class NoQuack : public IQuacking
{
    public:
	    void quack()
        {
            cout << "I do not quack." << endl;
        }
};

#endif /* NOQUACK_H_ */
