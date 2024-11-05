#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include "52.h"
using namespace std;
struct Student 
{
	int id{};
	string f{};
	string i{};
	string o{};
	char pol{};
	int vozr{};
	float rost{};
};
void cout_(Student st)
{
	cout << st.f << " " << st.i
		<< " " << st.o << " " << st.pol << " " << st.vozr << " " << st.rost << endl;
}
void fout_(Student st) 
{
	ofstream fout;
	fout.open("student.txt", ios::app);
	fout << st.f << " " << st.i
		<< " " << st.o << " " << st.pol << " " << st.vozr << " " << st.rost << endl;
}