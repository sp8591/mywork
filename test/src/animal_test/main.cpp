/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file main.cpp
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 17:36:07
 * @brief 
 *  
 **/
#include "Cat.h"
#include "Dog.h"
#include "Base.h"
int main(int argc, char *argv[]){
    example::Cat cat("mycat");
    example::Dog dog("mydog");

    cat.eat();
    cat.show();
    dog.eat();
    dog.show();
    sp::test::Base *ptr = &cat;
    ptr->show();
    ptr = &dog;
    ptr->show();
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
