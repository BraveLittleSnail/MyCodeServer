#include "mainWindow.h"
#include <QMenu>
#include <QPainter>

mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	
}

mainWindow::~mainWindow()
{

}

void mainWindow::mousePressEvent(QMouseEvent *e)
{
// 	QMenu pMenu;
// 	pMenu.addAction(tr("test"), this, SLOT(Delete()));
// 	pMenu.exec(e->globalPos());
}

void mainWindow::Delete()
{
	int zzz = 0;
}

void mainWindow::add()
{
	int zzz = 0;
}

void mainWindow::temp()
{
	////原始的边界线数据
	//QPointF linePoints1[3] = {
	//	QPointF(50.0, 50.0),
	//	QPointF(250.0, 50.0),
	//	QPointF(350.0, 100.0)
	//};

	//QPointF linePoints2[3] = {
	//	QPointF(50.0,  100.0),
	//	QPointF(250.0, 100.0),
	//	QPointF(350.0, 150.0)
	//};

	//static const QPointF points[4] = {
	//	QPointF(50.0, 80.0)  ,
	//	QPointF(50.0, 100.0) ,
	//	QPointF(80.0, 30.0)  ,
	//	QPointF(90.0, 70.0)
	//};

	//QPolygonF polygon;
	//polygon << QPointF(10.4, 20.5) << QPointF(20.2, 30.2);

	//m_Painter = new QPainter;
	//m_Painter->begin(this);
	////绘制线
	//m_Painter->drawPolyline(linePoints1, 3);
	//m_Painter->drawPolyline(linePoints2, 3);

	////平面
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::Dense7Pattern));
	//m_Painter->drawConvexPolygon(points, 4);


	////马路牙子
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::BDiagPattern));
	//m_Painter->drawRect(50, 150, 300, 50);

	////栅栏
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::VerPattern));
	//m_Painter->drawRect(50, 250, 300, 50);

	////墙体
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::CrossPattern));
	//m_Painter->drawRect(50, 350, 300, 50);

	////凹陷
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::HorPattern));
	//m_Painter->drawRect(50, 450, 300, 50);

	////其他
	//m_Painter->setPen(QPen(Qt::blue, 2, Qt::DashLine));
	//m_Painter->setBrush(QBrush(Qt::red, Qt::DiagCrossPattern));
	//m_Painter->drawRect(50, 550, 300, 50);

	//m_Painter->end();
	//int zzz = 0;
}

void mainWindow::paintEvent(QPaintEvent *event)
{
	drawPlane();
}

void mainWindow::drawPlane()
{
	//边界线数据--左侧
	static const QPointF boundaryLine1Points[2] = {
		QPointF(50.0, 80.0),
		QPointF(500.0, 80)
	};
	//--右侧
	static const QPointF boundaryLine2Points[2] = {
		QPointF(50.0, 200.0),
		QPointF(500.0, 200.0)
	};

	//左侧边界线属性数据
	static const QPointF points1[4] = {
		QPointF(50.0, 60.0)  ,
		QPointF(500.0, 60),
		QPointF(500.0, 70),
		QPointF(50.0, 70.0) 		
	};

	//右侧边界线属性数据
	static const QPointF points2[4] = {
		QPointF(50.0, 210)  ,
		QPointF(500.0, 210),
		QPointF(500.0, 220),
		QPointF(50.0, 220)
	};

	
	//平面
	m_Painter = new QPainter;
	m_Painter->begin(this);
	//模拟的边界线
	m_Painter->drawLines(boundaryLine1Points, 1);
	m_Painter->drawLines(boundaryLine2Points, 1);

	//左侧
	{
		//绘制边界属性填充区域
		m_Painter->setPen(QPen(Qt::black, 2, Qt::NoPen));
		m_Painter->setBrush(QBrush(Qt::gray));
		m_Painter->drawConvexPolygon(points1, 4);

		//绘制边界属性
		QPen linePen(Qt::black, 2, Qt::CustomDashLine);
		QBrush lineBrush(Qt::black);
		m_Painter->setPen(linePen);
		m_Painter->setBrush(lineBrush);
		m_Painter->drawLines(points1, 2);
	}
	
	//右侧
	{
		//绘制边界属性填充区域
		m_Painter->setPen(QPen(Qt::black, 2, Qt::NoPen));
		m_Painter->setBrush(QBrush(Qt::gray));
		m_Painter->drawConvexPolygon(points2, 4);

		//绘制边界属性
		QPen linePen(Qt::black, 2, Qt::CustomDashLine);
		QBrush lineBrush(Qt::black);
		m_Painter->setPen(linePen);
		m_Painter->setBrush(lineBrush);
		m_Painter->drawLines(points2, 2);
	}

	

	m_Painter->end();
	int zzz = 0;
}