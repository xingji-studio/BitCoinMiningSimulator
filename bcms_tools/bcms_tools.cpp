#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	int in;
	string version_isolation = "True";
	string xgsc = "True";
	string windows_comtab = "False";
	while (true)
	{
		cout << "-挖矿模拟器工具箱BCMS Tools-" << endl;
		cout << "1.升级挖矿模拟器" << endl;
		cout << "2.卸载挖矿模拟器" << endl;
		cout << "3.高级设置" << endl;
		cout << "4.安装其他工具" << endl;
		cout << "5.退出" << endl;
		cin >> in;
		if (in == 1)
		{
			cout << "对不起，暂不支持使用工具箱进行升级。" << endl;
		}
		else if (in == 2)
		{
			cout << "您确定要卸载挖矿模拟器吗？" << endl;
			cout << "1.确定" << endl;
			cout << "2.不确定" << endl;
			in = 0;
			cin >> in;
			if (in == 1)
			{
				cout << "请稍等，正在启动卸载程序。" << endl;
				system("tools\\uninstall.exe");
			}
		}
		else if (in == 3)
		{
			cout << "-高级设置-" << endl;
			cout << "1.版本隔离             状态：" << version_isolation << endl;
			cout << "2.星际游戏安全中心     状态：" << xgsc << endl;
			cout << "3.Windows兼容性设置    状态：" << windows_comtab << endl;
			in = 0;
			cin >> in;
			if (in == 1)
			{
				cout << "错误：没有修改权限。" << endl;
			}
			else if (in == 2)
			{
				cout << "错误：无法找到‘xgsc_on_off.exe’。" << endl;
			}
			else if (in == 3)
			{
				cout << "错误：Windows系统拒绝访问。" << endl;
			}
		}
		else if (in == 4)
		{
			cout << "当前已安装所有可用工具。" << endl;
		}
		else if (in == 5)
		{
			return 0;
		}
	}
}