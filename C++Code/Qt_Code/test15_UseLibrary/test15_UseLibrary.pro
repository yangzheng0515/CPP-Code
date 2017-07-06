SOURCES += \
    main.cpp


# 如果是Qt mingw版本，使用动态库方式和Linux方式没区别(-L -l)
# 如果Qt VC版本。。。使用动态库方式和Windows没区别
# 如果Qt mingw版本，要调用VS写的动态库，使用一个工具，生成lib***.a文件

LIBS += -LE:\C++\C++Code\QT_Code\build-test14_Library-Desktop_Qt_5_8_0_MinGW_32bit-Debug\debug -ltest14_Library
