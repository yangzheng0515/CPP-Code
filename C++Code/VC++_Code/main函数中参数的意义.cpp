/*
int main(int argc,char *argv[]) = int main(int argc,char **argv).
�����argc��argv��������ʱ,�������в�������������.����ARG��ָarguments,������.���庬������:
(����Arguments to main��C++ Primer7.2.6��)
(1).int argc:Ӣ����Ϊarguments count(��������)
count of cmd line args,���г����͸�main�����������в����ܸ���,
������ִ�г�����,���е�argc=1ʱ��ʾֻ��һ����������,��ʱ�洢��argv[0]��.
(2).char **argv:Ӣ����Ϊarguments value/vector(����ֵ)
pointer to table of cmd line args,�ַ�������,�������ָ���ַ���������ָ������,
ÿ��Ԫ��ָ��һ������,�ո�ָ�����,�䳤��Ϊargc.�����±��0��ʼ,argv[argc]=NULL.
argv[0] ָ���������ʱ��ȫ·����
argv[1] ָ�������DOS������ִ�г�������ĵ�һ���ַ���
argv[2] ָ��ִ�г�������ĵڶ����ַ���
argv[argc] ΪNULL.
*/

//�鿴argv[]��ά����洢�����ַ����Ĵ�������:
#include <iostream>  
using namespace std;  
int main(int argc,char *argv[])  
{  
    cout<<"��������="<<argc<<endl;  
    for(int i=0; i<argc; i++)  
    {  
        cout<<"�������="<<i<<" ";  
        cout<<"����ֵ="<<argv[i]<<endl;       
    }  
	system("PAUSE");  
    return 0;  
}

/*
��cmd������ E:\C++\C++CODE\VC++_CODE\Debug\main�����в���������.exe yang zheng
���н��Ϊ��
---------------------------------------------------------------------------
��������=3
�������=0 ����ֵ=E:\C++\C++CODE\VC++_CODE\Debug\main�����в���������.exe
�������=1 ����ֵ=yang
�������=2 ����ֵ=zheng
�밴���������. . .
---------------------------------------------------------------------------
*/