//
// Created by Administrator on 2024/2/13.
//
#include<iostream>
#include<queue>//队列容器 先进先出的一种容器

using namespace std;
int main()
{//以默认方式构造一个队列容器
    queue<int> q1;
    q1.push(1);
    q1.push(3);
    q1.push(5);
    q1.push(7);
    //queue容器也没有迭代器，因为此容器也不能遍历
   // cout<<q1.front()<<endl;//front函数 就相当于 stack容器 里面的 top函数
   //q1.pop();//删除队首元素，出队
   // cout<<q1.front()<<endl;
   /* while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }*/
    queue<int>q2(q1);
    queue<int>q3;
    q3=q1;
    //queue容器里的   front back 函数可以改变赋值
    cout<<q3.front()<<endl;
    q3.front()=100;//
    cout<<q3.back()<<endl;
    q3.back()=100;//
    cout<<"size:"<<q3.size()<<endl;
    while(!q3.empty())
    {
        cout<<q3.front()<<endl;
        q3.pop();
    }
    return 0;
}