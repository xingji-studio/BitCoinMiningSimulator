#include <iostream>
#include <fstream>
using namespace std;
int key_in(int a)
{
	ofstream fout;
	fout.open("key.txt");
	fout << a;
	return 0;
}
int key_out()
{
	int a;
	ifstream fin;
	fin.open("key.txt");
	fin >> a;
	return a;
}
