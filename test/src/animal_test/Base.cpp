/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Base.cpp
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 16:21:12
 * @brief 
 *  
 **/
#include <iostream>
#include "Base.h"
#include <string>
namespace sp{
namespace test{
void Base::show() {
    std::cout << "kind: " << kind << " , name: " << name <<std::endl;
}
Base::Base(const std::string& name ) {
    this->kind = "animal";
    this->name = name;
}   
}
}






















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
