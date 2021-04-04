
// MFCTestGitView.h : interface of the CMFCTestGitView class
//

#pragma once


class CMFCTestGitView : public CView
{
protected: // create from serialization only
	CMFCTestGitView() noexcept;
	DECLARE_DYNCREATE(CMFCTestGitView)

// Attributes
public:
	CMFCTestGitDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCTestGitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCTestGitView.cpp
inline CMFCTestGitDoc* CMFCTestGitView::GetDocument() const
   { return reinterpret_cast<CMFCTestGitDoc*>(m_pDocument); }
#endif

