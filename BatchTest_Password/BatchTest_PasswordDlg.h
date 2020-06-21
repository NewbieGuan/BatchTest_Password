
// BatchTest_PasswordDlg.h: 头文件
//

#pragma once


// CBatchTestPasswordDlg 对话框
class CBatchTestPasswordDlg : public CDialogEx
{
// 构造
public:
	CBatchTestPasswordDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BATCHTEST_PASSWORD_DIALOG };
#endif

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
public:
	CString m_password;//edit控件
	afx_msg void OnBnClickedButtonPw();//点击生成密码按钮
};
