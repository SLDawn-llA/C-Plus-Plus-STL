//这个结构体可以部分参照想象的实物 通讯录本
//首先是一大本通讯录 再以联系人 联系人个数（纸的页数）为结构体成员 
//然后联系人就以姓名 性别等为结构体成员



#include<iostream>
using namespace std; 
#include<string>
#define MAX 1000
//封装函数显示界面 如void showmenu()
//在main函数中调用封装好的函数

//设计联系人信息的结构体
struct Person
{
    string m_name;//性别
    int m_sex;//性别：1 男 2 女
    int m_age;//年龄
    string m_phone;//电话
    string m_addr;//住址

};

//设计通讯录的结构体  即整个通讯录中的元素（每个联系人  联系人的个数）
// //为什么要设计通讯录结构体呢
//因为上面的联系人结构体只是设计了 但是需要一个数组来有序的存储信息
struct Addressbooks
{
    //通讯录中保存的联系人数组
    struct Person Personarray[MAX];//前面的是数组的类型——结构体类型
    //通讯录中当前记录联系人的个数
    int m_size;

};
//1.添加联系人
void addperson(Addressbooks *abs)//是将联系人信息存入（输入） 而不是输出所以函数是void类型
{
    
    //此函数是再建立新变量name再赋值给结构体成员（我觉得可能是中间要判断啥或如sex的判别那如果输入别的数字的循环处理）
    //所以才不直接赋给结构体成员？

    
    if (abs->m_size == MAX)//结构体的指针的间接访问
    {
        cout << "通讯录已满，无法添加联系人" << endl;
    }
    else
    {
        //姓名
        string name;
        cout << "请输入姓名" << endl;
        abs->Personarray[abs->m_size].m_name == name;
        cin >> name;
        //性别
        int sex;
        cout << "请输入性别" << endl;
        cout << "男：1    女：2" << endl;
        //为了输入错误后 还能再次输入所以套一层死循环   正确时才用break跳出来
        //后面的年龄 电话也可以这样搞限制条件 如年龄不能超过多少 电话一定是多少位 自行ide暂时没时间 之后ide
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex==2)//////这里不能偷懒 sex==1||2 除非sex == (1 || 2)
            {
                abs->Personarray[abs->m_size].m_sex == sex;//如果输入正确 才将数据赋值给结构体成员
                //而且才退出循环
                break;
            }
            else
            {
                cout << "输入错误，请重新输入" << endl;
            }
        }
        //年龄
        int age;
        cout << "请输入年龄" << endl;
        abs->Personarray[abs->m_size].m_age == age;
        cin >> age;
        
        
        //电话
        string phone;
        cout << "请输入电话" << endl;
        abs->Personarray[abs->m_size].m_phone == phone;
        cin >> phone;

        //地址
        string addr;
        cout << "请输入地址" << endl;
        abs->Personarray[abs->m_size].m_addr == addr;
        cin >> addr;
        cout << "添加成功" << endl;
        //更新通讯录人数
        abs->m_size++;
    }

}
//2.显示联系人
string showperson()//因为此函数为输出函数 而且输出内容位数较大  所以用string 而不是int类型
{

}


//菜单界面
void showmenu()
{
    cout << "************************" << endl;
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.显示联系人 *****" << endl;
    cout << "***** 3.删除联系人 *****" << endl;
    cout << "***** 4.查找联系人 *****" << endl;
    cout << "***** 5.修改联系人 *****" << endl;
    cout << "***** 6.清空联系人 *****" << endl;
    cout << "***** 0.退出通讯录 *****" << endl;
    cout << "************************" << endl;
}
int main()
{


    //创建通讯录结构体变量
    Addressbooks abs;
//初始化通讯录中当前人数个数
    abs.m_size=0;

    while (true)
        //为了使选除0的每一个选项之后，也不会退出程序（只有选0时才会退出程序）
    {
    //调用界面
    showmenu();
    int select;
    cin >> select;
    
        switch (select)
        {
        case 1://添加联系人
            addperson(&abs);//利用地址传值，可以修饰实参
            break;
        case 2://显示联系人
            //showperson(abs);
            break;
        case 3://删除联系人
            break;
        case 4://查找联系人
            break;
        case 5://修改联系人
            break;
        case 6://清空联系人
            break;
        case 0:  //退出通信录 
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}