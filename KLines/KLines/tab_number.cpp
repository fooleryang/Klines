// tab_number.cpp : 实现文件
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_number.h"
#include "afxdialogex.h"


// tab_number 对话框

IMPLEMENT_DYNAMIC(tab_number, CDialogEx)

tab_number::tab_number(CWnd* pParent /*=NULL*/)
	: CDialogEx(tab_number::IDD, pParent)
{

}

tab_number::~tab_number()
{
}

void tab_number::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tab_number, CDialogEx)
	
END_MESSAGE_MAP()


// tab_number 消息处理程序


void tab_number::OnBnClickedRadio3()
{
	// TODO: 在此添加控件通知处理程序代码
}


void tab_number::OnCbnSelchangeCombo3()
{
	// TODO: 在此添加控件通知处理程序代码
}
