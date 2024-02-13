//
// Created by Administrator on 2024/2/9.
//
//#include "vector.h"
#if 0
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr1[] = {1,2,3,4,5};
    vector<int> v1(arr1, arr1 + 5);//区间前开后闭
    for (int i = 0; i < 5; i++)
        cout << v1[i] << " ";
    cout << endl;


    //vector的同一个元素存储多次
    vector<int> v2(3, 8);//存储3个8
    for (int i = 0; i < 3; i++)
        cout << v2[i] << " ";
    cout << endl;

    //vector 的复制
    vector<int> v3(v2);//拷贝构造函数 与v4的结果一样
    for (int i = 0; i < 3; i++)
        cout << v3[i] << " ";
    cout << endl;
    vector<int> v4 = v2;
    for (int i = 0; i < 3; i++)
        cout << v4[i] << " ";
    cout<<endl;

    //vector的assign 定义 与最开始那种定义大致相同 都借助了数组
    vector<int> v5,v6,v7,v8;
    int arr2[]={0,1,2,3,4};
    v5.assign(arr2,arr2+5);
    for(int i=0;i<v5.size();i++)
    cout<<v5[i]<<" ";
    cout<<endl;

    v6.assign(v5.begin(),v5.end());//v5.end()指的是v5最后一位之后的一位
    for(int i=0;i<v6.size();i++)
        cout<<v6[i]<<" ";
    cout<<endl;

    v6.assign(v5.begin()+2,v5.end()-1);//这里更加证明了上一句注释
    for(int i=0;i<v6.size();i++)
        cout<<v6[i]<<" ";
    cout<<endl;

    v7.assign(3,6);
    for(int i=0;i<v7.size();i++)
        cout<<v7[i]<<" ";
    cout<<endl;


    //交换v6 v7
    v7.swap(v6);
    for(int i=0;i<v6.size();i++)
        cout<<v6[i]<<" ";
    cout<<endl;
    for(int i=0;i<v7.size();i++)
        cout<<v7[i]<<" " ;
    cout<<endl;

    v8=v7;
    for(int i=0;i<v8.size();i++)
    cout<<v8[i]<<" ";
    cout<<endl;
     return 0;
}
#endif