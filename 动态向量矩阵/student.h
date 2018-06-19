#pragma once
//学生类
#include <iostream>
#include <algorithm>

#include <vector>
using namespace std;

class Student
{
private:
	int id;             // 学号
	float eyesight;     // 视力
	float height;       // 身高
public:
	Student(int id, float eyesight, float height)
	{
		this->id = id;
		this->eyesight = eyesight;
		this->height = height;
	}
	int get_id()
	{
		return id;
	}

	float get_eyesight()
	{
		return eyesight;
	}

	float get_height()
	{
		return height;
	}
	
};