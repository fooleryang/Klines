#pragma once


// tab_number 对话框

class tab_number : public CDialogEx
{
	DECLARE_DYNAMIC(tab_number)

public:
	tab_number(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tab_number();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnCbnSelchangeCombo3();
};
