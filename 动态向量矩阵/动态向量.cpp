#include<iostream>
#include<opencv2/opencv.hpp>
#include<vector>
#include<math.h>
using namespace cv;
using namespace std;
int amain(int argc, char *argv[])
{
	sqrt(6);
	//vector<vector<int>> STM;//STM是spatial-temporal matrix
	//STM={}
	int N, R=4, C=6, num;
	int arrayS[4][6] = { {1,1,1,1,1,1},{0,0,0,6,7,8} ,{0,0,0,9,9,9} ,{0,0,0,8,8,8} };
	cout<<arrayS[0][4];
	//cin >> R >> C;//每组数据都是R行C列的二维数组
	vector<vector<int>> array;
	
		for (int i = 0; i < R; i++)
		{
			for (int j = 0;  j < C; j++)
			{
				
				array[i].push_back(arrayS[i][j]);
				cout << array[i][j];
			}
		}
		
	//for(int n,int i, int j;n<N,i<R,j<C;n++,i++,)
	//std::cout << testArray << endl;
	getchar();//停留在结果界面
	
}