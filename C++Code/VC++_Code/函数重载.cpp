//�������أ�������̬��	2016/7/18	16:14
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);	//�ض��겻ͬ��������������ͬ�����Ƿ���ֵ��ͬ

int main()
{
    using namespace std;
    char * trip = "Hawaii!!";   
    unsigned long n = 12345678; 
    int i;
    char * temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip,i);
        cout << temp << endl;
        delete [] temp; // point to temporary storage
    }
    return 0;
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;       
    while (n /= 10)	//����num��λ��
        digits++;
    if (digits > ct)
    {
    ct = digits - ct;	
    while (ct--)
        num /= 10;
    return num;         
    }
    else                
        return num;   
}

char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];  
    while (i <= n)
        p[i++] = '\0';  
    return p; 
}
/*
---------
1
H
12
Ha
123
Haw
1234
Hawa
12345
Hawai
123456
Hawaii
1234567
Hawaii!
12345678
Hawaii!!
12345678
Hawaii!!
---------
������������ִ����ͬ�����񣬵�ʹ�ò�ͬ��ʽ������ʱ����Ӧ���ú�������
����ϸ��������ο���C++ Primer Plus��277-280ҳ
*/