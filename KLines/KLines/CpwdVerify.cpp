// CpwdVerify.cpp: 实现文件
//

#include "stdafx.h"
#include "KLines.h"
#include "CpwdVerify.h"
#include "afxdialogex.h"
#include "Cbackground.h"

// CpwdVerify 对话框

IMPLEMENT_DYNAMIC(CpwdVerify, CDialogEx)

CpwdVerify::CpwdVerify(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{
	//m_pwdVerify_passwordBox
}

CpwdVerify::~CpwdVerify()
{
}

void CpwdVerify::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_pwdVerify_accountBox);
	DDX_Control(pDX, IDC_EDIT2, m_pwdVerify_passwordBox);
	DDX_Control(pDX, IDC_BUTTON1, m_pwdVerify_verifyButton);
}


BEGIN_MESSAGE_MAP(CpwdVerify, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CpwdVerify::OnBnClickedButton1)
END_MESSAGE_MAP()


// CpwdVerify 消息处理程序


void CpwdVerify::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类

	//CDialogEx::OnOK();
}


void CpwdVerify::OnBnClickedButton1()
{
	//实现管理员身份验证，成功后进入后台
	CString account, password;
	m_pwdVerify_accountBox.GetWindowTextW(account);
	m_pwdVerify_passwordBox.GetWindowTextW(password);
	if (account == "大王" && password == "123")
	{
		Cbackground background;
		background.DoModal();
	}
	else
		AfxMessageBox(_T("账号或密码错误"));
}
