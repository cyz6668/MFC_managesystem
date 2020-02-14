// SystemDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Managesystem.h"
#include "SystemDlg.h"
#include "afxdialogex.h"
#include "PropertyDlg.h"

// SystemDlg �Ի���

IMPLEMENT_DYNAMIC(SystemDlg, CDialogEx)

SystemDlg::SystemDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

SystemDlg::~SystemDlg()
{
}

void SystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
}


BEGIN_MESSAGE_MAP(SystemDlg, CDialogEx)
	ON_WM_CLOSE()
//	ON_WM_INITMENU()
//ON_WM_INITMENUPOPUP()
ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &SystemDlg::OnLvnItemchangedList1)
//ON_BN_CLICKED(IDC_BUTTON3, &SystemDlg::OnBnClickedButton3)
ON_BN_CLICKED(IDC_BUTTON4, &SystemDlg::OnBnClickedButton4)
ON_BN_CLICKED(IDC_BUTTON1, &SystemDlg::OnBnClickedButton1)
ON_BN_CLICKED(IDC_BUTTON_REVERSE, &SystemDlg::OnBnClickedButtonReverse)
ON_BN_CLICKED(IDC_BUTTON2, &SystemDlg::OnBnClickedButton2)
ON_BN_CLICKED(IDC_BUTTON5, &SystemDlg::OnBnClickedButton5)
END_MESSAGE_MAP()


// SystemDlg ��Ϣ�������


void SystemDlg::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CDialog*pdlg = (CDialog*)AfxGetMainWnd();
	pdlg->DestroyWindow();
	CDialogEx::OnClose();
}




BOOL SystemDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	m_List.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_CHECKBOXES);

	m_List.InsertColumn(0,_T("�������"),0,200);
	m_List.InsertColumn(1, _T("���ʱ��"),0,200);
	m_List.InsertColumn(2, _T("�����"),0,200);

	CString itemName,sdate,sn;
	for (int i = 0; i < 10; i++)
	{
		itemName.Format(_T("itemName=%d"), i);
		sdate.Format(_T("2008-05-13 09:0%d"), i);
		sn.Format(_T("%d00"), i);


		m_List.InsertItem(i, itemName);
		m_List.SetItemText(i, 1,sdate);
		m_List.SetItemText(i, 2, sn);
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void SystemDlg::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}


//void SystemDlg::OnBnClickedButton3()
//{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//}


void SystemDlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i < m_List.GetItemCount(); i++)
	{
		BOOL state=m_List.GetCheck(i);
		if (state)
		{
			m_List.DeleteItem(i);
			i--;
		}
	}
}


void SystemDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i < m_List.GetItemCount(); i++)
	{
		m_List.SetCheck(i,TRUE);
	}
}


void SystemDlg::OnBnClickedButtonReverse()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i < m_List.GetItemCount(); i++)
	{
		m_List.SetCheck(i,!m_List.GetCheck(i));

	}
}


void SystemDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	PropertyDlg dlg;
	dlg.DoModal();
	int nCount=m_List.GetItemCount();
	m_List.InsertItem(nCount,dlg.sType);
	m_List.SetItemText(nCount, 1, dlg.sDate);
	m_List.SetItemText(nCount, 2, dlg.sMoney);
}


void SystemDlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i < m_List.GetItemCount(); i++)
	{
		BOOL state = m_List.GetCheck(i);
		if (state)
		{
			PropertyDlg dlg;
			dlg.DoModal();

			m_List.SetItemText(i,0,dlg.sType);
			m_List.SetItemText(i, 1, dlg.sDate);
			m_List.SetItemText(i, 2, dlg.sMoney);
		}
	}

}
