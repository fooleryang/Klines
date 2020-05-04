#pragma once
#include "afxwin.h"
#include "afxdtctl.h"

// Cbackground 对话框

class Cbackground : public CDialogEx
{
	DECLARE_DYNAMIC(Cbackground)

public:
	Cbackground(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cbackground();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
