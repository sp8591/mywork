/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Cat.h
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 21:25:03
 * @brief 
 *  
 **/




#ifndef  __CAT_H_
#define  __CAT_H_

#include "Base.h"
#include <iostream>
#include <string>
namespace example {
class Cat : public sp::test::Base {
    public:
        Cat(const std::string& name):Base(name){}
        void eat();
        void run();
        ~Cat(){}  
};
}













#endif  //__CAT_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
