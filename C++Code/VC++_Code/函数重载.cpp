//函数重载（函数多态）	2016/7/18	16:14
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);	//特定标不同，即函数参数不同，并非返回值不同

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
    while (n /= 10)	//计算num的位数
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
当函数基本上执行相同的任务，但使用不同形式的数据时，才应采用函数重载
更多细节内容请参考《C++ Primer Plus》277-280页
*/