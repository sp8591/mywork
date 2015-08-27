/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Animal.h
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 15:40:14
 * @brief 
 *  
 **/


#ifndef  __BASE_H_
#define  __BASE_H_
#include<iostream>
namespace sp {
namespace test {

typedef int * int_ptr;

class Base {
    public:
        Base(const std::string& name);
        virtual void eat(){}
        virtual void run()=0;
        void show();
        ~Base(){}
    private:
        std::string kind;
        std::string name; 
};
}
}
#endif  //__ANIMAL_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
