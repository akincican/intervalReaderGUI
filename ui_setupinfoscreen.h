/********************************************************************************
** Form generated from reading UI file 'setupinfoscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPINFOSCREEN_H
#define UI_SETUPINFOSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setupInfoScreen
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *minusButton;
    QPushButton *plusButton;
    QPushButton *createButton;

    void setupUi(QDialog *setupInfoScreen)
    {
        if (setupInfoScreen->objectName().isEmpty())
            setupInfoScreen->setObjectName("setupInfoScreen");
        setupInfoScreen->resize(234, 477);
        gridLayout = new QGridLayout(setupInfoScreen);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(setupInfoScreen);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(setupInfoScreen);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(setupInfoScreen);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        QFont font;
        font.setPointSize(9);
        tableWidget->setFont(font);
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(128, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        minusButton = new QPushButton(setupInfoScreen);
        minusButton->setObjectName("minusButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusButton->setIcon(icon);

        horizontalLayout_2->addWidget(minusButton);

        plusButton = new QPushButton(setupInfoScreen);
        plusButton->setObjectName("plusButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusButton->setIcon(icon1);

        horizontalLayout_2->addWidget(plusButton);


        verticalLayout->addLayout(horizontalLayout_2);

        createButton = new QPushButton(setupInfoScreen);
        createButton->setObjectName("createButton");

        verticalLayout->addWidget(createButton);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(setupInfoScreen);

        QMetaObject::connectSlotsByName(setupInfoScreen);
    } // setupUi

    void retranslateUi(QDialog *setupInfoScreen)
    {
        setupInfoScreen->setWindowTitle(QCoreApplication::translate("setupInfoScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("setupInfoScreen", "Title of Profile :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("setupInfoScreen", "Sensor", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("setupInfoScreen", "Pin number", nullptr));
        minusButton->setText(QString());
        plusButton->setText(QString());
        createButton->setText(QCoreApplication::translate("setupInfoScreen", "Create Experiment Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setupInfoScreen: public Ui_setupInfoScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPINFOSCREEN_H
