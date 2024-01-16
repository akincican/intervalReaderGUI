/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExperiment_Setup;
    QAction *actionLoad_Experiment;
    QAction *actionRemove_Experiment;
    QAction *actionSave_as_txt;
    QAction *actionSave_as_CSV;
    QAction *actionSave_as_XLSX;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *profilNameLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *restartButton;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextButton;
    QMenuBar *menubar;
    QMenu *menusettings;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(857, 618);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionExperiment_Setup = new QAction(MainWindow);
        actionExperiment_Setup->setObjectName("actionExperiment_Setup");
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria")});
        actionExperiment_Setup->setFont(font);
        actionLoad_Experiment = new QAction(MainWindow);
        actionLoad_Experiment->setObjectName("actionLoad_Experiment");
        actionRemove_Experiment = new QAction(MainWindow);
        actionRemove_Experiment->setObjectName("actionRemove_Experiment");
        actionSave_as_txt = new QAction(MainWindow);
        actionSave_as_txt->setObjectName("actionSave_as_txt");
        actionSave_as_txt->setFont(font);
        actionSave_as_CSV = new QAction(MainWindow);
        actionSave_as_CSV->setObjectName("actionSave_as_CSV");
        actionSave_as_CSV->setFont(font);
        actionSave_as_XLSX = new QAction(MainWindow);
        actionSave_as_XLSX->setObjectName("actionSave_as_XLSX");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        profilNameLabel = new QLabel(centralwidget);
        profilNameLabel->setObjectName("profilNameLabel");
        QFont font2;
        font2.setPointSize(16);
        profilNameLabel->setFont(font2);

        horizontalLayout->addWidget(profilNameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName("restartButton");

        horizontalLayout->addWidget(restartButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cambria")});
        font3.setPointSize(20);
        tableView->setFont(font3);
        tableView->setAlternatingRowColors(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        infoLabel = new QLabel(centralwidget);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setFont(font);

        horizontalLayout_2->addWidget(infoLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");
        nextButton->setStyleSheet(QString::fromUtf8("QTableView {\n"
"                                selection-background-color: yellow;\n"
"                            }"));

        horizontalLayout_2->addWidget(nextButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 857, 21));
        menusettings = new QMenu(menubar);
        menusettings->setObjectName("menusettings");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menusettings->menuAction());
        menusettings->addAction(actionExperiment_Setup);
        menusettings->addSeparator();
        menuFile->addAction(actionSave_as_txt);
        menuFile->addAction(actionSave_as_CSV);
        menuFile->addAction(actionSave_as_XLSX);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "intervalReaderGUI", nullptr));
        actionExperiment_Setup->setText(QCoreApplication::translate("MainWindow", "Set up new experiment", nullptr));
        actionLoad_Experiment->setText(QCoreApplication::translate("MainWindow", "Load Experiment", nullptr));
        actionRemove_Experiment->setText(QCoreApplication::translate("MainWindow", "Remove Experiment", nullptr));
        actionSave_as_txt->setText(QCoreApplication::translate("MainWindow", "Save as TXT", nullptr));
        actionSave_as_CSV->setText(QCoreApplication::translate("MainWindow", "Save as CSV", nullptr));
        actionSave_as_XLSX->setText(QCoreApplication::translate("MainWindow", "Save as XLSX", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PROFILE:  ", nullptr));
        profilNameLabel->setText(QString());
        restartButton->setText(QCoreApplication::translate("MainWindow", "restart", nullptr));
        infoLabel->setText(QString());
        nextButton->setText(QCoreApplication::translate("MainWindow", "next hit", nullptr));
        menusettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
