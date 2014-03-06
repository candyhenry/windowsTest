#include "funcCostTime.h"
#include <iostream>
using namespace std;

#include "cocos2d.h"
USING_NS_CC;

funTimeCal::funTimeCal(const char* pszMethodName){

    startTime = clock();   
    strMethodName = pszMethodName;
}

funTimeCal::~funTimeCal(){
    startTime = clock() - startTime ;
     CCLog("%s :%d clicks cost (%f seconds)",strMethodName.c_str() , startTime, ((float)startTime) / CLOCKS_PER_SEC);
}