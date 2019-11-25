#include <iostream>
#include <vector>
#include <map>

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
// using namespace map<string
void fun0();
void fun1();
void fun2();

int main(int arg, char **argv)
{
    fun2();

    return 0;
}

void fun2()
{
    // m 前者为 key , 后者为 value
    map<string, int> m;
    m.insert(pair<string, int>("one", 1));
    m.insert(map<string, int>::value_type("three", 3));
    
    typedef map<string, int>::value_type val_type;
    m.insert(val_type("two", 2));

    m["ewf"] = 3;
    m["ewf"] = 4;

    // map<string,int>::iterator itor = m.find("ewf");
    // cout << *itor << "\n";

    // for(const auto &c : m)
    // {

    // }
}

void fun1()
{
    // simple test
    int a = 5;
    int b = 10;
    int c;
    c = a + b;
    cout << c << "" << endl;
    constexpr int v = 5;
    cout << v;
}

void fun0()
{
    // vector 用法
    vector<string> m;
    for (int i = 0; i < 10; i++)
    {
        // add value one by one

        m.push_back(to_string(i));
    }

    // sort(m.begin(),m.end());
    reverse(m.begin(), m.end());
    cout << "\n\n数组方式 遍历 vector" << endl;
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }

    cout << "\n\n迭代器 遍历" << endl;
    //声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素
    vector<string>::iterator it;

    m.insert(m.begin(), "haha");

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << *it << " ";
    }
    for (auto c : m)
    {
    }
    // int arr[] ={4,4,53,3,35,35,35,3};
    // for each (auto ss in arr)
    // {
    //     cout << ss << " ";

    // }

    cout << "\n\n二维 vector" << endl;
    int N = 5, M = 6;
    vector<vector<int>> obj(N, vector<int>(M)); //定义二维动态数组5行6列
    for (int i = 0; i < obj.size(); i++)        //输出二维动态数组
    {
        for (int j = 0; j < obj[i].size(); j++)
        {
            cout << obj[i][j] << " ";
        }
    }
}