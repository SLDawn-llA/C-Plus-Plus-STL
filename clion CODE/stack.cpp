//
// Created by Administrator on 2024/2/12.
/*
#include<iostream>
#include<stack>//堆栈容器 先进后出的一种容器

using namespace std;
int main()
{
    //默认构造方式构造一个stack容器对象
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
#if 0
    //stack容器没有迭代器，因为stack queue （栈，队列）不能遍历；
    cout<<stk.top()<<endl;//top函数返回栈顶元素，不会删除栈顶元素
    stk.pop();//出栈，删除栈顶元素
    cout<<stk.top()<<endl;
    stk.pop();//出栈，删除栈顶元素
    cout<<stk.top()<<endl;
    stk.pop();//出栈，删除栈顶元素
    cout<<stk.top()<<endl;
    stk.pop();//出栈，删除栈顶元素   此时stk容器内啥元素也没有
#endif

stack<int>stk2(stk);//拷贝构造函数
while(stk2.empty()!=true)//或者while(！stk.empty())  就是stk容器不为空
{
    cout<<stk2.top()<<endl;
    stk2.pop();
}
stack<int>stk3=stk;//这个“=”是 尚未构造（定义）完毕的容器的都是调用构造函数

stk3=stk;// 而这个“=”（等于号）（赋值） 调用的是重载    两个等于号 调用的东西不一样
cout<<"stk size:"<<stk.size()<<endl;
// stk.resize(3);//error: 'class std::stack<int>' has no member named 'resize';
//stack容器没有重置容器大小
    return 0;
}
*/