/*
 * Duck.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: bryan
 */
#include "Duck.h"
#include "NoQuack.h"
#include "NoFly.h"
#include "NoEat.h"
#include <iostream>

using namespace std;

 Duck::Duck(){
    qb = new NoQuack();
    fb = new NoFly();
    eb = new NoEat();
 }

 void Duck::performQuack(){
     qb->quack();
 }

 void Duck::setQuackBehaviour(IQuacking *qbnew){
     cout << "Changing quack behaviour..." << endl;
     qb = qbnew;
 }

 void Duck::performFly(){
     fb->fly();
 }

 void Duck::setFlyBehaviour(IFlying *fbnew){
     cout << "Changing fly behaviour..." << endl;
     fb = fbnew;
 }

 void Duck::performEat(){
     eb->eat();
 }

 void Duck::setEatBehaviour(IEating *ebnew){
     cout << "Changing eat behaviour..." << endl;
     eb = ebnew;
 }

 void Duck::display(){
     eb->eat();
     fb->fly();
     qb->quack();
 }
