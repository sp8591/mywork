/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file main.cpp
 * @author supeng02(com@baidu.com)
 * @date 2015/08/27 22:33:32
 * @brief 
 *  
 **/

#include <boost/thread.hpp>
#include <iostream>

void wait(int seconds){
    boost::this_thread::sleep(boost::posix_time::seconds(seconds));   
}
void thread(){
    for( int i=0; i<5;i++){
        wait(1);
        std::cout<<i<<std::endl;
    }
}
int main(){
    boost::thread t(thread);
    t.join();
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
