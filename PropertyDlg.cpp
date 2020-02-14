// PropertyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Managesystem.h"
#include "PropertyDlg.h"
#include "afxdialogex.h"


// PropertyDlg 对话框

IMPLEMENT_DYNAMIC(PropertyDlg, CDialogEx)

PropertyDlg::PropertyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

PropertyDlg::~PropertyDlg()
{
}

void PropertyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PropertyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_OK, &PropertyDlg::OnBnClickedButtonOk)
END_MESSAGE_MAP()


// PropertyDlg 消息处理程序


void PropertyDlg::OnBnClickedButtonOk()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT_TYPE, sType);
	GetDlgItemText(IDC_EDIT_DATE, sDate);
	GetDlgItemText(IDC_EDIT_MONEY, sMoney);
	EndDialog(0);
}
