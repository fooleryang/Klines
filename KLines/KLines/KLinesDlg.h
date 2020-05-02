
// KLinesDlg.h : 头文件
//

#pragma once
#include "tabsheet.h"
#include "TabSheet.h"
#include "tab_kline.h"
#include "tab_number.h"

// CKLinesDlg 对话框
class CKLinesDlg : public CDialogEx
{
// 构造
public:
	CKLinesDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_KLINES_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CTabSheet m_tab;
	tab_kline m_tab_kline;
	tab_number m_tab_number;
};
