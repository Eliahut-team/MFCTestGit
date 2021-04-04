
// MFCTestGitView.cpp : implementation of the CMFCTestGitView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCTestGit.h"
#endif

#include "MFCTestGitDoc.h"
#include "MFCTestGitView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTestGitView

IMPLEMENT_DYNCREATE(CMFCTestGitView, CView)

BEGIN_MESSAGE_MAP(CMFCTestGitView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCTestGitView construction/destruction

CMFCTestGitView::CMFCTestGitView() noexcept
{
	// TODO: add construction code here

}

CMFCTestGitView::~CMFCTestGitView()
{
}

BOOL CMFCTestGitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCTestGitView drawing

void CMFCTestGitView::OnDraw(CDC* /*pDC*/)
{
	CMFCTestGitDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCTestGitView printing

BOOL CMFCTestGitView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCTestGitView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCTestGitView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCTestGitView diagnostics

#ifdef _DEBUG
void CMFCTestGitView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTestGitView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTestGitDoc* CMFCTestGitView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTestGitDoc)));
	return (CMFCTestGitDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTestGitView message handlers
