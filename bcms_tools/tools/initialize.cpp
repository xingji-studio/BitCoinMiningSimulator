#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
int main()
{
	using namespace std;
	int rmb, bit_coin, xkm = 0;
	rmb = 100000;
	string xk = "GTX1060";
	cout << "-警告-" << endl;
	cout << "如果您是第一次游玩，请忽略此警告。" << endl;
	cout << "初始化会格式化存档，跟硬盘一样，格式化会导致数据丢失。" << endl;
	cout << "10秒后初始化程序将会启动。非新人请勿启动程序。" << endl;
	Sleep(10000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "挖矿模拟器BCMS初始化程序" << endl;
	cout << "=============================================================================================" << endl;
	cout << "请稍等。正在加载初始化程序。" << endl;
	Sleep(500);
	cout << "正在创建版本引导。请勿关闭程序。（共8个）" << endl;
	Sleep(4000);
	cout << "正在创建并初始化存档。请勿关闭程序。" << endl;
	for (int i = 0; i <= 100; i++)
	{
		cout << "已完成 " << i << "%";
		Sleep(1000);
		cout << "\b\b\b\b\b\b\b\b\b\b";
	}
	cout << endl;
	cout << endl;
	cout << "正在创建EBR。请勿关闭程序。" << endl;
	for (int i = 0; i <= 100; i++)
	{
		cout << "已完成 " << i << "%";
		Sleep(200);
		cout << "\b\b\b\b\b\b\b\b\b\b";
	}
	cout << endl;
	cout << endl;
	cout << "正在准备BCMS。即将完成，请不要关闭程序。" << endl;
	Sleep(1000);
	ofstream fout;
	fout.open("archive.txt");
	fout << rmb << endl;
	fout << bit_coin << endl;
	fout << xk << endl;
	fout << xkm << endl;
	cout << "完成！正在退出程序。请稍等。" << endl;
	cout << "注：我们为您提供了十万元初始资金！" << endl;
	Sleep(1000);
	return 0;
}
