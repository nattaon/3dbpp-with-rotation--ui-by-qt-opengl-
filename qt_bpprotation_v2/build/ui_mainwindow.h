/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *in_box_w;
    QPushButton *bt_binpacking;
    QPushButton *bt_load;
    QPushButton *bt_showorder;
    QPushButton *bt_next_order;
    QLineEdit *in_box_h;
    QLabel *label_3;
    GLWidget *widget;
    QPushButton *bt_remove;
    QLineEdit *in_box_d;
    QPushButton *bt_previous_order;
    QPushButton *bt_add_box;
    QPushButton *bt_save;
    QPushButton *bt_clearall;
    QLineEdit *in_bin_d;
    QLineEdit *in_bin_h;
    QLabel *label_2;
    QLineEdit *in_bin_w;
    QTreeWidget *treeWidget;
    QLabel *label;
    QLabel *label_4;
    QPushButton *bt_reset;
    QComboBox *comboBox_packMethod;
    QLabel *label_5;
    QLineEdit *in_node_limit;
    QLabel *label_6;
    QLineEdit *in_iter_limit;
    QLabel *label_7;
    QLineEdit *in_time_limit;
    QLabel *label_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777212, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        in_box_w = new QLineEdit(centralWidget);
        in_box_w->setObjectName(QStringLiteral("in_box_w"));
        in_box_w->setGeometry(QRect(20, 550, 31, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(in_box_w->sizePolicy().hasHeightForWidth());
        in_box_w->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        in_box_w->setFont(font);
        bt_binpacking = new QPushButton(centralWidget);
        bt_binpacking->setObjectName(QStringLiteral("bt_binpacking"));
        bt_binpacking->setGeometry(QRect(500, 40, 75, 23));
        bt_binpacking->setFont(font);
        bt_load = new QPushButton(centralWidget);
        bt_load->setObjectName(QStringLiteral("bt_load"));
        bt_load->setGeometry(QRect(20, 10, 55, 23));
        bt_load->setFont(font);
        bt_showorder = new QPushButton(centralWidget);
        bt_showorder->setObjectName(QStringLiteral("bt_showorder"));
        bt_showorder->setGeometry(QRect(660, 40, 71, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setBold(false);
        font1.setWeight(50);
        bt_showorder->setFont(font1);
        bt_next_order = new QPushButton(centralWidget);
        bt_next_order->setObjectName(QStringLiteral("bt_next_order"));
        bt_next_order->setGeometry(QRect(740, 40, 16, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setBold(true);
        font2.setWeight(75);
        bt_next_order->setFont(font2);
        in_box_h = new QLineEdit(centralWidget);
        in_box_h->setObjectName(QStringLiteral("in_box_h"));
        in_box_h->setGeometry(QRect(60, 550, 31, 23));
        in_box_h->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 530, 91, 20));
        label_3->setFont(font);
        widget = new GLWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 70, 500, 500));
        bt_remove = new QPushButton(centralWidget);
        bt_remove->setObjectName(QStringLiteral("bt_remove"));
        bt_remove->setGeometry(QRect(90, 40, 55, 23));
        bt_remove->setFont(font);
        in_box_d = new QLineEdit(centralWidget);
        in_box_d->setObjectName(QStringLiteral("in_box_d"));
        in_box_d->setGeometry(QRect(100, 550, 31, 23));
        in_box_d->setFont(font);
        bt_previous_order = new QPushButton(centralWidget);
        bt_previous_order->setObjectName(QStringLiteral("bt_previous_order"));
        bt_previous_order->setGeometry(QRect(640, 40, 16, 23));
        bt_previous_order->setFont(font2);
        bt_add_box = new QPushButton(centralWidget);
        bt_add_box->setObjectName(QStringLiteral("bt_add_box"));
        bt_add_box->setGeometry(QRect(170, 550, 31, 23));
        bt_add_box->setFont(font);
        bt_save = new QPushButton(centralWidget);
        bt_save->setObjectName(QStringLiteral("bt_save"));
        bt_save->setGeometry(QRect(90, 10, 55, 23));
        bt_save->setFont(font);
        bt_clearall = new QPushButton(centralWidget);
        bt_clearall->setObjectName(QStringLiteral("bt_clearall"));
        bt_clearall->setGeometry(QRect(20, 40, 55, 23));
        bt_clearall->setFont(font);
        in_bin_d = new QLineEdit(centralWidget);
        in_bin_d->setObjectName(QStringLiteral("in_bin_d"));
        in_bin_d->setGeometry(QRect(340, 40, 31, 20));
        in_bin_d->setFont(font);
        in_bin_h = new QLineEdit(centralWidget);
        in_bin_h->setObjectName(QStringLiteral("in_bin_h"));
        in_bin_h->setGeometry(QRect(300, 40, 31, 20));
        in_bin_h->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 10, 91, 20));
        label_2->setFont(font);
        in_bin_w = new QLineEdit(centralWidget);
        in_bin_w->setObjectName(QStringLiteral("in_bin_w"));
        in_bin_w->setGeometry(QRect(260, 40, 31, 20));
        in_bin_w->setFont(font);
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignCenter);
        __qtreewidgetitem->setFont(3, font);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 70, 220, 451));
        treeWidget->setMinimumSize(QSize(0, 0));
        treeWidget->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Calibri"));
        font3.setPointSize(8);
        treeWidget->setFont(font3);
        treeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        treeWidget->setAutoScrollMargin(14);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setDefaultSectionSize(50);
        treeWidget->header()->setHighlightSections(false);
        treeWidget->header()->setMinimumSectionSize(50);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        treeWidget->header()->setStretchLastSection(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 550, 25, 23));
        label->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 40, 25, 23));
        label_4->setFont(font);
        bt_reset = new QPushButton(centralWidget);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));
        bt_reset->setGeometry(QRect(580, 40, 50, 23));
        bt_reset->setFont(font);
        comboBox_packMethod = new QComboBox(centralWidget);
        comboBox_packMethod->setObjectName(QStringLiteral("comboBox_packMethod"));
        comboBox_packMethod->setGeometry(QRect(410, 40, 75, 22));
        comboBox_packMethod->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 10, 55, 20));
        label_5->setFont(font);
        in_node_limit = new QLineEdit(centralWidget);
        in_node_limit->setObjectName(QStringLiteral("in_node_limit"));
        in_node_limit->setGeometry(QRect(450, 10, 40, 20));
        in_node_limit->setFont(font);
        in_node_limit->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 10, 55, 20));
        label_6->setFont(font);
        in_iter_limit = new QLineEdit(centralWidget);
        in_iter_limit->setObjectName(QStringLiteral("in_iter_limit"));
        in_iter_limit->setGeometry(QRect(570, 10, 40, 20));
        in_iter_limit->setFont(font);
        in_iter_limit->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(630, 10, 55, 20));
        label_7->setFont(font);
        in_time_limit = new QLineEdit(centralWidget);
        in_time_limit->setObjectName(QStringLiteral("in_time_limit"));
        in_time_limit->setGeometry(QRect(690, 10, 40, 20));
        in_time_limit->setFont(font);
        in_time_limit->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(740, 10, 20, 20));
        label_8->setFont(font);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "3dbpp", 0));
        in_box_w->setText(QApplication::translate("MainWindow", "150", 0));
        bt_binpacking->setText(QApplication::translate("MainWindow", "Binpacking", 0));
        bt_load->setText(QApplication::translate("MainWindow", "Load", 0));
        bt_showorder->setText(QApplication::translate("MainWindow", "Show Order", 0));
        bt_next_order->setText(QApplication::translate("MainWindow", ">", 0));
        in_box_h->setText(QApplication::translate("MainWindow", "110", 0));
        label_3->setText(QApplication::translate("MainWindow", "Box size(w*h*d)", 0));
        bt_remove->setText(QApplication::translate("MainWindow", "Remove", 0));
        in_box_d->setText(QApplication::translate("MainWindow", "50", 0));
        bt_previous_order->setText(QApplication::translate("MainWindow", "<", 0));
        bt_add_box->setText(QApplication::translate("MainWindow", "Add", 0));
        bt_save->setText(QApplication::translate("MainWindow", "Save", 0));
        bt_clearall->setText(QApplication::translate("MainWindow", "Clear All", 0));
        in_bin_d->setText(QApplication::translate("MainWindow", "225", 0));
        in_bin_h->setText(QApplication::translate("MainWindow", "220", 0));
        label_2->setText(QApplication::translate("MainWindow", "Bin size(w*h*d)", 0));
        in_bin_w->setText(QApplication::translate("MainWindow", "330", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "d", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "h", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "w", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "No.", 0));
        label->setText(QApplication::translate("MainWindow", "mm", 0));
        label_4->setText(QApplication::translate("MainWindow", "mm", 0));
        bt_reset->setText(QApplication::translate("MainWindow", "Reset", 0));
        comboBox_packMethod->clear();
        comboBox_packMethod->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "General", 0)
         << QApplication::translate("MainWindow", "Robot", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "nodelimit", 0));
        in_node_limit->setText(QApplication::translate("MainWindow", "0", 0));
        label_6->setText(QApplication::translate("MainWindow", "iterlimit", 0));
        in_iter_limit->setText(QApplication::translate("MainWindow", "0", 0));
        label_7->setText(QApplication::translate("MainWindow", "timelimit", 0));
        in_time_limit->setText(QApplication::translate("MainWindow", "1", 0));
        label_8->setText(QApplication::translate("MainWindow", "sec", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
