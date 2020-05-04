// tab_kline.cpp : 实现文件
//

#include "stdafx.h"
#include "KLines.h"
#include "tab_kline.h"
#include "afxdialogex.h"
#include "CpwdVerify.h"


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
	DDX_Control(pDX, IDC_EDIT1, m_kline_searchBox);
	DDX_Control(pDX, IDC_BUTTON1, m_kline_searchButton);
	DDX_Control(pDX, IDC_BUTTON2, m_kline_dateSelectButton);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_kline_startDateCalendar);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_kline_endDateCalendar);
	DDX_Control(pDX, IDC_BUTTON3, m_kline_exportButton);
	DDX_Control(pDX, IDC_BUTTON4, m_kline_backgroundButton);
	DDX_Control(pDX, IDC_LIST1, m_kline_parameterList);
}


BEGIN_MESSAGE_MAP(tab_kline, CDialogEx)
	
	ON_BN_CLICKED(IDC_BUTTON1, &tab_kline::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &tab_kline::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &tab_kline::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &tab_kline::OnBnClickedButton4)
	ON_EN_SETFOCUS(IDC_EDIT1, &tab_kline::OnEnSetfocusEdit1)
	ON_EN_KILLFOCUS(IDC_EDIT1, &tab_kline::OnEnKillfocusEdit1)
END_MESSAGE_MAP()

void tab_kline::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类

	//CDialogEx::OnOK();
}


void tab_kline::OnBnClickedButton1()
{
	//实现股票搜索
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if(inputINFO.IsEmpty())
		AfxMessageBox(_T("您没有输入任何信息"));
	else
	{//在数据库中进行搜索并做相关操作
		AfxMessageBox(_T("开始根据\""+inputINFO+"\"搜索"));
		//从数据库中拿到股票的起始日期和截止日期并由此设置对应的两个日历控件当前显示和时间可选范围
		CTime startTime=CTime(1999,12,01,12,00,00);
		CTime endTime=CTime(2000,01,01,12,00,00);
		//设置当前显示
		m_kline_startDateCalendar.SetTime(&startTime);
		m_kline_endDateCalendar.SetTime(&endTime);
		//设置可选范围
		m_kline_startDateCalendar.SetRange(&startTime,&endTime);
		m_kline_endDateCalendar.SetRange(&startTime,&endTime);
		//在参数列表中显示股票的参数

		//显示该股票三个图

	}
}


void tab_kline::OnBnClickedButton2()
{
	//实现日期筛选
	//获取两个日历上的时间并做一个{截止如期>起始日期}的合法性判断，然后根据日期更新该股票的三个图
	AfxMessageBox(_T("日期筛选"));

}


void tab_kline::OnBnClickedButton3()
{
	//实现股票数据的导出
	AfxMessageBox(_T("股票导出"));

}


void tab_kline::OnBnClickedButton4()
{
	//弹出密码验证然后进入后台
	CpwdVerify verify;
	verify.DoModal();
}


void tab_kline::OnEnSetfocusEdit1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if (!inputINFO.IsEmpty())
		m_kline_searchBox.SetWindowTextW(TEXT(""));
}


void tab_kline::OnEnKillfocusEdit1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString inputINFO;
	m_kline_searchBox.GetWindowTextW(inputINFO);
	if (inputINFO.IsEmpty())
		m_kline_searchBox.SetWindowTextW(TEXT("股票名或编号"));
}
