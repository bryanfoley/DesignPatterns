/*
 * Duck.h
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */

#ifndef DUCK_H_
#define DUCK_H_
#include "IEating.h"
#include "IQuacking.h"
#include "IFlying.h"


using namespace std;

class Duck
{
    public:
	    //Member attributes
        IFlying *fb;
        IQuacking *qb;
        IEating *eb;

        //Default Constructor
        Duck();
        //Member functions and setters
        void performQuack();
        void setQuackBehaviour(IQuacking *qbnew);
	    void performFly();
	    void setFlyBehaviour(IFlying *fbnew);
        void performEat();
        void setEatBehaviour(IEating *ebnew);
        void display();

};

#endif /* DUCK_H_ */
