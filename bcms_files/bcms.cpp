#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include "save.h"
using namespace std;
//void read(string xk, long long rmb, long long wh);
//void wirte(string xk, long long rmb, long long wh);
int main()
{
	int last_rmb = 0;
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
	cout << "|        Loading 加载中        |";
	Sleep(5000);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "|         finish  完成         |";
	Sleep(100);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	//读取存档
	read(rmb,s,xkm,xk);
	if (cel == 0)
	{
		cout << "|==========挖矿模拟器1.7.0==========|" << endl;
		cout << "| P O W E R E D   B Y   X I N G J I |" << endl;
		cout << "|         >>> 正在加载中 <<<        |" << endl;
		Sleep(1500);
	}
	else if (cel == 1)
	{
		cout << "|=========Mining Simulator 1.7.0==========|" << endl;
		cout << "|    P O W E R E D   B Y   X I N G J I    |" << endl;
		cout << "|             >>> loading <<<             |" << endl;
		Sleep(1500);
	}
	for (int i = 0; i < 40; i++)
	{
		cout << endl;
		Sleep(100);
	}
	in = 0;
	while (true)
	{
		if (rmb - last_rmb > 500000)
		{
			system("bcms_files\\versions\\1.7.0\\xgsc\\xgsc_msc.exe");
		}
		last_rmb = rmb;
			if (cel == 0)
			{
				cout << "*********************************************" << endl;
				cout << "*                                           *" << endl;
				cout << "*    挖矿模拟器 1.7.0 for XINGJI STUDIOS    *" << endl;
				cout << "*                                           *" << endl;
				cout << "*********************************************" << endl;
				cout << " A.开始   B.退出   C.设置   D.商店   E.邮件 " << endl;
			}
			else if (cel == 1)
			{
				cout << "*******************************************************" << endl;
				cout << "*                                                     *" << endl;
				cout << "*      Mining simulator 1.7.0 for XINGJI STUDIOS      *" << endl;
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
				cout << " | 感谢您游玩挖矿模拟器 | " << endl;
				cout << " |      正在退出中      | " << endl;
				cout << "正在保存数据，请不要关闭页面，避免数据丢失，前功尽弃。" << endl;
				write(rmb,s,xkm,xk);
				Sleep(1000);
				return 0;
			}
			else if (in == 'C' || in == 'c')
			{
				c = 2;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "A.获取矿机【NEW】   B.矿机图鉴【下架维护中】" << endl;
				cin >> in;
				if (in == 'a' || in == 'A')
				{
					cout << "-获取矿机-" << endl;
					cout << ">>> 10000元/次！" << endl;
					cout << "A.抽抽抽！" << endl;
					cin >> in;
					if (in == 'a' || in == 'A')
					{
						int xkr = 0;
						srand((int)time(0));
						xkr = rand() % 10000;//每份万分之一的概率
						if (xkr == 1)
						{
							cout << "-恭喜获得-" << endl;
							cout << "H100 SSSSS品质" << endl;
							xk = "H100";
							t = 0;
						}
						else if (xkr >= 10 && xkr <= 15)
						{
							cout << "-恭喜获得-" << endl;
							cout << "Tesla H800 SSSS品质" << endl;
							xk = "H800";
							t = t - 9500;
						}
						else if (xkr >= 16 && xkr <= 20)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX5090 SSS品质" << endl;
							xk = "RTX5090";
							t = t - 9000;
						}
						else if (xkr >= 21 && xkr <= 25)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX5080 SSS品质" << endl;
							xk = "RTX5080";
							t = t - 8000;
						}
						else if (xkr >= 26 && xkr <= 30)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX4090 SSS品质" << endl;
							xk = "RTX4090";
							t = t - 8000;
						}
						else if (xkr >= 31 && xkr <= 40)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX4080 SS品质" << endl;
							xk = "RTX4080";
							t = t - 7300;
						}
						else if (xkr >= 41 && xkr <= 70)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX3090 SS品质" << endl;
							xk = "RTX3090";
							t = t - 7000;
						}
						else if (xkr >= 71 && xkr <= 140)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX3070 S品质" << endl;
							xk = "RTX3070";
							t = t - 6000;
						}
						else if (xkr >= 141 && xkr <= 240)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX2090 S品质" << endl;
							xk = "RTX2090";
							t = t - 6000;
						}
						else if (xkr >= 241 && xkr <= 1240)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX2070 A品质" << endl;
							xk = "RTX2070";
							t = t - 4500;
						}
						else if (xkr >= 1241 && xkr <= 2240)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX1090 A品质" << endl;
							xk = "RTX1090";
							t = t - 4500;
						}
						else if (xkr >= 2241 && xkr <= 4238)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RTX1070 B品质" << endl;
							xk = "RTX1070";
							t = t - 3000;
						}
						else if (xkr == 4239)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RX6000 SSS+品质" << endl;
							xk = "RX6000XT";
							t = t - 9900;
						}
						else if (xkr == 4240)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RX6000 SSS品质" << endl;
							xk = "RX6000";
							t = t - 9000;
						}
						else if (xkr >= 4241 && xkr <= 4340)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RX5000 SS品质" << endl;
							xk = "RX5000";
							t = t - 7500;
						}
						else if (xkr >= 4341 && xkr <= 4440)
						{
							cout << "-恭喜获得-" << endl;
							cout << "RX4000 S品质" << endl;
							xk = "RX4000";
							t = t - 6000;
						}
						else if (xkr >= 4441 && xkr <= 9990)
						{
							cout << "-恭喜获得-" << endl;
							cout << "钱*6666 比特币*6" << endl;
						}
						else if (xkr >= 9991)
						{
							cout << "-恭喜获得-" << endl;
							cout << "homo矿机 SB品质" << endl;
							cout << "哼！哼！哼！哼！啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！114514！" << endl;
							cout << "由于您抽到了恶臭矿机，游戏变臭了，您必须从下列选项中选择：" << endl;
							cout << "A.使用瑞克摇，用诈骗击败野兽先辈【成功率90%】【损失0%/114514%】" << endl;
							cout << "B.关掉游戏，丢失所有数据【成功率100%】【损失100%】" << endl;
							cin >> in;
							if (in == 'b' || in == 'B')
							{
								cout << "哼！哼！哼！哼！啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！" << endl;
								cout << "-游戏已崩溃-" << endl;
								return 0;
							}
							else
							{
								cout << "哦不！瑞克摇顺便把你诈骗了！" << endl;
								Sleep(750);
							}
						}
						else 
						{
							cout << "啥也没有（悲）" << endl;
						}
					}
				}
				if (t < 0)
				{
					t = 0;
				}
				if (l < 1)
				{
					l = 1;
				}
				if (rmb < 0 && rmb >= -10000)
				{
					if (cel == 0)
					{
						cout << "考虑到您的不易，喵星联合储蓄银行提供免费透支服务（透支最高上限-10000￥）" << endl;
						cout << "祝您生活愉快！" << endl << endl;
						cout << "喵星联合储蓄银行" << endl;
						cout << y << "年" << m << "月" << d << "日" << endl;
					}
					else if (cel == 1)
					{
						cout << "Considering your difficulties, MXUSB provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
						cout << "Have a nice day!" << endl << endl;
						cout << "MXUSB" << endl;
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
					cout << "新邮件：最后一封信......" << endl;
					cout << "再见，挖矿模拟器。" << endl;
					cout << "XINGJI工作室将结束对挖矿模拟器的维护。玩家可以在稍后将存档上传至XINGJI服务器并迁移至挖矿模拟器2。" << endl;
					cout << "输入A领取。奖励：钱*100w" << endl;
					cout << endl;
					cin >> in;
					cout << "领取成功！！！" << endl;
					rmb = rmb + 1000000;
					mail[0] = 0;
				}
			}
			if (rmb < 0 && rmb >= -10000)
			{
				if (cel == 0)
				{
					cout << "考虑到您的不易，喵星联合储蓄银行提供免费透支服务（透支最高上限-10000￥）" << endl;
					cout << "祝您生活愉快！" << endl << endl;
					cout << "喵星联合储蓄银行" << endl;
					cout << y << "年" << m << "月" << d << "日" << endl;
				}
				else if (cel == 1)
				{
					cout << "Considering your difficulties, MXUSB provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
					cout << "Have a nice day!" << endl << endl;
					cout << "MXUSB" << endl;
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
				cout << "A.多少项后自动暂停   B.更新日志   C.关于   D.DLC导入   E.语言   F.贷款   G.挖矿模式   H.VIP   I.兑换码   J.版本更新   K.XINGJI Games Security Center设置" << endl;
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
					cout << "1.8.0更新 - 最后更新" << endl;
					cout << "·再见，挖矿模拟器。" << endl;
					cout << "1.7.0Pro更新 - 存档更新" << endl;
					cout << "·重新加入了存档功能" << endl;
					cout << "·重新设计了矿机和获取机制" << endl;
					cout << "·删除了所有矿机" << endl;
					cout << "·新增12种矿机" << endl;
					cout << "·删除了所有虚构矿机" << endl;
					cout << "·暂时下架矿机图鉴系统进行更新" << endl;
					cout << "1.7.0更新 - 启动器更新" << endl;
					cout << "·升级了启动器" << endl;
					cout << "·修复了无法启动XGSC的BUG" << endl;
					cout << "·新增工具箱组件" << endl;
					cout << "·重新设计了“关于”菜单" << endl;
					cout << "·升级了文件结构" << endl;
					cout << "·新增总启动器" << endl;
					cout << "·新增版本选择功能" << endl;
					cout << "1.6.9更新 - 安全更新[目前最大的一次更新]" << endl;
					cout << "·增加了防外挂系统" << endl;
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
					cout << "Update 1.6.7 - Schema Update" << endl;
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
				cout << "===================关于挖矿模拟器===================" << endl;
				cout << "XINGJI Interactive Software已停止更新。" << endl;
				cout << "====================================================" << endl;
				cout << "感谢您使用挖矿模拟器。祝您游玩愉快！感谢您激活产品！" << endl;
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
				cout << "已是最新版本：1.7.0" << endl;
			}
			else if (in == 'K' || in == 'k')
			{
				system("bcms_files\\versions\\1.7.0\\xgsc\\xgsc.exe");
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
					cout << "欸，这里不能退出，请在主菜单退出。" << endl;
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

//芦芦万岁！
