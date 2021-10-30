// InputDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Draw Circle.h"
#include "InputDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// InputDlg dialog


InputDlg::InputDlg(CWnd* pParent /*=NULL*/)
	: CDialog(InputDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(InputDlg)
	m_X = 0.0;
	m_Y = 0.0;
	m_R = 0.0;
	m_X1 = 0.0;
	m_Y1 = 0.0;
	m_R1 = 0.0;
	//}}AFX_DATA_INIT
}


void InputDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(InputDlg)
	DDX_Text(pDX, IDC_EDIT1, m_X);
	DDX_Text(pDX, IDC_EDIT2, m_Y);
	DDX_Text(pDX, IDC_EDIT3, m_R);
	DDX_Text(pDX, IDC_EDIT4, m_X1);
	DDX_Text(pDX, IDC_EDIT5, m_Y1);
	DDX_Text(pDX, IDC_EDIT6, m_R1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(InputDlg, CDialog)
	//{{AFX_MSG_MAP(InputDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// InputDlg message handlers
