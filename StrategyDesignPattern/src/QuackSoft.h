/*
 * QuackSoft.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef QUACKSOFT_H_
#define QUACKSOFT_H_
#include "IQuacking.h"

using namespace std;

class QuackSoft : public IQuacking
{
    public:
	    void quack()
        {
            cout << "I quack soft." << endl;
        }
};

#endif /* QUACKSOFT_H_ */
