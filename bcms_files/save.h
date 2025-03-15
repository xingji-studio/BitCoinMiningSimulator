#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int write(long long rmb,long long bit_coin, long long xkm, string xk)
{
	ofstream fout;
	fout.open("archive.txt");
	fout << rmb << endl;
	fout << bit_coin << endl;
	fout << xk << endl;
	fout << xkm << endl;
	return 0;
}
int read(long long rmb, long long bit_coin, long long xkm, string xk)
{
	ifstream fin;
	fin.open("archive.txt");
	fin >> rmb;
	fin >> bit_coin;
	fin >> xk;
	fin >> xkm;
	return xk,rmb,bit_coin,xkm;
}
