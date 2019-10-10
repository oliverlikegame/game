/**
*  virtual 0.1
* 简易acg游戏
* 包括一些账户类型识别判断，执行管理者命令和最高命令必须判断权限，用户无法查看高于自己权限的命令   权限功能 
* 账户类型分三级两类 一级上帝account（负责初始化世界，拥有一切权限是一类  二级管理员（作弊者 可更改物品控制器  三级玩家均属于二类  
* 锁定功能 防止破解用户密码 
* 主要功能 添加删除用户即管理员（权限高的可以操作低的，同级无法操作 第一大类（非客户功能   注册只能注册三级账户即玩家账户  一级二级账户无法注册，预设的;
*          进入世界，创建角色，升级，爆装备，战斗系统，武器系统，技能系统，血条  （功能
* 实现可保存功能
*/
#include<iostream>
#include<string.h>
#include"game.h"
#include<iomanip>
#include<Windows.h>
#include"pic.h"
using namespace std;

int main() {
	//HWND hWnd=GetConsoleHwnd();//主要用来获取句柄确保焦点在控制台可删
	//fullScreen();
	//pic();//动画
	//cmdResolution("on");//设置控制台大小 on全屏
	//cmdResolution("off");//off 窗口
	slowWord("welcome to ");
	cout<<endl;
	//Sleep(500);
	setWordCyan();
	cout<<"               *      *    > > >    *   *      > > > > >   *        *     *        *        "<<endl;
    cout<<"               *     *      %      /      *       %       %        %    ";setWordYellow();cout<<"> <";setWordCyan();cout<<"       *         "<<endl;
	cout<<"               *    *      %      /       *      %       *        *    *  o      *          "<<endl;
    cout<<"               *   *      %      /     *        %       %        %    *   &     *           "<<endl;
    cout<<"               *  *      %      /  *           %       *        *    *>>>>&    *            "<<endl;
	setWordBlue();cout<<"               @-@";setWordCyan();cout<<"      %      /     *        %       *        *    *     &   *             "<<endl;
    setWordBlue();cout<<"               D";setWordCyan();cout<<"     > > >    /         *    %          *  *       *      &   ";setWordRed();cout<<"> > > > >     "<<endl;setWordCyan();
	cout<<endl<<endl<<endl;
	setWordWhite();
	gamer gamer1=login();
	if(gamer1.type==1){  // 上帝
		char cmd[10];//与系统交互，判断需要控制台还是其他
		char command[8]={"command"};//控制台
		cout<<"How Are You ,founder!"<<endl;
		cout<<"Can I Do For You?";
		cin>>command;
		if(strcmp(cmd,command)==0){//
			cout<<"1 rebuild world";
			cout<<"2 search account";

		}
	}
	if(gamer1.type==2){			//管理员 gamemaster
		
	
	}
	if(gamer1.type==3){         //玩家 gamer
		cout<<endl<<endl;
		slowWord("Welcome to this world ");
		slowWord(gamer1.username);
		cout<<endl;    
		collectEnter();
		slowWord("the world is loading...");
		cout<<endl;
		collectEnter();
		loading("The World is building");
		slowWord("tip:enter to start game,Esc to start menu");
		Sleep(1000);
		system("cls");
		 while(1){
	 		 int menu3=getchar();
			  if(menu3==10)//10 回车 ASCII
				playGame(&gamer1);
			 if(kbhit()==27)//27 Esc ASCII
				gameMenu(&gamer1);//菜单图案以及功能
			





		 }

		 
		 
		 }

	}
	

