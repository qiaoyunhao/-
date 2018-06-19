/**********************************************************
*                    test.cpp
*
* ��һ��������������N���ڶ�����������R������C,����������N��R*C�Ķ�ά����
*
*********************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include "student.h"
using namespace std;

//void main()
//{
//	int N, R, C, num;
//	cin >> N;//N���������
//	vector<vector<vector<int>>> testarray(N);
//	//vector<vector<vector<int>>> testarray;//���push_backʹ��
//	cin >> R >> C;//ÿ�����ݶ���R��C�еĶ�ά����
//	vector<vector<int>> array(R, vector<int>(C));
//	for (int n = 0; n < N; n++)
//	{
//		for (int i = 0; i < R; i++)
//		{
//			for (int j = 0; j < C; j++)
//			{
//				cin >> num;
//				array[i][j] = num;
//			}
//		}
//		//testarray.push_back(array);
//		testarray[n] = array;//����ֱ�Ӹ�ֵ
//	}
//	getchar();//ͣ���ڽ������
//}
// �Ƚϴ�С�ĺ���(ν��)
bool comparer(Student& stu_a, Student& stu_b)
{
	// ��eyesight���� + height��������Ҳ�������eyesight��ȵĻ����ٱȽ�height
	if (stu_a.get_eyesight() != stu_b.get_eyesight())
		return (stu_a.get_eyesight() < stu_b.get_eyesight());
	else
		return (stu_a.get_height() < stu_b.get_height());
}
int main(int argc, char** argv)
	{
		vector<Student> vec;
		vec.push_back(Student(4, 1.1f, 170.2f));
		vec.push_back(Student(3, 1.1f, 163.4f));
		vec.push_back(Student(2, 1.5f, 166.6f));
		vec.push_back(Student(1, 1.5f, 173.2f));

		// ����STL�е�sort���������еĵ�����������������ǰ�涨��ģ��Ƚ�����Student�����С�ĺ���
		sort(vec.begin(), vec.end(), comparer);

		vector<Student>::iterator iter;
		for (iter = vec.begin(); iter != vec.end(); ++iter)
		{
			cout << (*iter).get_eyesight() << "\t" << (*iter).get_height() << endl;
		}
		return 0;
	}