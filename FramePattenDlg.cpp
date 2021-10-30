// FramePattenDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Draw Circle.h"
#include "FramePattenDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// FramePattenDlg dialog


FramePattenDlg::FramePattenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(FramePattenDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(FramePattenDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void FramePattenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(FramePattenDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(FramePattenDlg, CDialog)
	//{{AFX_MSG_MAP(FramePattenDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// FramePattenDlg message handlers
