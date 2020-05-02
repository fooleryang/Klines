#pragma once


// tab_kline 对话框

class tab_kline : public CDialogEx
{
	DECLARE_DYNAMIC(tab_kline)

public:
	tab_kline(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tab_kline();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
};
