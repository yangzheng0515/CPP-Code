//默认参数	2016/7/18	12:40
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample,ArSize);
    char *ps = left(sample, 4);		//4覆盖了1
    cout << ps << endl;
    delete [] ps;       // free old string
    ps = left(sample);		//相当于left(sample, 1);
    cout << ps << endl;
    delete [] ps;       // free new string
    return 0;
}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];  // copy characters
    while (i <= n)
        p[i++] = '\0';  // set rest of string to '\0'
    return p; 
}
/*
----------------
Enter a string:
forthcoming
fort
f
----------------
默认参数：当函数调用中省略了实参时自动使用的一个值，极大地提高了使用函数的灵活性

left(const char * str, int n = 1);
如果程序需要抽取一个字符组成的字符串，而偶尔需要抽取较长的字符串，则这种默认值将很有帮助
如果省略参数n，则它的值将为1；否则，传递的值将覆盖1
*/