#pragma once
#include "afxwin.h"
#include "afxdtctl.h"

// tab_kline 对话框

class tab_kline : public CDialogEx
{
	DECLARE_DYNAMIC(tab_kline)
	friend class CKLinesDlg;

public:
	tab_kline(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tab_kline();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	virtual void OnOK();
	// K线图部分的股票搜索框
	CEdit m_kline_searchBox;
	// K线图部分的股票搜索按钮
	CButton m_kline_searchButton;
	// K线图部分的股票起始日期选择的日历
	CDateTimeCtrl m_kline_startDateCalendar;
	// K线图部分的股票截止日期选择的日历
	CDateTimeCtrl m_kline_endDateCalendar;
	// K线图部分的日期筛选按钮
	CButton m_kline_dateSelectButton;
	// K线图部分的导出按钮
	CButton m_kline_exportButton;
	// K线图部分的后台按钮
	CButton m_kline_backgroundButton;
	// K线图部分的参数列表
	CListCtrl m_kline_parameterList;

	//股票搜索按钮的点击事件
	afx_msg void OnBnClickedButton1();
	//股票时间筛选按钮的点击事件
	afx_msg void OnBnClickedButton2();
	//股票数据的导出按钮的点击事件
	afx_msg void OnBnClickedButton3();
	//后台按钮的点击事件
	afx_msg void OnBnClickedButton4();
	
public:
	afx_msg void OnEnSetfocusEdit1();
	afx_msg void OnEnKillfocusEdit1();
};
