#include <stdio.h>
#include <hello.h>

//这是要被编成函数库的，可以变成静态函数库和动态函数库
void hello(const char *name){
printf("hello %s.\n",name);
}
