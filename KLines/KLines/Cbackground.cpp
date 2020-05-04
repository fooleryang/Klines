// Cbackground.cpp: 实现文件
//

#include "stdafx.h"
#include "KLines.h"
#include "Cbackground.h"
#include "afxdialogex.h"


// Cbackground 对话框

IMPLEMENT_DYNAMIC(Cbackground, CDialogEx)

Cbackground::Cbackground(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

Cbackground::~Cbackground()
{
}

void Cbackground::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cbackground, CDialogEx)
END_MESSAGE_MAP()


// Cbackground 消息处理程序
