#pragma once


// PropertyDlg �Ի���

class PropertyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(PropertyDlg)

public:
	PropertyDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~PropertyDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString sType;
	CString sDate;
	CString sMoney;
	afx_msg void OnBnClickedButtonOk();
};
