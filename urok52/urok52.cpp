#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include "52.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream fout;
    ifstream fin;
    Student Ivan = { 1, "Фёдоров", "Иван", "Васильевич", 'м', 18, 1.88};
    Ivan.f = "Грозный";
    cout_(Ivan);
    fout_(Ivan);
}

