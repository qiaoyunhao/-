/**********************************************************
*                    test.cpp
*
* 第一行输入数据组数N，第二行输入行数R和列数C,接下来输入N组R*C的二维数组
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
//	cin >> N;//N组测试数据
//	vector<vector<vector<int>>> testarray(N);
//	//vector<vector<vector<int>>> testarray;//配合push_back使用
//	cin >> R >> C;//每组数据都是R行C列的二维数组
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
//		testarray[n] = array;//可以直接赋值
//	}
//	getchar();//停留在结果界面
//}
// 比较大小的函数(谓词)
bool comparer(Student& stu_a, Student& stu_b)
{
	// 按eyesight升序 + height升序排列也就是如果eyesight相等的话就再比较height
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

		// 调用STL中的sort函数，其中的第三个参数就是我们前面定义的，比较两个Student对象大小的函数
		sort(vec.begin(), vec.end(), comparer);

		vector<Student>::iterator iter;
		for (iter = vec.begin(); iter != vec.end(); ++iter)
		{
			cout << (*iter).get_eyesight() << "\t" << (*iter).get_height() << endl;
		}
		return 0;
	}