#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

string sor_file = "./data/train.csv";
string des_file = "./data/train_after_preprocess";
int num = 0;
int main()
{
	//以读入方式打开文件
	ifstream csv_data(sor_file, ios::in);
	//ios::out：如果没有文件，那么生成空文件；如果有文件，清空文件
	if (!csv_data.is_open())
	{
		cout << "Error: opening file fail" << endl;
		exit(1);
	}
	else {

		string line;//用于读取每一行
		vector<string> words; //声明一个字符串向量
		string word;//用于读取每一行的单个数据
		istringstream sin;

		// ------------读取数据-----------------
		// 读取标题行，并获取数据个数
		//需要注意的是第一个数表示日期，不需要参与考量
		getline(csv_data, line);
		int num_temp = 0;
		sin.clear();
		sin.str(line);
		//由于是从0开始计数，刚好日期也不用考量，因此不需要再对num进行操作
		while (getline(sin, word, ','))
		{
			num_temp++;
		}
		num = num_temp;
		//按照个数创建对应数组


		// 按行读取数据
		while (getline(csv_data, line))
		{
			int i = 0;
			
			sin.clear();
			sin.str(line);
			words.push_back(line);
			//将字符串流sin中的字符读到字符串数组words中，以逗号为分隔符
			while (getline(sin, word, ','))
			{
				if (i != 0) {

				}
				i++;
			}
		}

		//遍历vector
		for (auto i : words)
		{
			cout << i << endl;
		}

		csv_data.close();
	}
}
