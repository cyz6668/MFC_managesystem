// PropertyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Managesystem.h"
#include "PropertyDlg.h"
#include "afxdialogex.h"


// PropertyDlg �Ի���

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


// PropertyDlg ��Ϣ�������


void PropertyDlg::OnBnClickedButtonOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT_TYPE, sType);
	GetDlgItemText(IDC_EDIT_DATE, sDate);
	GetDlgItemText(IDC_EDIT_MONEY, sMoney);
	EndDialog(0);
}
