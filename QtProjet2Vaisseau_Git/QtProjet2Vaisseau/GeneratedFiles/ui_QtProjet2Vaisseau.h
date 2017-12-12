/********************************************************************************
** Form generated from reading UI file 'QtProjet2Vaisseau.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROJET2VAISSEAU_H
#define UI_QTPROJET2VAISSEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProjet2VaisseauClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtProjet2VaisseauClass)
    {
        if (QtProjet2VaisseauClass->objectName().isEmpty())
            QtProjet2VaisseauClass->setObjectName(QStringLiteral("QtProjet2VaisseauClass"));
        QtProjet2VaisseauClass->resize(600, 400);
        menuBar = new QMenuBar(QtProjet2VaisseauClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtProjet2VaisseauClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtProjet2VaisseauClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtProjet2VaisseauClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtProjet2VaisseauClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtProjet2VaisseauClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtProjet2VaisseauClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtProjet2VaisseauClass->setStatusBar(statusBar);

        retranslateUi(QtProjet2VaisseauClass);

        QMetaObject::connectSlotsByName(QtProjet2VaisseauClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtProjet2VaisseauClass)
    {
        QtProjet2VaisseauClass->setWindowTitle(QApplication::translate("QtProjet2VaisseauClass", "QtProjet2Vaisseau", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtProjet2VaisseauClass: public Ui_QtProjet2VaisseauClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROJET2VAISSEAU_H
