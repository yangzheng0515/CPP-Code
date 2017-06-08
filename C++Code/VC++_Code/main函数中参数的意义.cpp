/*
int main(int argc,char *argv[]) = int main(int argc,char **argv).
其参数argc和argv用于运行时,把命令行参数传入主程序.其中ARG是指arguments,即参数.具体含义如下:
(参照Arguments to main和C++ Primer7.2.6节)
(1).int argc:英文名为arguments count(参数计数)
count of cmd line args,运行程序传送给main函数的命令行参数总个数,
包括可执行程序名,其中当argc=1时表示只有一个程序名称,此时存储在argv[0]中.
(2).char **argv:英文名为arguments value/vector(参数值)
pointer to table of cmd line args,字符串数组,用来存放指向字符串参数的指针数组,
每个元素指向一个参数,空格分隔参数,其长度为argc.数组下标从0开始,argv[argc]=NULL.
argv[0] 指向程序运行时的全路径名
argv[1] 指向程序在DOS命令中执行程序名后的第一个字符串
argv[2] 指向执行程序名后的第二个字符串
argv[argc] 为NULL.
*/

//查看argv[]二维数组存储具体字符串的代码如下:
#include <iostream>  
using namespace std;  
int main(int argc,char *argv[])  
{  
    cout<<"参数个数="<<argc<<endl;  
    for(int i=0; i<argc; i++)  
    {  
        cout<<"参数序号="<<i<<" ";  
        cout<<"参数值="<<argv[i]<<endl;       
    }  
	system("PAUSE");  
    return 0;  
}

/*
在cmd中输入 E:\C++\C++CODE\VC++_CODE\Debug\main函数中参数的意义.exe yang zheng
运行结果为：
---------------------------------------------------------------------------
参数个数=3
参数序号=0 参数值=E:\C++\C++CODE\VC++_CODE\Debug\main函数中参数的意义.exe
参数序号=1 参数值=yang
参数序号=2 参数值=zheng
请按任意键继续. . .
---------------------------------------------------------------------------
*/