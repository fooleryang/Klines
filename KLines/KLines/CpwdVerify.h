#pragma once


// CpwdVerify 对话框

class CpwdVerify : public CDialogEx
{
	DECLARE_DYNAMIC(CpwdVerify)

public:
	CpwdVerify(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CpwdVerify();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
private:
	// 管理员身份验证对话框中的账号输入框
	CEdit m_pwdVerify_accountBox;
	// 管理员身份验证对话框中的密码输入框
	CEdit m_pwdVerify_passwordBox;
	// 管理员身份验证对话框中的验证按钮
	CButton m_pwdVerify_verifyButton;

	afx_msg void OnBnClickedButton1();
};
