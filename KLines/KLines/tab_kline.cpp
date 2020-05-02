// tab_kline.cpp : 实现文件
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_kline.h"
#include "afxdialogex.h"


// tab_kline 对话框

IMPLEMENT_DYNAMIC(tab_kline, CDialogEx)

tab_kline::tab_kline(CWnd* pParent /*=NULL*/)
	: CDialogEx(tab_kline::IDD, pParent)
{

}

tab_kline::~tab_kline()
{
}

void tab_kline::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(tab_kline, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &tab_kline::OnBnClickedButton3)
END_MESSAGE_MAP()


// tab_kline 消息处理程序


void tab_kline::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
}
