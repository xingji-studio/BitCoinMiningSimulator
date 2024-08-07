#include <iostream>
using namespace std;
int main()
{
	char in;
	cout << "XINGJI Games Security Center 控制中心" << endl;
	cout << "A.扫描非法辅助软件" << endl;
	cout << "B.设置" << endl;
	cout << "C.补丁" << endl;
	cout << "D.安全选项" << endl;
	cout << "E.关于" << endl;
	cin >> in;
	if (in == 'A' || in == 'a')
	{
		cout << "正在扫描，您可以继续游玩。" << endl;
		cout << "扫描完成。未发现威胁。" << endl;
		cout << "用时：0秒" << endl;
	}
	else if (in == 'B' || in == 'b')
	{
		cout << "-设置-" << endl;
		cout << "A.自动扫描选项   B.扫描选项   C.补丁安装与卸载" << endl;
		cin >> in;
		if (in == 'A' || in == 'a')
		{
			cout << "-自动扫描选项-" << endl;
			cout << "X.状态：开启（不可关闭）" << endl;
			cout << "X.频率：中（不可更改）" << endl;
			cout << "A.扫描范围：bcms文件夹所有文件" << endl;
			cout << "B.扫描强度：低" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "-自动扫描范围-" << endl;
				cout << "A.bcms文件夹所有文件（推荐）" << endl;
				cout << "B.游戏所有文件" << endl;
				cout << "C.仅限游戏主体" << endl;
				cin >> in;
				cout << "切换成功！" << endl;
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "-自动扫描强度-" << endl;
				cout << "A.高" << endl;
				cout << "B.低" << endl;
				cin >> in;
				cout << "切换成功！" << endl;
			}
		}
		else if (in == 'B'|| in == 'b')
		{
			cout << "-扫描选项-" << endl;
			cout << "》》》不可更改《《《" << endl;
		}
		else
		{
			cout << "本功能已经移至“补丁”选项并暂时移除了卸载功能" << endl;
		}
	}
	else if (in == 'C' || in == 'c')
	{
		cout << "-补丁-" << endl;
		cout << "可用的补丁：" << endl;
		cout << ">>> XB01-自动扫描补丁" << endl;
		cout << "	·降低了误报的可能" << endl;
		cout << "	·修复了无法扫描的BUG" << endl;
		cout << ">>> XB02-防针对XGSC的补丁" << endl;
		cout << "	·扫描范围加入了XGSC文件" << endl;
		cout << "	·XGSC自防加强" << endl;
		cout << "	·升级了“保护罩”（需要下载XB03补丁）" << endl;
		cout << ">>> XB03-XINGJI Games Protective Cover补丁" << endl;
		cout << "	·升级“保护罩”至2.0" << endl;
		cout << "》》》暂不支持下载《《《" << endl;
		cout << "支持下载和其他板块的XINGJI Games Security Center 控制中心版本：1.0.0【预计2022年12月发布】" << endl;
	}
	else if (in == 'D' || in == 'd')
	{
		cout << "》》》本版块暂不可用《《《" << endl;
	}
	else if (in == 'E' || in == 'e')
	{
		cout << "-关于XINGJI Games Security Center-" << endl;
		cout << "版本：1.0.0	发布日期：2022/11/14" << endl;
		cout << "内核：基于C++14的XGSC2.0内核" << endl;
		cout << "-关于XINGJI Games Security Center控制中心-" << endl;
		cout << "版本：0.9.8	发布日期：2022/11/15" << endl;
	}
	return 0;
}