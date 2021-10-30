// Draw CircleView.cpp : implementation of the CDrawCircleView class
//

#include "stdafx.h"
#include "Draw Circle.h"

#include "Draw CircleDoc.h"
#include "Draw CircleView.h"

#include "InputDlg.h"
#include "FramePattenDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView

IMPLEMENT_DYNCREATE(CDrawCircleView, CView)

BEGIN_MESSAGE_MAP(CDrawCircleView, CView)
	//{{AFX_MSG_MAP(CDrawCircleView)
	ON_COMMAND(ID_XYR, OnXyr)
	ON_COMMAND(ID_Pattern, OnPattern)
	ON_COMMAND(ID_InsideColor, OnInsideColor)
	ON_COMMAND(ID_FrameColor, OnFrameColor)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_FramePatten, OnFramePatten)
	ON_COMMAND(ID_InsideColor1, OnInsideColor1)
	ON_COMMAND(ID_FrameColor1, OnFrameColor1)
	ON_COMMAND(ID_Max, OnMax)
	ON_COMMAND(ID_Max1, OnMax1)
	ON_COMMAND(ID_MIN, OnMin)
	ON_COMMAND(ID_MIN1, OnMin1)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView construction/destruction

data cdata,mdata,cdata1,mdata1;

CDrawCircleView::CDrawCircleView()
{
	// TODO: add construction code here

}

CDrawCircleView::~CDrawCircleView()
{
}

BOOL CDrawCircleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView drawing

void CDrawCircleView::OnDraw(CDC* pDC)
{
	CDrawCircleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	
	CBrush* oldbrush;
	if (cdata.pen)//FrameColoe
	{
		
		CPen pen(PS_SOLID, 1, cdata.pencolor);
		pDC->SelectObject(&pen);
		pDC->Ellipse(cdata.x - cdata.r, cdata.y - cdata.r, cdata.x + cdata.r, cdata.y + cdata.r);
		
	}
	
	
	CPen pen(PS_SOLID, 1, cdata.pencolor);
    pDC->SelectObject(&pen);
	pDC->Ellipse(cdata.x - cdata.r, cdata.y - cdata.r, cdata.x + cdata.r, cdata.y + cdata.r);
    
	pDC->Ellipse(cdata1.x - cdata1.r, cdata1.y - cdata1.r, cdata1.x + cdata1.r, cdata1.y + cdata1.r);

	if (cdata.brush)
	{
		CBrush brush;
		brush.CreateSolidBrush(cdata.brushcolor);
		oldbrush = pDC->SelectObject(&brush);
		pDC->Ellipse(cdata.x - cdata.r, cdata.y - cdata.r, cdata.x + cdata.r, cdata.y + cdata.r);
		pDC->SelectObject(oldbrush);
	}
	else if (cdata.pattern)
	{
		CBitmap bitmap;
		bitmap.LoadBitmap(IDR_MAINFRAME);
		CBrush brush(&bitmap);
		oldbrush = pDC->SelectObject(&brush);
		pDC->Ellipse(cdata.x - cdata.r, cdata.y - cdata.r, cdata.x + cdata.r, cdata.y + cdata.r);
		pDC -> SelectObject(oldbrush);
	}
	
	if (move)
	{
		CPen pen(PS_DASH, 1, RGB(0, 0, 0));
		pDC->SelectObject(&pen);
		pDC->Ellipse(mdata.x - mdata.r, mdata.y - mdata.r, mdata.x + mdata.r, mdata.y + mdata.r);
	}
	if (move1)
	{
		CPen pen(PS_DASH, 1, RGB(0, 0, 0));
		pDC->SelectObject(&pen);
		pDC->Ellipse(mdata1.x - mdata1.r, mdata1.y - mdata1.r, mdata1.x + mdata1.r, mdata1.y + mdata1.r);
	}
	if (cdata1.pen)//FrameColoe
	{
		
		CPen pen(PS_SOLID, 1, cdata1.pencolor);
		pDC->SelectObject(&pen);
		pDC->Ellipse(cdata1.x - cdata1.r, cdata1.y - cdata1.r, cdata1.x + cdata1.r, cdata1.y + cdata1.r);
		
	}
	if (cdata1.brush)
	{
		CBrush brush;
		brush.CreateSolidBrush(cdata1.brushcolor);
		oldbrush = pDC->SelectObject(&brush);
		pDC->Ellipse(cdata1.x - cdata1.r, cdata1.y - cdata1.r, cdata1.x + cdata1.r, cdata1.y + cdata1.r);
		pDC->SelectObject(oldbrush);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView printing

BOOL CDrawCircleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawCircleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawCircleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView diagnostics

#ifdef _DEBUG
void CDrawCircleView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawCircleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawCircleDoc* CDrawCircleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawCircleDoc)));
	return (CDrawCircleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDrawCircleView message handlers

void CDrawCircleView::OnXyr() 
{
	// TODO: Add your command handler code here
	InputDlg dlg;
	dlg.m_X = cdata.x;
	dlg.m_Y = cdata.y;
	dlg.m_R = cdata.r;
	dlg.m_X1 = cdata1.x;
	dlg.m_Y1 = cdata1.y;
	dlg.m_R1 = cdata1.r;
	if (IDOK == dlg.DoModal())
	{
		cdata.x = dlg.m_X;
		cdata.y = dlg.m_Y;
		cdata.r = dlg.m_R;
        cdata1.x = dlg.m_X1;
		cdata1.y = dlg.m_Y1;
		cdata1.r = dlg.m_R1;

	}
	Invalidate();
}

void CDrawCircleView::OnPattern() 
{
	// TODO: Add your command handler code here
	cdata.pattern = true;
	cdata.brush = false;
	Invalidate();
}

void CDrawCircleView::OnInsideColor() 
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	dlg.m_cc.Flags |= CC_RGBINIT | CC_FULLOPEN;
	if (IDOK == dlg.DoModal())
	{
		cdata.brushcolor = dlg.m_cc.rgbResult;
		cdata.brush = true;
	}
	Invalidate();
}

