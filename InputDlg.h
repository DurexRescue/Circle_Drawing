#if !defined(AFX_INPUTDLG_H__D8DD09CB_C623_4870_9364_BF01A501010B__INCLUDED_)
#define AFX_INPUTDLG_H__D8DD09CB_C623_4870_9364_BF01A501010B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// InputDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// InputDlg dialog

class InputDlg : public CDialog
{
// Construction
public:
	InputDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(InputDlg)
	enum { IDD = IDD_DIALOG1 };
	double	m_X;
	double	m_Y;
	double	m_R;
	double	m_X1;
	double	m_Y1;
	double	m_R1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(InputDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(InputDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INPUTDLG_H__D8DD09CB_C623_4870_9364_BF01A501010B__INCLUDED_)
