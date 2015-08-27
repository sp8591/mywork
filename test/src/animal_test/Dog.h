/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Dog.h
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 21:29:11
 * @brief 
 *  
 **/




#ifndef  __DOG_H_
#define  __DOG_H_

#include "Base.h"
#include <iostream>
#include <string>

namespace example {
class Dog : public sp::test::Base {
    public:
        Dog(const std::string& name):Base(name)
        {}
        void run();
        void eat();
        ~Dog(){}
};
}














#endif  //__DOG_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