void CDrawCircleView::OnFrameColor() 
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	dlg.m_cc.Flags |= CC_RGBINIT | CC_FULLOPEN;
	if (IDOK == dlg.DoModal())
	{
		cdata.pencolor = dlg.m_cc.rgbResult;
		cdata.pen = true;
	}
	Invalidate();
}

void CDrawCircleView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if (move)
	{
		cdata = mdata;
		move = false;
		Invalidate();
	}
    if (move1)
	{
		cdata1 = mdata1;
		move1 = false;
		Invalidate();
	}
	CView::OnLButtonUp(nFlags, point);
	CView::OnLButtonUp(nFlags, point);
}

void CDrawCircleView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if ((point.x - cdata.x) * (point.x - cdata.x) + (point.y - cdata.y) * (point.y - cdata.y) < cdata.r * cdata.r)
	{
		begin = point;
		move = true;
	}
	if ((point.x - cdata1.x) * (point.x - cdata1.x) + (point.y - cdata1.y) * (point.y - cdata1.y) < cdata.r * cdata1.r)
	{
		begin1 = point;
		move1 = true;
	}
	CView::OnLButtonDown(nFlags, point);
}

void CDrawCircleView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if (move)
	{
		int x = point.x - begin.x;
		int y = point.y - begin.y;
		mdata = cdata;
		mdata.x += x;
		mdata.y += y;
		Invalidate();
	}
    if (move1)
	{
		int x = point.x - begin1.x;
		int y = point.y - begin1.y;
		mdata1 = cdata1;
		mdata1.x += x;
		mdata1.y += y;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}



void CDrawCircleView::OnFramePatten() 
{
	// TODO: Add your command handler code here
	FramePattenDlg dlg;
	if(IDOK==dlg.DoModal()){
		if(::SendMessage(::GetDlgItem(m_hWnd,IDC_RADIO1),BM_GETCHECK,NULL,NULL) == BST_CHECKED)//如果选择了单选按钮1
	{
		//
        choice=0;
		Invalidate();
			
	}
	else if(::SendMessage(::GetDlgItem(m_hWnd,IDC_RADIO2),BM_GETCHECK,NULL,NULL) == BST_CHECKED)//如果选择了单选按钮2
	{
		//
		choice=1;
		Invalidate();

	}
	else if(::SendMessage(::GetDlgItem(m_hWnd,IDC_RADIO3),BM_GETCHECK,NULL,NULL) == BST_CHECKED)//如果选择了单选按钮2
	{
		
		//
		choice=2;
		Invalidate();

	}
	else if(::SendMessage(::GetDlgItem(m_hWnd,IDC_RADIO4),BM_GETCHECK,NULL,NULL) == BST_CHECKED)//如果选择了单选按钮2
	{
	   //
		choice=3;
		Invalidate();


	}
	
	}
}

void CDrawCircleView::OnInsideColor1() 
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	dlg.m_cc.Flags |= CC_RGBINIT | CC_FULLOPEN;
	if (IDOK == dlg.DoModal())
	{
		cdata1.brushcolor = dlg.m_cc.rgbResult;
		cdata1.brush = true;
	}
	Invalidate();
}

void CDrawCircleView::OnFrameColor1() 
{
	// TODO: Add your command handler code here
	CColorDialog dlg;
	dlg.m_cc.Flags |= CC_RGBINIT | CC_FULLOPEN;
	if (IDOK == dlg.DoModal())
	{
		cdata1.pencolor = dlg.m_cc.rgbResult;
		cdata1.pen = true;
	}
	Invalidate();
}

void CDrawCircleView::OnMax() 
{
	// TODO: Add your command handler code here
	cdata.max=true;
	cdata.r=cdata.r*2;
	
	Invalidate();
	cdata.max=false;
}

void CDrawCircleView::OnMax1() 
{
	// TODO: Add your command handler code here
	cdata1.max=true;
	cdata1.r=cdata1.r*2;
	Invalidate();
	cdata1.max=false;
}

void CDrawCircleView::OnMin() 
{
	// TODO: Add your command handler code here
	cdata.r=cdata.r/2;
	Invalidate();
}

void CDrawCircleView::OnMin1() 
{
	// TODO: Add your command handler code here
	cdata1.r=cdata1.r/2;
	Invalidate();
}
