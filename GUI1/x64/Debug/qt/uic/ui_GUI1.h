/********************************************************************************
** Form generated from reading UI file 'GUI1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI1_H
#define UI_GUI1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI1Class
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *btnCities;
    QPushButton *btnRoads;
    QPushButton *btnDisplay;
    QPushButton *btnSearch;
    QSpacerItem *verticalSpacer;
    QWidget *citiesPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtCityName;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAddCity;
    QPushButton *btnUpdateCity;
    QPushButton *btnDeleteCity;
    QPushButton *btnRefreshCities;
    QPushButton *btnHome;
    QListWidget *listCities;
    QWidget *roadsPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cmbSourceCity;
    QLabel *label_4;
    QComboBox *cmbDestinationCity;
    QLabel *label_5;
    QSpinBox *spinDistance;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAddRoad;
    QPushButton *btnUpdateRoad;
    QPushButton *btnDeleteRoad;
    QPushButton *btnRefreshRoads;
    QPushButton *btnHome_2;
    QTableWidget *tableRoads;
    QWidget *displayPage;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *cmbDisplayCity;
    QPushButton *btnDisplayNeighbors;
    QPushButton *btnDisplayFull;
    QPushButton *btnHome_3;
    QTextEdit *txtDisplay;
    QWidget *searchPage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *cmbStartCity;
    QLabel *label_8;
    QComboBox *cmbEndCity;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnDijkstra;
    QPushButton *btnDFS;
    QPushButton *btnBFS;
    QPushButton *btnHome_4;
    QTextEdit *txtResults;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUI1Class)
    {
        if (GUI1Class->objectName().isEmpty())
            GUI1Class->setObjectName("GUI1Class");
        GUI1Class->resize(800, 600);
        GUI1Class->setMinimumSize(QSize(800, 600));
        GUI1Class->setStyleSheet(QString::fromUtf8("\n"
"	   QMainWindow {\n"
"	   background-color: white;\n"
"	   }\n"
"	   QLabel, QPushButton, QLineEdit, QComboBox, QSpinBox, QTextEdit, QListWidget, QTableWidget {\n"
"	   color: black;\n"
"	   font-family: 'Segoe UI', Arial, sans-serif;\n"
"	   }\n"
"	   QPushButton {\n"
"	   background-color: #4CAF50;\n"
"	   color: white;\n"
"	   border: none;\n"
"	   padding: 8px 16px;\n"
"	   border-radius: 4px;\n"
"	   font-weight: bold;\n"
"	   margine: 40px;\n"
"	   width: 100px;\n"
"	   height: 60px;\n"
"	   }\n"
"	   QPushButton:hover {\n"
"	   background-color: #45a049;\n"
"	   color: #808080;\n"
"	   }\n"
"	   QPushButton:pressed {\n"
"	   background-color: #3d8b40;\n"
"	   color: #808080;\n"
"	   }\n"
"	   QPen{\n"
"	   font-size: 20px;\n"
"	   }\n"
"	   QTableRoads {\n"
"	   background-color: white;\n"
"	   color : white;\n"
"	   }\n"
"	   QLineEdit, QComboBox, QSpinBox {\n"
"	   border: 1px solid #ccc;\n"
"	   border-radius: 4px;\n"
"	   padding: 6px;\n"
"	   }\n"
"	   QTextEdit, QListWidget, QTableWidget {\n"
""
                        "	   border: 1px solid #ddd;\n"
"	   border-radius: 4px;\n"
"	   background-color: #f9f9f9;\n"
"	   font-size: 20px;\n"
"	   }\n"
"	   QTableWidget {\n"
"	   gridline-color: #ddd;\n"
"	   }\n"
"	   QHeaderView::section {\n"
"	   background-color: #4CAF50;\n"
"	   color: white;\n"
"	   padding: 4px;\n"
"	   }\n"
"	   QMenuBar {\n"
"	   background-color: black;\n"
"	   border-bottom: 1px solid #ddd;\n"
"	   }\n"
"	   QMenuBar::item {\n"
"	   padding: 5px 10px;\n"
"	   background: transparent;\n"
"	   color: white;\n"
"	   }\n"
"	   QMenuBar::item:selected {\n"
"	   background: #e0e0e0;\n"
"	   color: black;\n"
"	   }\n"
"	   QMenu {\n"
"	   background-color: white;\n"
"	   border: 1px solid #ddd;\n"
"	   color: black;\n"
"	   }\n"
"	   QMenu::item:selected {\n"
"	   background-color: black;\n"
"	   color: white;\n"
"	   }\n"
"   "));
        actionSave = new QAction(GUI1Class);
        actionSave->setObjectName("actionSave");
        actionLoad = new QAction(GUI1Class);
        actionLoad->setObjectName("actionLoad");
        centralWidget = new QWidget(GUI1Class);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        verticalLayout_2 = new QVBoxLayout(homePage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(homePage);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        btnCities = new QPushButton(homePage);
        btnCities->setObjectName("btnCities");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        btnCities->setFont(font1);
        btnCities->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        verticalLayout_2->addWidget(btnCities);

        btnRoads = new QPushButton(homePage);
        btnRoads->setObjectName("btnRoads");
        btnRoads->setFont(font1);
        btnRoads->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        verticalLayout_2->addWidget(btnRoads);

        btnDisplay = new QPushButton(homePage);
        btnDisplay->setObjectName("btnDisplay");
        btnDisplay->setFont(font1);
        btnDisplay->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        verticalLayout_2->addWidget(btnDisplay);

        btnSearch = new QPushButton(homePage);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setFont(font1);
        btnSearch->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        verticalLayout_2->addWidget(btnSearch);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(homePage);
        citiesPage = new QWidget();
        citiesPage->setObjectName("citiesPage");
        verticalLayout_3 = new QVBoxLayout(citiesPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(citiesPage);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        txtCityName = new QLineEdit(citiesPage);
        txtCityName->setObjectName("txtCityName");
        txtCityName->setStyleSheet(QString::fromUtf8("color: black;\n"
"background: white;"));

        horizontalLayout->addWidget(txtCityName);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnAddCity = new QPushButton(citiesPage);
        btnAddCity->setObjectName("btnAddCity");
        btnAddCity->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_2->addWidget(btnAddCity);

        btnUpdateCity = new QPushButton(citiesPage);
        btnUpdateCity->setObjectName("btnUpdateCity");
        btnUpdateCity->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_2->addWidget(btnUpdateCity);

        btnDeleteCity = new QPushButton(citiesPage);
        btnDeleteCity->setObjectName("btnDeleteCity");
        btnDeleteCity->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_2->addWidget(btnDeleteCity);

        btnRefreshCities = new QPushButton(citiesPage);
        btnRefreshCities->setObjectName("btnRefreshCities");
        btnRefreshCities->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_2->addWidget(btnRefreshCities);

        btnHome = new QPushButton(citiesPage);
        btnHome->setObjectName("btnHome");
        btnHome->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_2->addWidget(btnHome);


        verticalLayout_3->addLayout(horizontalLayout_2);

        listCities = new QListWidget(citiesPage);
        listCities->setObjectName("listCities");

        verticalLayout_3->addWidget(listCities);

        stackedWidget->addWidget(citiesPage);
        roadsPage = new QWidget();
        roadsPage->setObjectName("roadsPage");
        verticalLayout_4 = new QVBoxLayout(roadsPage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(roadsPage);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        cmbSourceCity = new QComboBox(roadsPage);
        cmbSourceCity->setObjectName("cmbSourceCity");
        cmbSourceCity->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color: black;"));

        horizontalLayout_3->addWidget(cmbSourceCity);

        label_4 = new QLabel(roadsPage);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        cmbDestinationCity = new QComboBox(roadsPage);
        cmbDestinationCity->setObjectName("cmbDestinationCity");
        cmbDestinationCity->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color: black;"));

        horizontalLayout_3->addWidget(cmbDestinationCity);

        label_5 = new QLabel(roadsPage);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        spinDistance = new QSpinBox(roadsPage);
        spinDistance->setObjectName("spinDistance");
        spinDistance->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        spinDistance->setMinimum(1);
        spinDistance->setMaximum(10000);

        horizontalLayout_3->addWidget(spinDistance);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnAddRoad = new QPushButton(roadsPage);
        btnAddRoad->setObjectName("btnAddRoad");
        btnAddRoad->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_4->addWidget(btnAddRoad);

        btnUpdateRoad = new QPushButton(roadsPage);
        btnUpdateRoad->setObjectName("btnUpdateRoad");
        btnUpdateRoad->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_4->addWidget(btnUpdateRoad);

        btnDeleteRoad = new QPushButton(roadsPage);
        btnDeleteRoad->setObjectName("btnDeleteRoad");
        btnDeleteRoad->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_4->addWidget(btnDeleteRoad);

        btnRefreshRoads = new QPushButton(roadsPage);
        btnRefreshRoads->setObjectName("btnRefreshRoads");
        btnRefreshRoads->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_4->addWidget(btnRefreshRoads);

        btnHome_2 = new QPushButton(roadsPage);
        btnHome_2->setObjectName("btnHome_2");
        btnHome_2->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_4->addWidget(btnHome_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        tableRoads = new QTableWidget(roadsPage);
        if (tableRoads->columnCount() < 3)
            tableRoads->setColumnCount(3);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setForeground(brush);
        tableRoads->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableRoads->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableRoads->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableRoads->setObjectName("tableRoads");

        verticalLayout_4->addWidget(tableRoads);

        stackedWidget->addWidget(roadsPage);
        displayPage = new QWidget();
        displayPage->setObjectName("displayPage");
        verticalLayout_5 = new QVBoxLayout(displayPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(displayPage);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        cmbDisplayCity = new QComboBox(displayPage);
        cmbDisplayCity->setObjectName("cmbDisplayCity");
        cmbDisplayCity->setStyleSheet(QString::fromUtf8("color: black;\n"
"background: white;"));

        horizontalLayout_5->addWidget(cmbDisplayCity);

        btnDisplayNeighbors = new QPushButton(displayPage);
        btnDisplayNeighbors->setObjectName("btnDisplayNeighbors");
        btnDisplayNeighbors->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_5->addWidget(btnDisplayNeighbors);

        btnDisplayFull = new QPushButton(displayPage);
        btnDisplayFull->setObjectName("btnDisplayFull");
        btnDisplayFull->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_5->addWidget(btnDisplayFull);

        btnHome_3 = new QPushButton(displayPage);
        btnHome_3->setObjectName("btnHome_3");
        btnHome_3->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_5->addWidget(btnHome_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        txtDisplay = new QTextEdit(displayPage);
        txtDisplay->setObjectName("txtDisplay");
        txtDisplay->setStyleSheet(QString::fromUtf8("background: white;"));

        verticalLayout_5->addWidget(txtDisplay);

        stackedWidget->addWidget(displayPage);
        searchPage = new QWidget();
        searchPage->setObjectName("searchPage");
        verticalLayout_6 = new QVBoxLayout(searchPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(searchPage);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        cmbStartCity = new QComboBox(searchPage);
        cmbStartCity->setObjectName("cmbStartCity");
        cmbStartCity->setStyleSheet(QString::fromUtf8("color: black;\n"
"background: white;"));

        horizontalLayout_6->addWidget(cmbStartCity);

        label_8 = new QLabel(searchPage);
        label_8->setObjectName("label_8");

        horizontalLayout_6->addWidget(label_8);

        cmbEndCity = new QComboBox(searchPage);
        cmbEndCity->setObjectName("cmbEndCity");
        cmbEndCity->setStyleSheet(QString::fromUtf8("background: white;\n"
"color: black;"));

        horizontalLayout_6->addWidget(cmbEndCity);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnDijkstra = new QPushButton(searchPage);
        btnDijkstra->setObjectName("btnDijkstra");
        btnDijkstra->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_7->addWidget(btnDijkstra);

        btnDFS = new QPushButton(searchPage);
        btnDFS->setObjectName("btnDFS");
        btnDFS->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_7->addWidget(btnDFS);

        btnBFS = new QPushButton(searchPage);
        btnBFS->setObjectName("btnBFS");
        btnBFS->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_7->addWidget(btnBFS);

        btnHome_4 = new QPushButton(searchPage);
        btnHome_4->setObjectName("btnHome_4");
        btnHome_4->setStyleSheet(QString::fromUtf8("background-color: #2b547e;"));

        horizontalLayout_7->addWidget(btnHome_4);


        verticalLayout_6->addLayout(horizontalLayout_7);

        txtResults = new QTextEdit(searchPage);
        txtResults->setObjectName("txtResults");

        verticalLayout_6->addWidget(txtResults);

        stackedWidget->addWidget(searchPage);

        verticalLayout->addWidget(stackedWidget);

        GUI1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUI1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        GUI1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUI1Class);
        mainToolBar->setObjectName("mainToolBar");
        GUI1Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUI1Class);
        statusBar->setObjectName("statusBar");
        GUI1Class->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionLoad);

        retranslateUi(GUI1Class);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(GUI1Class);
    } // setupUi

    void retranslateUi(QMainWindow *GUI1Class)
    {
        GUI1Class->setWindowTitle(QCoreApplication::translate("GUI1Class", "Graph Manager", nullptr));
        actionSave->setText(QCoreApplication::translate("GUI1Class", "&Save", nullptr));
        actionLoad->setText(QCoreApplication::translate("GUI1Class", "&Load", nullptr));
        label->setText(QCoreApplication::translate("GUI1Class", "Graph Manager", nullptr));
        btnCities->setText(QCoreApplication::translate("GUI1Class", "Manage Cities", nullptr));
        btnRoads->setText(QCoreApplication::translate("GUI1Class", "Manage Roads", nullptr));
        btnDisplay->setText(QCoreApplication::translate("GUI1Class", "View Graph", nullptr));
        btnSearch->setText(QCoreApplication::translate("GUI1Class", "Find Paths", nullptr));
        label_2->setText(QCoreApplication::translate("GUI1Class", "City Name:", nullptr));
        btnAddCity->setText(QCoreApplication::translate("GUI1Class", "Add", nullptr));
        btnUpdateCity->setText(QCoreApplication::translate("GUI1Class", "Update", nullptr));
        btnDeleteCity->setText(QCoreApplication::translate("GUI1Class", "Delete", nullptr));
        btnRefreshCities->setText(QCoreApplication::translate("GUI1Class", "Refresh", nullptr));
        btnHome->setText(QCoreApplication::translate("GUI1Class", "Home", nullptr));
        label_3->setText(QCoreApplication::translate("GUI1Class", "Source:", nullptr));
        label_4->setText(QCoreApplication::translate("GUI1Class", "Destination:", nullptr));
        label_5->setText(QCoreApplication::translate("GUI1Class", "Distance:", nullptr));
        btnAddRoad->setText(QCoreApplication::translate("GUI1Class", "Add", nullptr));
        btnUpdateRoad->setText(QCoreApplication::translate("GUI1Class", "Update", nullptr));
        btnDeleteRoad->setText(QCoreApplication::translate("GUI1Class", "Delete", nullptr));
        btnRefreshRoads->setText(QCoreApplication::translate("GUI1Class", "Refresh", nullptr));
        btnHome_2->setText(QCoreApplication::translate("GUI1Class", "Home", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableRoads->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GUI1Class", "Source", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableRoads->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GUI1Class", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableRoads->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GUI1Class", "Distance", nullptr));
        label_6->setText(QCoreApplication::translate("GUI1Class", "City:", nullptr));
        btnDisplayNeighbors->setText(QCoreApplication::translate("GUI1Class", "Show Neighbors", nullptr));
        btnDisplayFull->setText(QCoreApplication::translate("GUI1Class", "Show Full Graph", nullptr));
        btnHome_3->setText(QCoreApplication::translate("GUI1Class", "Home", nullptr));
        label_7->setText(QCoreApplication::translate("GUI1Class", "Start:", nullptr));
        label_8->setText(QCoreApplication::translate("GUI1Class", "End:", nullptr));
        btnDijkstra->setText(QCoreApplication::translate("GUI1Class", "Dijkstra", nullptr));
        btnDFS->setText(QCoreApplication::translate("GUI1Class", "DFS", nullptr));
        btnBFS->setText(QCoreApplication::translate("GUI1Class", "BFS", nullptr));
        btnHome_4->setText(QCoreApplication::translate("GUI1Class", "Home", nullptr));
        menuFile->setTitle(QCoreApplication::translate("GUI1Class", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI1Class: public Ui_GUI1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI1_H
