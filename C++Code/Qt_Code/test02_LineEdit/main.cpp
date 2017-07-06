//2017/06/20 周二

#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QCompleter>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget w;

    QLineEdit edit;
    edit.show();
    edit.setParent(&w);

    //输入密码
//    edit.setEchoMode(QLineEdit::Password);  //Normal, NoEcho, Password, PasswordEchoOnEdit
//    edit.text();
    //提示输入信息
//    edit.setPlaceholderText("please input text");

    //提示信息
    QCompleter completer(QStringList() << "abc" << "123" << "哈哈");
    //设置匹配模式
    completer.setFilterMode(Qt::MatchContains);
    /*
        enum MatchFlag {
        MatchExactly = 0,
        MatchContains = 1,
        MatchStartsWith = 2,
        MatchEndsWith = 3,
        MatchRegExp = 4,
        MatchWildcard = 5,
        MatchFixedString = 8,
        MatchCaseSensitive = 16,
        MatchWrap = 32,
        MatchRecursive = 64
    };
    */
    edit.setCompleter(&completer);

    w.show();

    app.exec();
}

