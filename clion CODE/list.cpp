#if 0
#include <iostream>
#include<list>
using namespace std;
int main() {
    list<int> lst;//定义一个list类型的容器名为lst
    lst.push_back(10);//在尾部插入一个元素 类似尾插法
    lst.push_front(20);//在头部插入一个元素 类似头插法
    //lst.push_front(30);
    list<int>::iterator it;//构造一个迭代器
    cout<<"lst";
    for (it = lst.begin(); it != lst.end(); it++)
        cout << *it << " ";//20 10
    cout << endl;
    //for (it = lst.begin(); it != lst.end(); it++)
       // cout << *it << " ";//20
      //  cout << endl;
    //输出首元素
    int x=lst.front();
    cout<<"front:"<<x<<endl;
    x=lst.front();
    cout<<"front:"<<x<<endl;//20
    //输出最后元素
    int y=lst.back();
    cout<<"back:"<<y<<endl;//10
    //重新赋值元素
    //lst.front()=100;
    //lst.back()=200;
    cout<<"lst:";
    for(it=lst.begin();it!=lst.end();it++)

        cout<<*it<<" ";//20 10
    cout<<endl;
    lst.push_back(30);
    lst.push_back(40);

    //list容器的反向迭代器
    list<int>::reverse_iterator it1;
    cout<<"lst(reverse):";
    for(it1=lst.rbegin();it1!=lst.rend();it1++)
    cout<<*it1<<" ";//40 30 10 20
     cout<<endl;
#if 0
    //list<int>::iterator it2;
    list<int>lst1(3,5);//构造对象的时候将容器中的元素初始化为3个5
     cout<<"lst1:";
    for(it=lst1.begin();it!=lst1.end();it++)

        cout<<*it<<" ";
    cout<<endl;// 5 5 5
    list<int>::iterator beg=lst.begin();
    beg++;
    list<int>::iterator end=lst.begin();
    end++;
    end++;
    end++;//list容器不能直接  list+n   只能自增自减 list-- list++
    list<int> lst2(beg,end);//list容器有规定区间是前闭后开 所以end++要加三次才有两个元素的区间//10 30，不然就只有一个元素的区间//10
    cout<<"lst2:";
    for(it=lst2.begin();it!=lst2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    list<int> lst3(lst);//以其他容器来定义或初始化该容器
    cout<<"lst3:";
    for(it=lst3.begin();it!=lst3.end();it++)
        cout<<*it<<" ";


#endif
    list<int> lst4,lst5;
    list<int>::iterator it2=lst.end();//list容器是前闭后开的//20 10 30 40
    it2--;                                               //0  1  2  3   4   ////list.end()对应的是下标为4的位置
    list<int>::iterator it3;//用于for循环的迭代器                                  、、而且list是前闭后开的 所以it2不用--
    //lst4.assign(lst.begin(),it2);
    lst4.assign(lst.begin(),lst.end());//用assign 来定义或初始化lst4容器、、4个元素
    lst4.assign(3,4);//若重新assign 会覆盖掉 而不是追加
    cout<<"lst4:";
    //lst4.swap(lst5);//不能 放这里 这里lst5暂时未定义或初始化
    lst5.assign(4,6);
    lst4.swap(lst5);
    for(it3=lst4.begin();it3!=lst4.end();it3++)
        cout<<*it3<<" ";
    cout<<endl;
    //lst4.swap(lst5);//也不能放在这里因为 夹在两个for之间 编译是从上到下的 swap放这里，就是先输出lst4再交换，所以lst4未改变
//////由此建议初始化应该 标准化的放在输出的前面（自己的敲代码模板化）
    cout<<"lst5:";
    for(it3=lst5.begin();it3!=lst5.end();it3++)
        cout<<*it3<<" ";
    cout<<endl;
    //获取list容器的长度
    cout<<"lst5 size:"<<lst5.size()<<endl;
    //判断list容器是否为空
    cout<<"lst5 empty?"<<lst5.empty()<<endl;//0为假 非零为真 而不是1为真
    //改变容器的大小
    //增长
    lst5.resize(lst5.size()+3);//多，多出来的用0补（未定义多用什么补时）
    for(it3=lst5.begin();it3!=lst5.end();it3++)
        cout<<*it3<<" ";
    cout<<endl;
    lst5.resize(lst5.size()+3,100);
    for(it3=lst5.begin();it3!=lst5.end();it3++)
    cout<<*it3<<" ";
    cout<<endl;
    //减短   冲后往前减少
    lst5.resize(3);
    for(it3=lst5.begin();it3!=lst5.end();it3++)
        cout<<*it3<<" ";
        cout<<endl;

    list<int>::iterator it4=lst5.begin();//[0]
    it4++;//[1]
    lst5.insert(it4,40);//在list容器的第二个结点上 插入新元素  原有元素后移
    for(it3=lst5.begin();it3!=lst5.end();it3++)
    cout<<*it3<<" ";
    cout<<endl;


    //在40的位置插入一个50   //////暂时有bug 只有所找寻的元素 在容器中的元素只存在一个时才行///////
     for(it4=lst5.begin();it4!=lst5.end();it4++)////这里的迭代器it4是寻找40的 插入结点 与下面的输出迭代器it3有所不同
    { if(*it4==40)
        {
            break;
        }
    }/////////若没找到40    it4会一直遍历到lst5.end() 然后再执行下面的if语句//////////
    if(it4!=lst5.end())//找到了40
{
    lst5.insert(it4,50);
}
    for(it3=lst5.begin();it3!=lst5.end();it3++)
        cout<<*it3<<" ";
    cout<<endl;




    return 0;
}
#endif