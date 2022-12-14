/////////////////////////////////////////////////////////////////////////////////////////////
//文件名：		CSearchPlan_Init.cpp
//功  能：		初始化
//开发者：		高志强
//日  期：		2022年10月07日
//更  新：		2022年10月09日
//更  新：		2022年10月12日
//长  度：		40行
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC标准头文件
#include "CSearchPlan.h"							//基于搜索的规划类头文件


//名  称：		Init()
//功  能：		初始化
//参  数：		无
//返回值：		无
void CSearchPlan::Init()
{
	/////////////////////////////////////////////////////////////////
	//步骤1：初始化规划任务
	//初始状态
	m_InitState.clear();
	//目标状态
	m_GoalState.clear();
	//允许的动作列表
	m_Actions.clear();
	
	//初始化搜索得到的规划。即动作名称序列
	m_Plan.clear();
	//初始化状态/结点ID
	m_nStateID = 0;

	
	////////////////////////////////////////////////////////////////
	//步骤2：读取规划任务。包括初始状态、目标状态、允许的动作列表
	Read_Task();
}