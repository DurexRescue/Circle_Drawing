// Draw CircleDoc.cpp : implementation of the CDrawCircleDoc class
//

#include "stdafx.h"
#include "Draw Circle.h"

#include "Draw CircleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleDoc

IMPLEMENT_DYNCREATE(CDrawCircleDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawCircleDoc, CDocument)
	//{{AFX_MSG_MAP(CDrawCircleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleDoc construction/destruction

CDrawCircleDoc::CDrawCircleDoc()
{
	// TODO: add one-time construction code here

}

CDrawCircleDoc::~CDrawCircleDoc()
{
}

BOOL CDrawCircleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CDrawCircleDoc serialization

void CDrawCircleDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleDoc diagnostics

#ifdef _DEBUG
void CDrawCircleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawCircleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleDoc commands
