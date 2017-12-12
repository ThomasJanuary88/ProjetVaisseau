#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtProjet2Vaisseau.h"
#include <QSceneModel.h>
#include <QSceneViewController.h>
#include <QShuttle.h>
#include <QShuttleController.h>
#include <QPolygonalBody.h>
#include <QShapeBody.h>
#include <QShuttleKeyboardController.h>
#include <QShuttleFuelTank.h>
#include <QShuttleThruster.h>
#include <QThrusterKeyboardController.h>
#include <QPolygonFactory.h>
#include <qtimer.h>
#include <QHBoxLayout>
#include <qtabwidget.h>
#include <QColorBox.h>
#include <QIntValueBox.h>
#include <QPolygonEditor.h>
#include <QRealValueBox.h>
#include <QTextEdit.h>

class QtProjet2Vaisseau : public QMainWindow
{
	Q_OBJECT

public:
	QtProjet2Vaisseau(QWidget *parent = Q_NULLPTR);

	void generate_Horizon_6t_k();
	void addNewThruster(QSceneModel * model,
		QShuttleFuelTank * fuelTank,
		qreal thrusterSize,
		qreal massFlowRate,
		qreal massEjectSpeed,
		QPointF const & position,
		qreal orientationDegrees,
		QBrush const & brush,
		QPen const & pen,
		QKeySequence const & key);
	void tic();

private:
	Ui::QtProjet2VaisseauClass ui;

protected:
	QShuttleController *mShuttleController;
	QShuttle *mShuttle;
	QSizeF const &mSceneSize = QSizeF(800.0, 600.0);
	QSceneModel mSceneModel;
	QSceneViewController * mSceneViewController;
	QShuttleFuelTank *mShuttleFuelTank;
	qreal thrusterSize;
	qreal massFlowRate;
	qreal massEjectSpeed;
	QTimer mTimer;
	
	QTabWidget *tabWidget;

	//main widget
	QHBoxLayout *mainLayout;
	QWidget *mainWidget;

	//tabVéhicule
	QVBoxLayout *layoutVehicule;
	QHBoxLayout *layoutNomVehicule;
	QLabel *nomVehicule;
	QTextEdit *nomVehiculeChoisi;
	QRealValueBox *mMasse;
	QPolygonEditor * mPoly;
	QWidget * mWidgetVehicule;

protected slots:
	void updateVaisseau();

};
