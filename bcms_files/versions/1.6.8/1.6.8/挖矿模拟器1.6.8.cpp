#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
//void read(string xk, long long rmb, long long wh);
//void wirte(string xk, long long rmb, long long wh);
int main()
{
	int y = 2022;
	int m = 1;
	int d = 1;
	int i = 0;
	int n = 0;
	int s = 0;
	int t = 10000;
	int l = 72;
	int cel = 0;
	int bd = 0;
	int inm;
	int c = 0;
	int xkm = 1;
	int mod = 0;
	int b_yuan = 36000;
	int lx = 1;
	char in;
	long long w = 0;
	long long wh = 100;
	long long rmb = 0;
	long long um = 0;
	long long um_temp = 0;
	int mail[100] = {1,1,1};
	string xk = "GTX1060";
	string key = "FJKHF";
	string ms_server = "";
	cout << "|        Loading 加载中        |";
	Sleep(5000);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "|         finish  完成         |";
	Sleep(100);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	//read(xk, rmb, wh);
	cout << endl;
	cout << "欢迎来到挖矿模拟器1.6.8！为了您有着更好的体验，在使用之前请设置以下参数：" << endl;
	cout << "1.在多少项后暂停" << endl;
	cout << "2.语言" << endl;
	cout << "3.是否添加DLC" << endl;
	cout << "4.游玩的服务器" << endl;
	Sleep(3000);
	cout << "1.在多少项后暂停   请输入参数（请勿输入字母，避免崩溃）：";
	cin >> wh;
	cout << endl;
	cout << "2.语言：" << endl;
	cout << "A.简体中文   B.English" << endl;
	cin >> in;
	if (in == 'A' || in == 'a')
	{
		cel = 0;
	}
	else if (in == 'B' || in == 'b')
	{
		cel = 1;
	}
	if (cel == 0)
	{
		cout << "3.是否添加DLC" << endl;
		cout << "A.不添加DLC" << endl;
		cin >> in;
	}
	else if (cel == 1)
	{
		cout << "3. Whether to add DLC" << endl;
		cout << "A. Do not add DLC" << endl;
		cin >> in;
	}
	if (cel == 0)
	{
		int think_wh = 0;
		while (think_wh == 0)
		{
			cout << "4.游玩的服务器" << endl;
			cout << "A.星际I服" << endl;
			cout << "B.星际II服" << endl;
			cout << "C.星际III服" << endl;
			cout << "D.欧洲I服" << endl;
			cout << "E.俄罗斯I服" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "是否加入“星际I服”？" << endl;
				cout << "A.加入   B.我再想想" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "加入成功！当前服务器：【星际I服】" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "星际I服";
				}
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "是否加入“星际II服”？" << endl;
				cout << "A.加入   B.我再想想" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "加入成功！当前服务器：【星际II服】" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "星际II服";
				}
			}
			else if (in == 'C' || in == 'c')
			{
				cout << "是否加入“星际III服”？" << endl;
				cout << "A.加入   B.我再想想" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "加入成功！当前服务器：【星际III服】" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "星际III服";
				}
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "对不起，本服仅给欧洲（除俄罗斯）地区的用户使用。" << endl;
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "对不起，本服仅给俄罗斯地区的用户使用。" << endl;
			}
			else if (in == 'Z' || in == 'z')
			{
				cout << "正在进入离线模式......" << endl;
				cout << "正在下载离线资源......（1573MB|预计用时10分钟）" << endl;
				Sleep(600000);
				cout << "正在解压资源......（1573MB 》》》解压后》》》 1747MB|预计用时1分钟）" << endl;
				Sleep(60000);
				cout << "正在安装......（1747MB|预计用时3分钟）" << endl;
				Sleep(180000);
				cout << "安装成功，正在重启游戏（请勿手动重启！）" << endl;
				Sleep(5000);
				cout << "|        Loading 加载中        |";
				Sleep(5000);
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				cout << "|         finish  完成         |";
				Sleep(100);
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				//read(xk, rmb, wh);
				cout << endl;
				cout << "欢迎来到挖矿模拟器1.6.8！为了您有着更好的体验，在使用之前请设置以下参数：" << endl;
				cout << "1.在多少项后暂停" << endl;
				cout << "2.语言" << endl;
				cout << "3.是否添加DLC" << endl;
				Sleep(3000);
				cout << "1.在多少项后暂停   请输入参数（请勿输入字母，避免崩溃）：";
				cin >> wh;
				cout << endl;
				cout << "2.语言：" << endl;
				cout << "A.简体中文   B.English" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cel = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					cel = 1;
				}
				if (cel == 0)
				{
					cout << "3.是否添加DLC" << endl;
					cout << "A.不添加DLC" << endl;
					cin >> in;
				}
				else if (cel == 1)
				{
					cout << "3. Whether to add DLC" << endl;
					cout << "A. Do not add DLC" << endl;
					cin >> in;
				}
			}
		}
	}
	else if (cel == 1)
	{
		int think_wh = 0;
		while (think_wh == 0)
		{
			cout << "4. Play server" << endl;
			cout << "A. XINGJI I Suit" << endl;
			cout << "B. XINGJI II Suit" << endl;
			cout << "C. XINGJI III Suit" << endl;
			cout << "D. Europe I Suit" << endl;
			cout << "E. Russian I Suit" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'C' || in == 'v')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "Do you want to join the “Europe I Suit?”" << endl;
				cout << "A. Join B. I think again" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "Join success! Current Server: [Europe I Suit]" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "Europe I Suit";
				}
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "Sorry, this service is only for users in Russia." << endl;
			}
		}
	}
	if (cel == 0)
	{
		cout << "正在保存设置中......" << endl;
		Sleep(1000);
		cout << "保存成功！" << endl;
		Sleep(500);
		cout << "|==========挖矿模拟器1.6.8==========|" << endl;
		cout << "| P O W E R E D   B Y   X I N G J I |" << endl;
		cout << "|         >>> 正在加载中 <<<        |" << endl;
		Sleep(1500);
	}
	else if (cel == 1)
	{
		cout << "Saving settings..." << endl;
		Sleep(1000);
		cout << "Save successful!" << endl;
		Sleep(500);
		cout << "|=========Mining Simulator 1.6.8==========|" << endl;
		cout << "|    P O W E R E D   B Y   X I N G J I    |" << endl;
		cout << "|             >>> loading <<<             |" << endl;
		Sleep(1500);
	}
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	in = 0;
	while (true)
	{
			if (cel == 0)
			{
				cout << "*********************************************" << endl;
				cout << "*                                           *" << endl;
				cout << "*    挖矿模拟器 1.6.8 for XINGJI STUDIOS    *" << endl;
				cout << "*                                           *" << endl;
				cout << "*********************************************" << endl;
				cout << " A.开始   B.退出   C.设置   D.商店   E.邮件 " << endl;
			}
			else if (cel == 1)
			{
				cout << "*******************************************************" << endl;
				cout << "*                                                     *" << endl;
				cout << "*      Mining simulator 1.6.8 for XINGJI STUDIOS      *" << endl;
				cout << "*                                                     *" << endl;
				cout << "*******************************************************" << endl;
				cout << " A.Start game   B.Exit   C.Settings   D.Shop   E.Mail " << endl;
			}
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				c = 1;
			}
			else if (in == 'B' || in == 'b')
			{
				//write(xk, rmb, wh);
				cout << " | 感谢您游玩挖矿模拟器 | " << endl;
				cout << " |      正在退出中      | " << endl;
				Sleep(1000);
				return 0;
			}
			else if (in == 'C' || in == 'c')
			{
				c = 2;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "请选择类型：A.矿机   B.矿机图鉴" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					in = 0;
					if (cel == 0)
					{
						cout << "钱包：" << rmb << "￥" << endl;
						cout << "当前矿机：" << xk << "(共" << xkm << "个)" << endl;
						cout << "A | RTX1080   |  6099￥ |" << endl;
						cout << "B | RTX1080Ti |  7000￥ |" << endl;
						cout << "C | RTX2080   | 13988￥ |" << endl;
						cout << "D | RTX2080Ti | 11999￥ |" << endl;
						cout << "E | RTX3070   | 15000￥ |" << endl;
						cout << "F | RTX3080   | 20000￥ |" << endl;
						cout << "G | RTX3090   | 30000￥ |" << endl;
						cout << "H | RX6900XT  | 20000￥ |" << endl;
						cout << "I | XG6800    | 21000￥ |" << endl;
						cout << "J | XG6800PL  | 30000￥ |" << endl;
						cout << "K | XG6800PR  | 50000￥ |" << endl;
						cout << "L | ANT 2.0   |   3亿￥ |" << endl;
						cout << "M | XMC88000  |   3亿￥ |" << endl;
						cout << "N | XMC88888  |   5亿￥ |" << endl;
						cout << "O | RTX2080P  | 13988￥ |" << endl;
						cout << "P | RTX2080S  |  7999￥ |" << endl;
						cout << "Q | RTX2080X  | 20000￥ |" << endl;
						cout << "R | RTX3070Ti | 12800￥ |" << endl;
						cout << "S | RTX3060   |  9000￥ |" << endl;
						cout << "T | XMC2022   | 20220￥ |" << endl;
						cout << "U | XMC2021   | 20210￥ |" << endl;
						cout << "V | XG8000    |   8亿￥ |" << endl;
						cout << "W | XG8200    | 8.2亿￥ |" << endl;
					}
					else if (cel == 1)
					{
						cout << "Purse：" << rmb * 0.16 << "$" << endl;
						cout << "Current miner：" << xk << "(共" << xkm << "个)" << endl;
						cout << "A | RTX1080   |        958$ |" << endl;
						cout << "B | RTX1080Ti |       1099$ |" << endl;
						cout << "C | RTX2080   |       2197$ |" << endl;
						cout << "D | RTX2080Ti |       1884$ |" << endl;
						cout << "E | RTX3070   |       2355$ |" << endl;
						cout << "F | RTX3080   |       3141$ |" << endl;
						cout << "G | RTX3090   |       4711$ |" << endl;
						cout << "H | RX6900XT  |       3141$ |" << endl;
						cout << "I | XG6800    |       3298$ |" << endl;
						cout << "J | XG6800PL  |       4711$ |" << endl;
						cout << "K | XG6800PR  |       7852$ |" << endl;
						cout << "L | ANT 2.0   |  47 million |" << endl;
						cout << "M | XMC88000  |  47 million |" << endl;
						cout << "N | XMC88888  |  78 million |" << endl;
						cout << "O | RTX2080P  |       2199$ |" << endl;
						cout << "P | RTX2080S  |       1258$ |" << endl;
						cout << "Q | RTX2080X  |       3145$ |" << endl;
						cout << "R | RTX3070Ti |       2013$ |" << endl;
						cout << "S | RTX3060   |       1415$ |" << endl;
						cout << "T | XMC2022   |       3019$ |" << endl;
						cout << "U | XMC2021   |       3018$ |" << endl;
						cout << "V | XG8000    | 120 million |" << endl;
						cout << "W | XG8200    | 122 million |" << endl;
					}
					cin >> in;
					if (cel == 0)
					{
						if (in == 'A' || in == 'a')
						{
							t = t - xkm * 5;
							xk = "RTX1080";
							rmb = rmb - 6099;
							xkm++;
						}
						else if (in == 'B' || in == 'b')
						{
							t = t - xkm * 7;
							xk = "RTX1080Ti";
							rmb = rmb - 7000;
							xkm++;
						}
						else if (in == 'C' || in == 'c')
						{
							t = t - xkm * 10;
							xk = "RTX2080";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'D' || in == 'd')
						{
							t = t - xkm * 20;
							xk = "RTX2080Ti";
							rmb = rmb - 11999;
							xkm++;
						}
						else if (in == 'E' || in == 'e')
						{
							t = t - xkm * 50;
							xk = "RTX3070";
							rmb = rmb - 15000;
							xkm++;
						}
						else if (in == 'F' || in == 'f')
						{
							t = t - xkm * 100;
							xk = "RTX3080";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'G' || in == 'g')
						{
							t = t - xkm * 500;
							xk = "RTX3090";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'H' || in == 'h')
						{
							t = t - xkm * 500;
							xk = "RX6900XT";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'I' || in == 'i')
						{
							t = t - xkm * 500;
							xk = "XG6800";
							rmb = rmb - 21000;
							xkm++;
						}
						else if (in == 'J' || in == 'j')
						{
							t = t - xkm * 1000;
							xk = "XG6800PL";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'K' || in == 'k')
						{
							t = t - xkm * 2000;
							xk = "XG6800PR";
							rmb = rmb - 50000;
							xkm++;
						}
						else if (in == 'L' || in == 'l')
						{
							t = t - xkm * 4000;
							xk = "ANT 2.0";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'M' || in == 'N')
						{
							t = t - xkm * 4000;
							xk = "XMC88000";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'N' || in == 'n')
						{
							t = 0;
							xk = "XMC888888";
							rmb = rmb - 500000000;
							xkm++;
						}
						else if (in == 'O' || in == 'o')
						{
							t = t - xkm * 25;
							xk = "RTX2080P";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'P' || in == 'p')
						{
							t = t - xkm * 15;
							xk = "RTX2080S";
							rmb = rmb - 7999;
							xkm++;
						}
						else if (in == 'Q' || in == 'q')
						{
							t = t - xkm * 30;
							xk = "RTX2080X";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'R' || in == 'r')
						{
							t = t - xkm * 25;
							xk = "RTX3070Ti";
							rmb = rmb - 12800;
							xkm++;
						}
						else if (in == 'S' || in == 's')
						{
							t = t - xkm * 20;
							xk = "RTX3060";
							rmb = rmb - 9000;
							xkm++;
						}
						else if (in == 'T' || in == 't')
						{
							t = t - xkm * 50;
							xk = "XMC2022";
							rmb = rmb - 20220;
							xkm++;
						}
						else if (in == 'U' || in == 'u')
						{
							t = t - xkm * 40;
							xk = "XMC2021";
							rmb = rmb - 20210;
							xkm++;
						}
						else if (in == 'V' || in == 'v')
						{
							t = 0;
							xk = "XG8000";
							rmb = rmb - 800000000;
							xkm++;
							l = l / 2;
						}
						else if (in == 'W' || in == 'w')
						{
							t = 0;
							xk = "XG8200";
							rmb = rmb - 820000000;
							xkm++;
							l = l / 4;
						}
					}
					if (cel == 1)
					{
						if (in == 'A' || in == 'a')
						{
							t = t - xkm * 5;
							xk = "RTX1080";
							rmb = rmb - 6099;
							xkm++;
						}
						else if (in == 'B' || in == 'b')
						{
							t = t - xkm * 7;
							xk = "RTX1080Ti";
							rmb = rmb - 7000;
							xkm++;
						}
						else if (in == 'C' || in == 'c')
						{
							t = t - xkm * 10;
							xk = "RTX2080";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'D' || in == 'd')
						{
							t = t - xkm * 20;
							xk = "RTX2080Ti";
							rmb = rmb - 11999;
							xkm++;
						}
						else if (in == 'E' || in == 'e')
						{
							t = t - xkm * 50;
							xk = "RTX3070";
							rmb = rmb - 15000;
							xkm++;
						}
						else if (in == 'F' || in == 'f')
						{
							t = t - xkm * 100;
							xk = "RTX3080";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'G' || in == 'g')
						{
							t = t - xkm * 500;
							xk = "RTX3090";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'H' || in == 'h')
						{
							t = t - xkm * 500;
							xk = "RX6900XT";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'I' || in == 'i')
						{
							t = t - xkm * 500;
							xk = "XG6800";
							rmb = rmb - 21000;
							xkm++;
						}
						else if (in == 'J' || in == 'j')
						{
							t = t - xkm * 1000;
							xk = "XG6800PL";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'K' || in == 'k')
						{
							t = t - xkm * 2000;
							xk = "XG6800PR";
							rmb = rmb - 50000;
							xkm++;
						}
						else if (in == 'L' || in == 'l')
						{
							t = t - xkm * 4000;
							xk = "ANT 2.0";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'M' || in == 'N')
						{
							t = t - xkm * 4000;
							xk = "XMC88000";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'N' || in == 'n')
						{
							t = 0;
							xk = "RX6900XT";
							rmb = rmb - 500000000;
							xkm++;
						}
						else if (in == 'O' || in == 'o')
						{
							t = t - xkm * 25;
							xk = "RTX2080P";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'P' || in == 'p')
						{
							t = t - xkm * 15;
							xk = "RTX2080S";
							rmb = rmb - 7999;
							xkm++;
						}
						else if (in == 'Q' || in == 'q')
						{
							t = t - xkm * 30;
							xk = "RTX2080X";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'R' || in == 'r')
						{
							t = t - xkm * 25;
							xk = "RTX3070Ti";
							rmb = rmb - 12800;
							xkm++;
						}
						else if (in == 'S' || in == 's')
						{
							t = t - xkm * 20;
							xk = "RTX3060";
							rmb = rmb - 9000;
							xkm++;
						}
						else if (in == 'T' || in == 't')
						{
							t = t - xkm * 50;
							xk = "XMC2022";
							rmb = rmb - 20220;
							xkm++;
						}
						else if (in == 'U' || in == 'u')
						{
							t = t - xkm * 40;
							xk = "XMC2021";
							rmb = rmb - 20210;
							xkm++;
						}
						else if (in == 'V' || in == 'v')
						{
							t = 0;
							xk = "XG8000";
							rmb = rmb - 800000000;
							xkm++;
							l = l / 2;
						}
						else if (in == 'W' || in == 'w')
						{
							t = 0;
							xk = "XG8200";
							rmb = rmb - 820000000;
							xkm++;
							l = l / 4;
						}
					}
				}
				else if (in == 'B' || in == 'b')
				{
					in = 0;
					cout << "A | RTX1080   |" << endl;
					cout << "B | RTX1080Ti |" << endl;
					cout << "C | RTX2080   |" << endl;
					cout << "D | RTX2080Ti |" << endl;
					cout << "E | RTX3070   |" << endl;
					cout << "F | RTX3080   |" << endl;
					cout << "G | RTX3090   |" << endl;
					cout << "H | RX6900XT  |" << endl;
					cout << "I | XG6800    |" << endl;
					cout << "J | XG6800PL  |" << endl;
					cout << "K | XG6800PR  |" << endl;
					cout << "L | ANT 2.0   |" << endl;
					cout << "M | XMC88000  |" << endl;
					cout << "N | XMC88888  |" << endl;
					cout << "O | RTX2080P  |" << endl;
					cout << "P | RTX2080S  |" << endl;
					cout << "Q | RTX2080X  |" << endl;
					cout << "R | RTX3070Ti |" << endl;
					cout << "S | RTX3060   |" << endl;
					cout << "T | XMC2022   |" << endl;
					cout << "U | XMC2021   |" << endl;
					cout << "V | XG8000    |" << endl;
					cout << "W | XG8200    |" << endl;
					cout << "请选择要查看的图鉴：" << endl;
					if (in == 'A' || in == 'a')
					{
						cout << "RTX1080" << endl;
						cout << "还不错的显卡，但不能当作矿卡使用" << endl;
						cout << "D级品质|效率5" << endl;
					}
					else if (in == 'B' || in == 'b')
					{
						cout << "RTX1080Ti" << endl;
						cout << "1080升级版，但不能当作矿卡使用" << endl;
						cout << "D+级品质|效率7" << endl;
					}
					else if (in == 'C' || in == 'c')
					{
						cout << "RTX2080" << endl;
						cout << "20系列的顶尖显卡，但一般不当作矿卡使用" << endl;
						cout << "C级品质|效率10" << endl;
					}
					else if (in == 'D' || in == 'd')
					{
						cout << "RTX2080Ti" << endl;
						cout << "2080升级版，但一般不当作矿卡使用" << endl;
						cout << "C+级品质|效率20" << endl;
					}
					else if (in == 'E' || in == 'e')
					{
						cout << "RTX3070" << endl;
						cout << "30系列的中等显卡，一般用于电竞" << endl;
						cout << "B级品质|效率50" << endl;
					}
					else if (in == 'F' || in == 'f')
					{
						cout << "RTX3080" << endl;
						cout << "30系列的高端显卡，一般用于电竞" << endl;
						cout << "B+级品质|效率100" << endl;
					}
					else if (in == 'G' || in == 'g')
					{
						cout << "RTX3090" << endl;
						cout << "30系列的顶尖显卡，一般当作矿卡或电竞显卡使用" << endl;
						cout << "A级品质|效率500" << endl;
					}
					else if (in == 'H' || in == 'h')
					{
						cout << "RX6900XT" << endl;
						cout << "AMD的最顶尖显卡，拥有更高的性价比" << endl;
						cout << "A级品质|效率500" << endl;
					}
					else if (in == 'I' || in == 'i')
					{
						cout << "XG6800" << endl;
						cout << "星际集团6系列的顶尖显卡，性价比仅次AMD" << endl;
						cout << "A级品质|效率500" << endl;
					}
					else if (in == 'J' || in == 'j')
					{
						cout << "XG6800PL" << endl;
						cout << "6800的PLUS版本性价比极高" << endl;
						cout << "A+级品质|效率1000" << endl;
					}
					else if (in == 'K' || in == 'k')
					{
						cout << "XG6800PR" << endl;
						cout << "6800的PRO版本性价比极高" << endl;
						cout << "S级品质|效率2000" << endl;
					}
					else if (in == 'L' || in == 'l')
					{
						cout << "ANT(蚂蚁矿机)2.0" << endl;
						cout << "世界著名的矿机组" << endl;
						cout << "S+级品质|效率4000" << endl;
					}
					else if (in == 'M' || in == 'm')
					{
						cout << "XMC88000" << endl;
						cout << "星际公司的矿机组" << endl;
						cout << "S+级品质|效率4000" << endl;
					}
					else if (in == 'N' || in == 'n')
					{
						cout << "XMC888888" << endl;
						cout << "星际公司的矿机组，算力相当于100台服务器" << endl;
						cout << "SS级品质|效率10000" << endl;
					}
					else if (in == 'W' || in == 'w')
					{
						cout << "XG8200" << endl;
						cout << "星际公司的终极系列（8系列）的顶尖显卡，算力位居世界第一（价格同样位居世界第一）" << endl;
						cout << "SSS级品质|效率100000" << endl;
					}
					else if (in == 'O' || in == 'o' || in == 'P' || in == 'p' || in == 'Q' || in == 'q')
					{
						cout << "RTX2080P/S/X" << endl;
						cout << "2080的升级版矿卡，一般用于电竞或者矿卡" << endl;
						cout << "B级品质|效率25/15/30" << endl;
					}
					else if (in == 'R' || in == 'r')
					{
						cout << "RTX3070Ti" << endl;
						cout << "30系列的中等显卡，3070的低配版" << endl;
						cout << "B级品质|效率25" << endl;
					}
					else if (in == 'S' || in == 's')
					{
						cout << "RTX3060" << endl;
						cout << "30系列的中等显卡，一般用于电竞" << endl;
						cout << "B级品质|效率20" << endl;
					}
					else if (in == 'T' || in == 't')
					{
						cout << "XMC2022" << endl;
						cout << "星际2022年推出的冬奥会宣传显卡，曾经可以免费使用，一般用于电竞" << endl;
						cout << "B级品质|效率50" << endl;
					}
					else if (in == 'U' || in == 'u')
					{
						cout << "XMC2021" << endl;
						cout << "星际集团2021年推出的跨年显卡，一般用于电竞" << endl;
						cout << "B级品质|效率40" << endl;
					}
					else if (in == 'V' || in == 'v')
					{
						cout << "XG8000" << endl;
						cout << "星际公司的终极系列（8系列）的次顶尖显卡，算力位居世界第二（价格同样位居世界第二）" << endl;
						cout << "B级品质|效率50000" << endl;
					}
					else
					{
						in = 0;
					}
				}
				if (l < 1)
				{
					l = 1;
				}
				if (rmb < 0 && rmb >= -10000)
				{
					if (cel == 0)
					{
						cout << "考虑到您的不易，星际银行提供免费透支服务（透支最高上限-10000￥）" << endl;
						cout << "祝您生活愉快！" << endl << endl;
						cout << "中国星际国际科技有限公司 金融部" << endl;
						cout << y << "年" << m << "月" << d << "日" << endl;
					}
					else if (cel == 1)
					{
						cout << "Considering your difficulties, XINGJI Bank provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
						cout << "Have a nice day!" << endl << endl;
						cout << "China XINGJI International Technology Co.Ltd.   Finance Department" << endl;
						cout << m << "/" << d << "/" << y << endl;
					}
				}
				else if (rmb < -10000)
				{
					cout << "您已超过免费透支额度，将按 %0.5/天 的利息计算。" << endl;
					cout << "If you have exceeded your free overdraft limit, interest will be calculated at %1/day." << endl;
					um = um + abs(rmb);
				}
				if (t < 0)
				{
					t = 0;
				}
			}
			if (in == 'E' || in == 'e')
			{
				cout << "Sorry, this section has not been updated in English." << endl;
				cout << endl;
				if (mail[0] == 1)
				{
					cout << "新邮件：周年庆" << endl;
					cout << "XINGJI(R)-五周年庆 & 挖矿模拟器周年庆" << endl;
					cout << "9月，星际集团成立五周年了！我们为所有客户送上周年庆礼物+中秋礼物！" << endl;
					cout << "请记得及时领取哦！输入A领取。奖励：钱*9w、比特币*1" << endl;
					cout << endl;
					cin >> in;
					cout << "领取成功！！！" << endl;
					rmb = rmb + 90000;
					s++;
					mail[0] = 0;
				}
				if (mail[1] == 1)
				{
					cout << "新邮件：国庆快乐" << endl;
					cout << "新中国成立73周年" << endl;
					cout << "1949年10月1日，新中国成立了！这标志着中国人民站起来了！我们在这欢庆" << endl;
					cout << "的节日里为大家送上礼物！" << endl;
					cout << "请记得及时领取哦！输入A领取。奖励：钱*10w、比特币*1" << endl;
					cout << endl;
					cin >> in;
					cout << "领取成功！！！" << endl;
					rmb = rmb + 100000;
					s++;
					mail[1] = 0;
				}
				if (mail[2] == 1)
				{
					cout << "新邮件：芦芦生日快乐" << endl;
					cout << "XINGJI(R)副董事长芦芦生日快乐" << endl;
					cout << "10月12日是芦芦的生日！祝芦芦生日快乐！！！" << endl;
					cout << "请记得及时领取哦！输入A领取。奖励：钱*10w、比特币*12" << endl;
					cout << endl;
					cin >> in;
					cout << "领取成功！！！" << endl;
					rmb = rmb + 120000;
					s = s + 12;
					mail[2] = 0;
				}
			}
			if (rmb < 0 && rmb >= -10000)
			{
				if (cel == 0)
				{
					cout << "考虑到您的不易，星际银行提供免费透支服务（透支最高上限-10000￥）" << endl;
					cout << "祝您生活愉快！" << endl << endl;
					cout << "中国星际国际科技有限公司 金融部" << endl;
					cout << y << "年" << m << "月" << d << "日" << endl;
				}
				else if (cel == 1)
				{
					cout << "Considering your difficulties, XINGJI Bank provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
					cout << "Have a nice day!" << endl << endl;
					cout << "China XINGJI International Technology Co.Ltd.   Finance Department" << endl;
					cout << m << "/" << d << "/" << y << endl;
				}
			}
			else if (rmb < -10000)
			{
				cout << "您已超过免费透支额度，将按 %1/天 的利息计算。" << endl;
				cout << "If you have exceeded your free overdraft limit, interest will be calculated at %1/day." << endl;
				um = um + abs(rmb);
			}
			if (t < 0)
			{
				t = 0;
			}
		if (c == 2)
		{
			if (cel == 0)
			{
				in = 0;
				cout << "A.多少项后自动暂停   B.更新日志   C.关于   D.DLC导入   E.语言   F.贷款   G.挖矿模式   H.VIP   I.兑换码   J.版本更新" << endl;
				cout << "A:" << wh << endl;
				cout << "请选择要更改的项目：";
			}
			else if (cel == 1)
			{
				in = 0;
				cout << "A.How many entries are automatically paused after   B.Changelog   C.About   D.DLC import   E.Language   F.Loan   G.Mining mode   H.VIP   I.Key   J.up" << endl;
				cout << "A:" << wh << endl;
				cout << "Please select the item you want to change:";
			}
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cin >> inm;
				wh = inm;
			}
			else if (in == 'B' || in == 'b')
			{
				if (cel == 0)
				{
					cout << "================ XINGJI Update ================" << endl;
					cout << "1.6.8更新 - 图鉴更新" << endl;
					cout << "·加入了图鉴系统" << endl;
					cout << "·停止更新英文" << endl;
					cout << "·修复了部分BUG" << endl;
					cout << "1.6.7更新 - 模式更新" << endl;
					cout << "·加成系统下架维护" << endl; 
					cout << "·全新“离线模式”" << endl;	
					cout << "·兑换码系统开启" << endl;	
					cout << "1.6.5 & 1.6.6 - 周年庆/国庆（生日）更新" << endl;
					cout << "·新增邮件功能" << endl;
					cout << "·向所有用户发送了礼物邮件" << endl;
					cout << "1.6.4更新 - 技能更新" << endl;
					cout << "·新增技能卡8张" << endl;
					cout << "·新增技能卡加成功能" << endl;
					cout << "·新增抽奖功能（暂未完善，第二部分将于英文更新第二部分一起更新）" << endl;
					cout << "1.6.3更新 - 分区更新" << endl;
					cout << "·新增了服务器分区功能" << endl;
					cout << "·新增了5个服务器分区" << endl;
					cout << "·新增了更新预告功能" << endl;
					cout << "1.6.2更新 - 显卡更新" << endl;
					cout << "·新增了4种显卡" << endl;
					cout << "·新增了部分显卡可增加挖矿成功概率" << endl;
					cout << "·新增了更新主题（暂未添加英文版）" << endl;
					cout << "·从本次更新起将保留每次更新前的版本" << endl;
					cout << "·修复了几率大于100%导致的崩溃问题" << endl;
					cout << "1.6.1更新 - 初始化更新" << endl;
					cout << "·新增了初始化页面" << endl;
					cout << "·删除了XMC2022显卡" << endl;
					cout << "·修复了占用率过高导致的崩溃问题（虽然占用率仍然很高......）" << endl;
					cout << "1.6.0更新 - 存档更新" << endl;
					cout << "·新增了存档保存功能" << endl;
					cout << "·修复了一些已知BUG" << endl;
					cout << "1.5.9更新 - 金融更新" << endl;
					cout << "·新增了透支功能" << endl;
					cout << "1.5.8更新 - 冬奥更新" << endl;
					cout << "·新增了种5显卡" << endl;
					cout << "·为庆祝北京冬奥会新增了XMC2022显卡（免费）（冬奥结束后付费）" << endl;
					cout << "1.5.6和1.5.7更新 - 英文更新" << endl;
					cout << "·添加了英文" << endl;
					cout << "1.5.5更新 - 显卡更新" << endl;
					cout << "·新增了6种显卡" << endl;
					cout << "1.5.4更新 - 组件更新" << endl;
					cout << "·新增了DLC" << endl;
					cout << "·修复了成功率与值相反的BUG" << endl;
					cout << "·修复了只能暂停一次的BUG" << endl;
					cout << "1.5.3更新 - 交易更新" << endl;
					cout << "·新增了商店" << endl;
					cout << "·删除了自动更新" << endl;
					cout << "·新增了8种显卡" << endl;
					cout << "1.5.2更新 - 更新更新" << endl;
					cout << "·新增了自动更新" << endl;
					cout << "1.5.1更新 - 优化更新" << endl;
					cout << "·新增了加载条" << endl;
					cout << "·优化了代码" << endl;
					cout << "·修复了文字乱码的情况" << endl;
					cout << "1.5.0更新 - 彩蛋更新" << endl;
					cout << "·增加了彩蛋" << endl;
					cout << "·版本号增致三位数" << endl;
					cout << "1.4.0更新 - 重大更新" << endl;
					cout << "·修复了错误的版本号" << endl;
					cout << "·添加了设置" << endl;
					cout << "·优化了代码" << endl;
					cout << "·添加了更新日志" << endl;
					cout << "·添加了暂停界面" << endl;
					cout << "·添加了定时暂停" << endl;
					cout << "·成功概率可调整" << endl;
					cout << "·每项间隔时间可调整" << endl;
					cout << "1.3.0更新 - 开始更新" << endl;
					cout << "·增加了开始界面" << endl;
					cout << "·优化了代码" << endl;
					cout << "·修复了了安装包乱码问题" << endl;
					cout << "1.2.0更新 - 时间更新" << endl;
					cout << "·增加了安装包" << endl;
					cout << "·修复了时间溢出问题" << endl;
					cout << "1.1.0更新 - 编译更新" << endl;
					cout << "·增加了时间" << endl;
					cout << "·修复了无法运行的问题" << endl;
					cout << "·修复了没有sln文件编译器不能用的问题" << endl;
					cout << "1.0.0更新 - 应用更新" << endl;
					cout << "·发布了应用" << endl;
				}
				else if (cel == 1)
				{
					cout << "================ XINGJI Update ================" << endl;
					cout << "Update 1.6.8 - Illustrated Book Update" << endl;
					cout << "·Fixed some known bugs" << endl;
					cout << "·Added to the Illustrated System" << endl;
					cout << "·Stop updating English" << endl;
					cout << "·Update 1.6.7 - Schema Update" << endl;
					cout << "·Bonus System Removal Maintenance" << endl;
					cout << "·New Offline Mode" << endl;	
					cout << "·Redeem code system on" << endl;
					cout << "1.6.5 & 1.6.6 - Anniversary / National Day (Birthday) Update" << endl;
					cout << "·New Mail Function" << endl;
					cout << "·Sent a gift email to all users" << endl;
					cout << "1.6.4 Update - Skills Update" << endl;
					cout << "·8 new skill cards" << endl;
					cout << "·Add skill card bonus" << endl;
					cout << "· New sweepstakes feature (not yet perfect, part 2 will be updated in English with part 2)" << endl;
					cout << "1.6.3 Update - Partition Update" << endl;
					cout << "·Server partitioning feature added" << endl;
					cout << "·5 new server partitions" << endl;
					cout << "·New update trailer feature" << endl;
					cout << "1.6.2 Update" << endl;
					cout << "·4 new graphics cards" << endl;
					cout << "·Added some graphics cards to increase the probability of mining success" << endl;
					cout << "·New updated topic (English version not added yet)" << endl;
					cout << "·From this update will retain the version before each update" << endl;
					cout << "·Fixed crashes caused by a chance greater than 100%" << endl;
					cout << "1.6.1 Update" << endl;
					cout << "·An initialization page has been added" << endl;
					cout << "·The XMC2022 graphics card was removed" << endl;
					cout << "·Fixed a crash issue caused by high occupancy (although occupancy is still high...) " << endl;
					cout << "1.6.0 Update" << endl;
					cout << "·Added archive saving function" << endl;
					cout << "·Fixed some known bugs" << endl;
					cout << "1.5.9 Update" << endl;
					cout << "·Overdraft feature added" << endl;
					cout << "1.5.8 update" << endl;
					cout << "·Added 5 new graphics cards" << endl;
					cout << "·Added XMC2022 graphics card(free)to celebrate the Beijing Winter Olympics(paid after the Winter Olympics)" << endl;
					cout << "1.5.6 and 1.5.7 update" << endl;
					cout << "·Added English" << endl;
				}
			}
			else if (in == 'C' || in == 'c')
			{
				if (cel == 0)
				{
					cout << "===================================================" << endl;
					cout << "  名称：挖矿模拟器               编译器：Dev-C++   " << endl;
					cout << "  版本：1.6.8     编写器：Microsoft Visual Studio  " << endl;
					cout << "  开发商：XINGJI(R) Co.Inc.                        " << endl;
					cout << "  编号：" << key << "                        大小：2.85MB  " << endl;
					cout << "      版权所有 XINGJI(R) Co.Itd. 保留所有权利      " << endl;
					cout << "===================================================" << endl;
				}
				else if (cel == 1)
				{
					cout << "===================================================" << endl;
					cout << "  name:Mining simulator         Compiler:Dev-C++   " << endl;
					cout << "  Version:1.6.8    Writer:Microsoft Visual Studio  " << endl;
					cout << "  Developer:XINGJI(R) Co. Inc.                     " << endl;
					cout << "  Number:" << key << "                        Size:2.85MB  " << endl;
					cout << "  Copyright XINGJI(R) Co.Itd. All rights reserved  " << endl;
					cout << "===================================================" << endl;
				}
				Sleep(1000);
			}
			else if (in == 'D' || in == 'd')
			{
				if (cel == 0)
				{
					cout << "请将DLC文件放到 | C盘 > Program Files > 挖矿模拟器 > DLC | 文件夹下后，输入A打开；输入B退出" << endl;
					cin >> in;
					if (in == 'A' || in == 'a')
					{
						cout << "请选择DLC：A.无限金钱" << endl;
						cin >> in;
						if (in == 'A' || in == 'a')
						{
							cout << "正在安装中" << endl;
							Sleep(1000);
							system("c:\\Program Files\\挖矿模拟器\\DLC\\DLC1\\DLC.exe");
							return 0;
						}
					}
				}
				else if (cel == 1)
				{
					cout << "Please place the DLC file in | C drive > Program Files > 挖矿模拟器 > DLC | After the folder is down, enter A to open; enter B to exit" << endl;
					cin >> in;
					if (in == 'A' || in == 'a')
					{
						cout << "Please select DLC:A.Unlimited Money" << endl;
						cin >> in;
						if (in == 'A' || in == 'a')
						{
							cout << "Installing" << endl;
							Sleep(1000);
							system("c:\\Program Files\\挖矿模拟器\\DLC\\DLC1\\DLC.exe");
							return 0;
						}
					}
				}
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "A.简体中文   B.English" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cel = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					cel = 1;
				}
			}
			else if (in == 'F' || in == 'f')
			{
				if (cel == 0)
				{
					cout << "请输入您的贷款额度（利息1%/天）：" << endl;
				}
				else if (cel == 1)
				{
					cout << "Please enter your loan amount (interest 1%/day):" << endl;
				}
				cin >> inm;
				um = um + inm;
			}
			else if (in == 'G' || in == 'g')
			{
				if (cel == 0)
				{
					cout << "请选择模式      当前模式 奇亚币挖矿" << endl;
					cout << "        A.比特币   B.奇亚币        " << endl;
				}
				else if (cel == 1)
				{
					cout << "Please select the mode   current mode Chiacoin mining" << endl;
					cout << "               A.Bitcoin   B.Chiacoin               " << endl;
				}
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					if (cel == 0)
					{
						cout << "切换成功" << endl;
					}
					else if (cel == 1)
					{
						cout << "The switch was successful" << endl;
					}
					mod = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					if (cel == 0)
					{
						cout << "切换成功" << endl;
					}
					else if (cel == 1)
					{
						cout << "The switch was successful" << endl;
					}
					mod = 1;
				}
			}
			else if (in == 'H' || in == 'h')
			{
				if (cel == 0)
				{
					cout << "XINGJI VIP(永久)   仅需 5 RMB" << endl;
				}
				else if (cel == 1)
				{
					cout << "XINGJI VIP   It only costs 1$" << endl;
				}
			}
			else if (in == 'I' || in == 'i')
			{
				string m_on_key_word = "";
				cout << "请输入兑换码：";
				cin >> m_on_key_word;
				cout << endl;
				if (m_on_key_word == "167YYDSX2073")
				{
					cout << "获得：" << endl << "钱*11451、比特币*4" << endl;
					rmb = rmb + 11451;
					s = s + 4;
				}
				else if (m_on_key_word == "376CZXCF7732")
				{
					cout << "获得：" << endl << "钱*8888、比特币*8" << endl;
					rmb = rmb + 8888;
					s = s + 8;
				}
				else if (m_on_key_word == "789CZKCT8601")
				{
					cout << "获得：" << endl << "钱*6666、比特币*6" << endl;
					rmb = rmb + 6;
					s = s + 6;
				}
			}
			else if (in == 'J' || in == 'j')
			{
				cout << "正在检测更新中" << endl;
				Sleep(1000);
				cout << "已是最新版本：1.6.8" << endl;
			}
		}
		while (c == 1)
		{
			srand((int)time(0));
			l = rand() % 500;
			bd = d;
			w++;
			if (y % 4 == 0 && y != 0)
			{
				if (m == 2)
				{
					if (d == 29)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 12)
				{
					if (d == 31)
					{
						y++;
						d = 1;
						m = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				{
					if (d == 31)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 4 || m == 6 || m == 9 || m == 11)
				{
					if (d == 30)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
			}
			else
			{
				if (m == 2)
				{
					if (d == 29)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 12)
				{
					if (d == 31)
					{
						y++;
						d = 1;
						m = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				{
					if (d == 31)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 4 || m == 6 || m == 9 || m == 11)
				{
					if (d == 30)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
			}
			i++;
			if (bd != d)
			{
				um = um + rmb / 100 * 0.5;
			}
			int x = 0;
			if (m < 10)
			{
				x++;
				if (d < 10)
				{
					x++;
				}
			}
			else if (d < 10)
			{
				x++;
			}
			if (i % l == 0)
			{
				s++;
				cout << " #### " << y << "/" << m << "/" << d;
				for (int i = 0; i < x; i++)
				{
					cout << " ";
				}
				cout << " | The match was successful | 成功 " << s << " 失败 " << n << " #### " << endl;
				Sleep(t);
			}
			else
			{
				n++;
				cout << " **** " << y << "/" << m << "/" << d;
				for (int i = 0; i < x; i++)
				{
					cout << " ";
				}
				cout << " |      The match faile     | 成功 " << s << " 失败 " << n << " **** " << endl;
				Sleep(t);
			}
			if (w == wh)
			{
				if (cel == 0)
				{
					cout << "您现在共有" << s << "枚比特币，价值" << s * b_yuan << " ￥" << endl;
					rmb = rmb + s * b_yuan;
					cout << "当前债务：" << um << "￥" << endl;
					cout << "     A.继续     B.退出     C.主页     D.还债     " << endl;
				}
				else if (cel == 1)
				{
					cout << "You now have a total of " << s << " Bitcoin worth " << s * b_yuan << "$" << endl;
					rmb = s * b_yuan;
					cout << "Current debt:" << um * 0.16 << "$" << endl;
					cout << "     A. Continue     B. Exit     C. Menu     D. Debt repayment" << endl;
				}
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					c = 1;
				}
				else if (in == 'B' || in == 'b')
				{
					//write(xk, rmb, wh);
					cout << " | 感谢您游玩挖矿模拟器 | " << endl;
					cout << " |      正在退出中      | " << endl;
					Sleep(1000);
					return 0;
				}
				else if (in == 'C' || in == 'c')
				{
					c = 2;
				}
				else if (in == 'D' || in == 'd')
				{
					rmb = rmb - um;
					if (rmb < 0)
					{
						cout << "对不起，您的余额不够还债" << endl;//英文更新第三部分需更新
					}
					else if (cel == 0)
					{
						cout << "还债完毕" << endl;
						cout << "当前余额" << rmb << "￥" << endl;
						um = 0;
					}
					else if (cel == 1)
					{
						cout << "The debt was repaid" << endl;
						cout << "The current balance" << rmb * 0.16 << "$" << endl;
						um = 0;
					}
					Sleep(1000);
				}
				w = 0;
			}
		}
	}
}
//void read(string xk, long long rmb, long long wh)
//{
//	freopen("game.txt", "r", stdin);
//	cin >> xk >> rmb >> wh;
//	fclose(stdin);
//	return xk & rmb & wh;
//}
//void wirte(string xk, long long rmb, long long wh)
//{
//	freopen("game.txt", "w", stdout);
//	cout << xk << endl << rmb << endl << wh << endl;
//	fclose(stdout);
//	return 0;
//}

//芦芦万岁！