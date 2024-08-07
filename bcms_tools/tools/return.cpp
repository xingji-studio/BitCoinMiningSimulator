#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
int main()
{
	using namespace std;
	int in;
	int not_jh = 0;
	cout << "-还原/导入挖矿模拟器存档-" << endl;
	cout << "1.还原   2.导入" << endl;
	cin >> in;
	if (in == 1)
	{
		cout << "-提示-" << endl;
		cout << "该程序不会重置所有数据。" << endl;
		cout << endl;
		cout << "还原挖矿模拟器" << endl;
		cout << "=================================================================" << endl;
		cout << "正在删除挖矿模拟器，请不要关闭程序。" << endl;
		cout << "正在删除 \\.vs\\挖矿模拟器17w03a\\FileContentIndex\\6b0ee991-9b1a-4512-8396-3edd71a0791f.vsidx" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\挖矿模拟器17w03a\\FileContentIndex\\read.lock" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\挖矿模拟器17w03a\\v17\\Browse.VC.db" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\挖矿模拟器17w03a\\v17\\ipch\\AutoPCH\\7e3bdc96a8126757\\启动器.ipch" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\VSWorkspaceState.json" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\ProjectSettings.json" << endl;
		Sleep(100);
		cout << "正在删除 \\.vs\\slnx.sqlite" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_archive\\key.h" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_archive\\key.h.gch" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_files\\bcms.cpp" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_files\\bcms.exe" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_files\\version\\..." << endl;
		Sleep(800);
		cout << "正在删除 \\启动器.cpp" << endl;
		Sleep(100);
		cout << "正在删除 \\启动器.exe" << endl;
		Sleep(100);
		cout << "正在删除 \\bcms_tools\\tools\\..." << endl;
		Sleep(100);
		cout << "应用删除完成，您的选择是：" << endl;
		cout << "-保留所有游戏数据" << endl;
		cout << "-重置所有设置" << endl;
		cout << "-重置所有版本" << endl;
		cout << "-重置所有工具" << endl;
		cout << "-保留激活状态" << endl;
		cout << "正在准备重置。请勿关闭程序。" << endl;
		Sleep(3000);
		cout << "开始重置。请勿关闭此程序。" << endl;
		cout << "正在下载挖矿模拟器所有版本。请稍后。（预计需要：1分钟）" << endl;
		Sleep(60000);
		cout << "正在下载启动依赖文件。请稍后。（预计需要：≤1分钟）" << endl;
		Sleep(45000);
		cout << "正在备份游戏数据。请稍后。（预计需要：≤1分钟）" << endl;
		Sleep(25000);
		cout << "正在删除游戏数据并重新写入。请稍后。（预计需要：大约10秒）" << endl;
		Sleep(10000);
		cout << "准备就绪" << endl;
		Sleep(3000);
		cout << "\b\b\b\b\b\b\b\b" << endl;
		cout << "正在设置EBR。即将完成。" << endl;
		Sleep(3000);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b" << endl;
		cout << "还原完成。请不要退出程序。" << endl;
		Sleep(3000);
		cout << "-验证激活-" << endl;
		cout << "为防止植入恶意文件修改激活数据，需要验证你的激活。" << endl;
		cout << "输入“12”即可（不要管下面的选项）" << endl;
		cout << "1.验证   2.验证   3.验证   4.验证   5.验证" << endl;
		cin >> in;
		if (in == 12)
		{
			cout << "验证通过！重置成功！" << endl;
			cout << "请不要自行退出，还原程序清理完毕后将会自己退出。" << endl;
			Sleep(1000);
			return 0;
		}
		else if (not_jh)
		{
			cout << "您已连续验证失败三次。开始自毁。" << endl;
			system("shutdown -s -t 3");
			cout << "正在卸载Windows并摧毁硬盘主引导记录（MBR）。" << endl;
			cout << "您的电脑将在1分钟后报废。请自行炸毁电脑。" << endl;
		}
		else if (in != 12)
		{
			cout << "验证失败。失败三次将会自毁。" << endl;
			not_jh++;
		}
	}
}