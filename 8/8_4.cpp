#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/**
 * @brief
 * 编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，
 * 将每一行作为一个独立的元素存于vector中。
 * @param filename
 * @param vec
 */
void ReadFileToVec(const string &filename, vector<string> &vec)
{
    ifstream ifs(filename);
    if (ifs)
    {
        string buf;
        while (getline(ifs, buf))
        {
            vec.push_back(buf);
        }
    }
}

/**
 * @brief
 * 重写上面的程序，将每个单词作为一个独立的元素进行存储。
 * @param filename
 * @param vec
 */
void ReadFileToVec2(const string &filename, vector<string> &vec)
{
    ifstream ifs(filename);
    if (ifs)
    {
        string buf;
        while (ifs >> buf)
        {
            vec.push_back(buf);
        }
    }
}