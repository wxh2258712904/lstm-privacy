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
	//�Զ��뷽ʽ���ļ�
	ifstream csv_data(sor_file, ios::in);
	//ios::out�����û���ļ�����ô���ɿ��ļ���������ļ�������ļ�
	if (!csv_data.is_open())
	{
		cout << "Error: opening file fail" << endl;
		exit(1);
	}
	else {

		string line;//���ڶ�ȡÿһ��
		vector<string> words; //����һ���ַ�������
		string word;//���ڶ�ȡÿһ�еĵ�������
		istringstream sin;

		// ------------��ȡ����-----------------
		// ��ȡ�����У�����ȡ���ݸ���
		//��Ҫע����ǵ�һ������ʾ���ڣ�����Ҫ���뿼��
		getline(csv_data, line);
		int num_temp = 0;
		sin.clear();
		sin.str(line);
		//�����Ǵ�0��ʼ�������պ�����Ҳ���ÿ�������˲���Ҫ�ٶ�num���в���
		while (getline(sin, word, ','))
		{
			num_temp++;
		}
		num = num_temp;
		//���ո���������Ӧ����


		// ���ж�ȡ����
		while (getline(csv_data, line))
		{
			int i = 0;
			
			sin.clear();
			sin.str(line);
			words.push_back(line);
			//���ַ�����sin�е��ַ������ַ�������words�У��Զ���Ϊ�ָ���
			while (getline(sin, word, ','))
			{
				if (i != 0) {

				}
				i++;
			}
		}

		//����vector
		for (auto i : words)
		{
			cout << i << endl;
		}

		csv_data.close();
	}
}
