//����ṹ����Բ��ֲ��������ʵ�� ͨѶ¼��
//������һ��ͨѶ¼ ������ϵ�� ��ϵ�˸�����ֽ��ҳ����Ϊ�ṹ���Ա 
//Ȼ����ϵ�˾������� �Ա��Ϊ�ṹ���Ա



#include<iostream>
using namespace std; 
#include<string>
#define MAX 1000
//��װ������ʾ���� ��void showmenu()
//��main�����е��÷�װ�õĺ���

//�����ϵ����Ϣ�Ľṹ��
struct Person
{
    string m_name;//�Ա�
    int m_sex;//�Ա�1 �� 2 Ů
    int m_age;//����
    string m_phone;//�绰
    string m_addr;//סַ

};

//���ͨѶ¼�Ľṹ��  ������ͨѶ¼�е�Ԫ�أ�ÿ����ϵ��  ��ϵ�˵ĸ�����
// //ΪʲôҪ���ͨѶ¼�ṹ����
//��Ϊ�������ϵ�˽ṹ��ֻ������� ������Ҫһ������������Ĵ洢��Ϣ
struct Addressbooks
{
    //ͨѶ¼�б������ϵ������
    struct Person Personarray[MAX];//ǰ�������������͡����ṹ������
    //ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
    int m_size;

};
//1.�����ϵ��
void addperson(Addressbooks *abs)//�ǽ���ϵ����Ϣ���루���룩 ������������Ժ�����void����
{
    
    //�˺������ٽ����±���name�ٸ�ֵ���ṹ���Ա���Ҿ��ÿ������м�Ҫ�ж�ɶ����sex���б���������������ֵ�ѭ������
    //���ԲŲ�ֱ�Ӹ����ṹ���Ա��

    
    if (abs->m_size == MAX)//�ṹ���ָ��ļ�ӷ���
    {
        cout << "ͨѶ¼�������޷������ϵ��" << endl;
    }
    else
    {
        //����
        string name;
        cout << "����������" << endl;
        abs->Personarray[abs->m_size].m_name == name;
        cin >> name;
        //�Ա�
        int sex;
        cout << "�������Ա�" << endl;
        cout << "�У�1    Ů��2" << endl;
        //Ϊ���������� �����ٴ�����������һ����ѭ��   ��ȷʱ����break������
        //��������� �绰Ҳ������������������ �����䲻�ܳ������� �绰һ���Ƕ���λ ����ide��ʱûʱ�� ֮��ide
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex==2)//////���ﲻ��͵�� sex==1||2 ����sex == (1 || 2)
            {
                abs->Personarray[abs->m_size].m_sex == sex;//���������ȷ �Ž����ݸ�ֵ���ṹ���Ա
                //���Ҳ��˳�ѭ��
                break;
            }
            else
            {
                cout << "�����������������" << endl;
            }
        }
        //����
        int age;
        cout << "����������" << endl;
        abs->Personarray[abs->m_size].m_age == age;
        cin >> age;
        
        
        //�绰
        string phone;
        cout << "������绰" << endl;
        abs->Personarray[abs->m_size].m_phone == phone;
        cin >> phone;

        //��ַ
        string addr;
        cout << "�������ַ" << endl;
        abs->Personarray[abs->m_size].m_addr == addr;
        cin >> addr;
        cout << "��ӳɹ�" << endl;
        //����ͨѶ¼����
        abs->m_size++;
    }

}
//2.��ʾ��ϵ��
string showperson()//��Ϊ�˺���Ϊ������� �����������λ���ϴ�  ������string ������int����
{

}


//�˵�����
void showmenu()
{
    cout << "************************" << endl;
    cout << "***** 1.�����ϵ�� *****" << endl;
    cout << "***** 2.��ʾ��ϵ�� *****" << endl;
    cout << "***** 3.ɾ����ϵ�� *****" << endl;
    cout << "***** 4.������ϵ�� *****" << endl;
    cout << "***** 5.�޸���ϵ�� *****" << endl;
    cout << "***** 6.�����ϵ�� *****" << endl;
    cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
    cout << "************************" << endl;
}
int main()
{


    //����ͨѶ¼�ṹ�����
    Addressbooks abs;
//��ʼ��ͨѶ¼�е�ǰ��������
    abs.m_size=0;

    while (true)
        //Ϊ��ʹѡ��0��ÿһ��ѡ��֮��Ҳ�����˳�����ֻ��ѡ0ʱ�Ż��˳�����
    {
    //���ý���
    showmenu();
    int select;
    cin >> select;
    
        switch (select)
        {
        case 1://�����ϵ��
            addperson(&abs);//���õ�ַ��ֵ����������ʵ��
            break;
        case 2://��ʾ��ϵ��
            //showperson(abs);
            break;
        case 3://ɾ����ϵ��
            break;
        case 4://������ϵ��
            break;
        case 5://�޸���ϵ��
            break;
        case 6://�����ϵ��
            break;
        case 0:  //�˳�ͨ��¼ 
            cout << "��ӭ�´�ʹ��" << endl;
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