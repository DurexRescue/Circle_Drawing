// Draw CircleView.h : interface of the CDrawCircleView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DRAWCIRCLEVIEW_H__24A86A4B_4F8C_40A0_8046_3B476B7F9F65__INCLUDED_)
#define AFX_DRAWCIRCLEVIEW_H__24A86A4B_4F8C_40A0_8046_3B476B7F9F65__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDrawCircleView : public CView
{
protected: // create from serialization only
	CDrawCircleView();
	DECLARE_DYNCREATE(CDrawCircleView)

// Attributes
public:
	CDrawCircleDoc* GetDocument();
    bool move;
	bool move1;
	CPoint begin;
	CPoint begin1;
	int choice;
	
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDrawCircleView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDrawCircleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDrawCircleView)
	afx_msg void OnXyr();
	afx_msg void OnPattern();
	afx_msg void OnInsideColor();
	afx_msg void OnFrameColor();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnFramePattern();
	afx_msg void OnFramePatten();
	afx_msg void OnInsideColor1();
	afx_msg void OnFrameColor1();
	afx_msg void OnMax();
	afx_msg void OnMax1();
	afx_msg void OnMin();
	afx_msg void OnMin1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw CircleView.cpp
inline CDrawCircleDoc* CDrawCircleView::GetDocument()
   { return (CDrawCircleDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAWCIRCLEVIEW_H__24A86A4B_4F8C_40A0_8046_3B476B7F9F65__INCLUDED_)

struct data
{
	int x , y, r;
	COLORREF pencolor, brushcolor;
	bool pen, brush, pattern;
	bool max;
};
