#ifndef __H__
#define __H__

#include <stdio.h>
#include <stdlib.h>     //包含一些常用的函数，如动态内存分配和类型转换。
#include <unistd.h>     //提供系统调用函数，如fork()用于创建子进程和exec()用于加载新程序。
#include <sys/types.h>  //定义了一些系统数据类型，如进程号（pid）等。
#include <sys/wait.h>   //定义了与进程等待相关的函数，如wait()和waitpid()。
//#include <pthread.h>    //用于多线程编程，包含创建、同步和管理线程的函数。
#include <signal.h>     //用于处理信号，如捕获并处理用户输入的中断信号。
#include <string.h>     //提供字符串处理函数，如strcpy()和strtok()等。
#include <stdbool.h>    //C99标准引入的头文件，定义了布尔类型的宏，如true和false。

#endif


void printt()
{
    printf("head input !!");
}