#include <iostream>
#include <vector>
//#include <stdexcept>
#include <string>
/*************************************************************************

1. 可以利用 ctrl + shift + b 来build，然后调试
            （ 利用 vscode 提供的3个 json 文件）
2. 可以利用 CMakeLists.txt 来运行，注意，要加上 
            SET(CMAKE_BUILD_TYPE "Debug").
3. 可以利用 CMakeLists.txt 来生成可执行文件，然后
            利用 launch.json 来断点调试.
    launch.json 目前 type 为 lldb, 默认为 cppdbg.

*************************************************************************/

using namespace std;
int main(int arg, char** argv)
{
    int a = 5;
    int b = 10; 
    int c;
    c = a+b;

    cout << c << endl;

    constexpr int v = 5;
    

    cout << v;




    return 0;

    
}