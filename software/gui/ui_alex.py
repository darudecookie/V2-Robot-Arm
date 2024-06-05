# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'alex.ui'
##
## Created by: Qt User Interface Compiler version 5.15.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide2.QtCore import *
from PySide2.QtGui import *
from PySide2.QtWidgets import *


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(642, 569)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayoutWidget = QWidget(self.centralwidget)
        self.verticalLayoutWidget.setObjectName(u"verticalLayoutWidget")
        self.verticalLayoutWidget.setGeometry(QRect(10, 20, 371, 80))
        self.verticalLayout = QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout = QHBoxLayout()
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.cart_pos = QLabel(self.verticalLayoutWidget)
        self.cart_pos.setObjectName(u"cart_pos")

        self.horizontalLayout.addWidget(self.cart_pos)

        self.cart_pos_l = QLineEdit(self.verticalLayoutWidget)
        self.cart_pos_l.setObjectName(u"cart_pos_l")

        self.horizontalLayout.addWidget(self.cart_pos_l)

        self.cart_pos_s = QPushButton(self.verticalLayoutWidget)
        self.cart_pos_s.setObjectName(u"cart_pos_s")

        self.horizontalLayout.addWidget(self.cart_pos_s)

        self.cart_pos_h = QPushButton(self.verticalLayoutWidget)
        self.cart_pos_h.setObjectName(u"cart_pos_h")

        self.horizontalLayout.addWidget(self.cart_pos_h)


        self.verticalLayout.addLayout(self.horizontalLayout)

        self.horizontalLayout_2 = QHBoxLayout()
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.cart_rot = QLabel(self.verticalLayoutWidget)
        self.cart_rot.setObjectName(u"cart_rot")

        self.horizontalLayout_2.addWidget(self.cart_rot)

        self.cart_rot_l = QLineEdit(self.verticalLayoutWidget)
        self.cart_rot_l.setObjectName(u"cart_rot_l")

        self.horizontalLayout_2.addWidget(self.cart_rot_l)

        self.cart_rot_s = QPushButton(self.verticalLayoutWidget)
        self.cart_rot_s.setObjectName(u"cart_rot_s")

        self.horizontalLayout_2.addWidget(self.cart_rot_s)

        self.cart_rot_h = QPushButton(self.verticalLayoutWidget)
        self.cart_rot_h.setObjectName(u"cart_rot_h")

        self.horizontalLayout_2.addWidget(self.cart_rot_h)


        self.verticalLayout.addLayout(self.horizontalLayout_2)

        self.verticalLayoutWidget_2 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_2.setObjectName(u"verticalLayoutWidget_2")
        self.verticalLayoutWidget_2.setGeometry(QRect(10, 310, 371, 213))
        self.verticalLayout_2 = QVBoxLayout(self.verticalLayoutWidget_2)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3 = QHBoxLayout()
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.j0 = QLabel(self.verticalLayoutWidget_2)
        self.j0.setObjectName(u"j0")

        self.horizontalLayout_3.addWidget(self.j0)

        self.j0_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j0_l.setObjectName(u"j0_l")

        self.horizontalLayout_3.addWidget(self.j0_l)

        self.j0_s = QPushButton(self.verticalLayoutWidget_2)
        self.j0_s.setObjectName(u"j0_s")

        self.horizontalLayout_3.addWidget(self.j0_s)

        self.j0_h = QPushButton(self.verticalLayoutWidget_2)
        self.j0_h.setObjectName(u"j0_h")

        self.horizontalLayout_3.addWidget(self.j0_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_3)

        self.horizontalLayout_4 = QHBoxLayout()
        self.horizontalLayout_4.setObjectName(u"horizontalLayout_4")
        self.j1 = QLabel(self.verticalLayoutWidget_2)
        self.j1.setObjectName(u"j1")

        self.horizontalLayout_4.addWidget(self.j1)

        self.j1_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j1_l.setObjectName(u"j1_l")

        self.horizontalLayout_4.addWidget(self.j1_l)

        self.j1_s = QPushButton(self.verticalLayoutWidget_2)
        self.j1_s.setObjectName(u"j1_s")

        self.horizontalLayout_4.addWidget(self.j1_s)

        self.j1_h = QPushButton(self.verticalLayoutWidget_2)
        self.j1_h.setObjectName(u"j1_h")

        self.horizontalLayout_4.addWidget(self.j1_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_4)

        self.horizontalLayout_5 = QHBoxLayout()
        self.horizontalLayout_5.setObjectName(u"horizontalLayout_5")
        self.j2 = QLabel(self.verticalLayoutWidget_2)
        self.j2.setObjectName(u"j2")

        self.horizontalLayout_5.addWidget(self.j2)

        self.j2_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j2_l.setObjectName(u"j2_l")

        self.horizontalLayout_5.addWidget(self.j2_l)

        self.j2_h = QPushButton(self.verticalLayoutWidget_2)
        self.j2_h.setObjectName(u"j2_h")

        self.horizontalLayout_5.addWidget(self.j2_h)

        self.j2_s = QPushButton(self.verticalLayoutWidget_2)
        self.j2_s.setObjectName(u"j2_s")

        self.horizontalLayout_5.addWidget(self.j2_s)


        self.verticalLayout_2.addLayout(self.horizontalLayout_5)

        self.horizontalLayout_6 = QHBoxLayout()
        self.horizontalLayout_6.setObjectName(u"horizontalLayout_6")
        self.j3 = QLabel(self.verticalLayoutWidget_2)
        self.j3.setObjectName(u"j3")

        self.horizontalLayout_6.addWidget(self.j3)

        self.j3_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j3_l.setObjectName(u"j3_l")

        self.horizontalLayout_6.addWidget(self.j3_l)

        self.j3_s = QPushButton(self.verticalLayoutWidget_2)
        self.j3_s.setObjectName(u"j3_s")

        self.horizontalLayout_6.addWidget(self.j3_s)

        self.js_h = QPushButton(self.verticalLayoutWidget_2)
        self.js_h.setObjectName(u"js_h")

        self.horizontalLayout_6.addWidget(self.js_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_6)

        self.horizontalLayout_7 = QHBoxLayout()
        self.horizontalLayout_7.setObjectName(u"horizontalLayout_7")
        self.j4 = QLabel(self.verticalLayoutWidget_2)
        self.j4.setObjectName(u"j4")

        self.horizontalLayout_7.addWidget(self.j4)

        self.j4_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j4_l.setObjectName(u"j4_l")

        self.horizontalLayout_7.addWidget(self.j4_l)

        self.j4_s = QPushButton(self.verticalLayoutWidget_2)
        self.j4_s.setObjectName(u"j4_s")

        self.horizontalLayout_7.addWidget(self.j4_s)

        self.j4_h = QPushButton(self.verticalLayoutWidget_2)
        self.j4_h.setObjectName(u"j4_h")

        self.horizontalLayout_7.addWidget(self.j4_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_7)

        self.horizontalLayout_8 = QHBoxLayout()
        self.horizontalLayout_8.setObjectName(u"horizontalLayout_8")
        self.j5 = QLabel(self.verticalLayoutWidget_2)
        self.j5.setObjectName(u"j5")

        self.horizontalLayout_8.addWidget(self.j5)

        self.j5_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j5_l.setObjectName(u"j5_l")

        self.horizontalLayout_8.addWidget(self.j5_l)

        self.j5_s = QPushButton(self.verticalLayoutWidget_2)
        self.j5_s.setObjectName(u"j5_s")

        self.horizontalLayout_8.addWidget(self.j5_s)

        self.j5_h = QPushButton(self.verticalLayoutWidget_2)
        self.j5_h.setObjectName(u"j5_h")

        self.horizontalLayout_8.addWidget(self.j5_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_8)

        self.horizontalLayout_9 = QHBoxLayout()
        self.horizontalLayout_9.setObjectName(u"horizontalLayout_9")
        self.j6 = QLabel(self.verticalLayoutWidget_2)
        self.j6.setObjectName(u"j6")

        self.horizontalLayout_9.addWidget(self.j6)

        self.j6_l = QLineEdit(self.verticalLayoutWidget_2)
        self.j6_l.setObjectName(u"j6_l")

        self.horizontalLayout_9.addWidget(self.j6_l)

        self.j6_s = QPushButton(self.verticalLayoutWidget_2)
        self.j6_s.setObjectName(u"j6_s")

        self.horizontalLayout_9.addWidget(self.j6_s)

        self.j6_h = QPushButton(self.verticalLayoutWidget_2)
        self.j6_h.setObjectName(u"j6_h")

        self.horizontalLayout_9.addWidget(self.j6_h)


        self.verticalLayout_2.addLayout(self.horizontalLayout_9)

        self.y_pos = QPushButton(self.centralwidget)
        self.y_pos.setObjectName(u"y_pos")
        self.y_pos.setGeometry(QRect(70, 140, 51, 51))
        self.y_neg = QPushButton(self.centralwidget)
        self.y_neg.setObjectName(u"y_neg")
        self.y_neg.setGeometry(QRect(70, 240, 51, 51))
        self.x_neg = QPushButton(self.centralwidget)
        self.x_neg.setObjectName(u"x_neg")
        self.x_neg.setGeometry(QRect(20, 190, 51, 51))
        self.x_pos = QPushButton(self.centralwidget)
        self.x_pos.setObjectName(u"x_pos")
        self.x_pos.setGeometry(QRect(120, 190, 51, 51))
        self.z_pos = QPushButton(self.centralwidget)
        self.z_pos.setObjectName(u"z_pos")
        self.z_pos.setGeometry(QRect(220, 140, 51, 51))
        self.z_neg = QPushButton(self.centralwidget)
        self.z_neg.setObjectName(u"z_neg")
        self.z_neg.setGeometry(QRect(220, 240, 51, 51))
        self.verticalLayoutWidget_3 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_3.setObjectName(u"verticalLayoutWidget_3")
        self.verticalLayoutWidget_3.setGeometry(QRect(280, 170, 101, 61))
        self.verticalLayout_3 = QVBoxLayout(self.verticalLayoutWidget_3)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.jog_amo = QLabel(self.verticalLayoutWidget_3)
        self.jog_amo.setObjectName(u"jog_amo")
        self.jog_amo.setAlignment(Qt.AlignBottom|Qt.AlignHCenter)

        self.verticalLayout_3.addWidget(self.jog_amo)

        self.jog_amo_l = QLineEdit(self.verticalLayoutWidget_3)
        self.jog_amo_l.setObjectName(u"jog_amo_l")

        self.verticalLayout_3.addWidget(self.jog_amo_l)

        self.verticalLayoutWidget_4 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_4.setObjectName(u"verticalLayoutWidget_4")
        self.verticalLayoutWidget_4.setGeometry(QRect(390, 10, 111, 81))
        self.verticalLayout_4 = QVBoxLayout(self.verticalLayoutWidget_4)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.verticalLayout_4.setContentsMargins(0, 0, 0, 0)
        self.target = QLabel(self.verticalLayoutWidget_4)
        self.target.setObjectName(u"target")
        self.target.setAlignment(Qt.AlignHCenter|Qt.AlignTop)

        self.verticalLayout_4.addWidget(self.target)

        self.cart_pos_tar = QTextBrowser(self.verticalLayoutWidget_4)
        self.cart_pos_tar.setObjectName(u"cart_pos_tar")

        self.verticalLayout_4.addWidget(self.cart_pos_tar)

        self.cart_rot_tar = QTextBrowser(self.verticalLayoutWidget_4)
        self.cart_rot_tar.setObjectName(u"cart_rot_tar")

        self.verticalLayout_4.addWidget(self.cart_rot_tar)

        self.verticalSpacer = QSpacerItem(20, 40, QSizePolicy.Minimum, QSizePolicy.Expanding)

        self.verticalLayout_4.addItem(self.verticalSpacer)

        self.verticalLayoutWidget_5 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_5.setObjectName(u"verticalLayoutWidget_5")
        self.verticalLayoutWidget_5.setGeometry(QRect(520, 10, 111, 81))
        self.verticalLayout_5 = QVBoxLayout(self.verticalLayoutWidget_5)
        self.verticalLayout_5.setObjectName(u"verticalLayout_5")
        self.verticalLayout_5.setContentsMargins(0, 0, 0, 0)
        self.actual = QLabel(self.verticalLayoutWidget_5)
        self.actual.setObjectName(u"actual")
        self.actual.setAlignment(Qt.AlignCenter)

        self.verticalLayout_5.addWidget(self.actual)

        self.cart_pos_act = QTextBrowser(self.verticalLayoutWidget_5)
        self.cart_pos_act.setObjectName(u"cart_pos_act")

        self.verticalLayout_5.addWidget(self.cart_pos_act)

        self.cart_rot_act = QTextBrowser(self.verticalLayoutWidget_5)
        self.cart_rot_act.setObjectName(u"cart_rot_act")

        self.verticalLayout_5.addWidget(self.cart_rot_act)

        self.verticalSpacer_2 = QSpacerItem(20, 40, QSizePolicy.Minimum, QSizePolicy.Expanding)

        self.verticalLayout_5.addItem(self.verticalSpacer_2)

        self.horizontalLayoutWidget_8 = QWidget(self.centralwidget)
        self.horizontalLayoutWidget_8.setObjectName(u"horizontalLayoutWidget_8")
        self.horizontalLayoutWidget_8.setGeometry(QRect(390, 170, 241, 31))
        self.horizontalLayout_10 = QHBoxLayout(self.horizontalLayoutWidget_8)
        self.horizontalLayout_10.setObjectName(u"horizontalLayout_10")
        self.horizontalLayout_10.setContentsMargins(0, 0, 0, 0)
        self.dis_err = QLabel(self.horizontalLayoutWidget_8)
        self.dis_err.setObjectName(u"dis_err")

        self.horizontalLayout_10.addWidget(self.dis_err)

        self.dis_err_text = QTextBrowser(self.horizontalLayoutWidget_8)
        self.dis_err_text.setObjectName(u"dis_err_text")

        self.horizontalLayout_10.addWidget(self.dis_err_text)

        self.verticalLayoutWidget_6 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_6.setObjectName(u"verticalLayoutWidget_6")
        self.verticalLayoutWidget_6.setGeometry(QRect(390, 310, 111, 211))
        self.verticalLayout_6 = QVBoxLayout(self.verticalLayoutWidget_6)
        self.verticalLayout_6.setObjectName(u"verticalLayout_6")
        self.verticalLayout_6.setContentsMargins(0, 0, 0, 0)
        self.j0_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j0_tar.setObjectName(u"j0_tar")

        self.verticalLayout_6.addWidget(self.j0_tar)

        self.j1_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j1_tar.setObjectName(u"j1_tar")

        self.verticalLayout_6.addWidget(self.j1_tar)

        self.j2_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j2_tar.setObjectName(u"j2_tar")

        self.verticalLayout_6.addWidget(self.j2_tar)

        self.j3_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j3_tar.setObjectName(u"j3_tar")

        self.verticalLayout_6.addWidget(self.j3_tar)

        self.j4_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j4_tar.setObjectName(u"j4_tar")

        self.verticalLayout_6.addWidget(self.j4_tar)

        self.j5_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j5_tar.setObjectName(u"j5_tar")

        self.verticalLayout_6.addWidget(self.j5_tar)

        self.j6_tar = QTextBrowser(self.verticalLayoutWidget_6)
        self.j6_tar.setObjectName(u"j6_tar")

        self.verticalLayout_6.addWidget(self.j6_tar)

        self.verticalLayoutWidget_7 = QWidget(self.centralwidget)
        self.verticalLayoutWidget_7.setObjectName(u"verticalLayoutWidget_7")
        self.verticalLayoutWidget_7.setGeometry(QRect(520, 310, 111, 211))
        self.verticalLayout_7 = QVBoxLayout(self.verticalLayoutWidget_7)
        self.verticalLayout_7.setObjectName(u"verticalLayout_7")
        self.verticalLayout_7.setContentsMargins(0, 0, 0, 0)
        self.j0_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j0_act.setObjectName(u"j0_act")

        self.verticalLayout_7.addWidget(self.j0_act)

        self.j1_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j1_act.setObjectName(u"j1_act")

        self.verticalLayout_7.addWidget(self.j1_act)

        self.j2_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j2_act.setObjectName(u"j2_act")

        self.verticalLayout_7.addWidget(self.j2_act)

        self.j3_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j3_act.setObjectName(u"j3_act")

        self.verticalLayout_7.addWidget(self.j3_act)

        self.j4_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j4_act.setObjectName(u"j4_act")

        self.verticalLayout_7.addWidget(self.j4_act)

        self.j5_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j5_act.setObjectName(u"j5_act")

        self.verticalLayout_7.addWidget(self.j5_act)

        self.j6_act = QTextBrowser(self.verticalLayoutWidget_7)
        self.j6_act.setObjectName(u"j6_act")

        self.verticalLayout_7.addWidget(self.j6_act)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 642, 21))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
        self.cart_pos.setText(QCoreApplication.translate("MainWindow", u"Cartesian Position:", None))
        self.cart_pos_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.cart_pos_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.cart_rot.setText(QCoreApplication.translate("MainWindow", u"Cartesian Rotation", None))
        self.cart_rot_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.cart_rot_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j0.setText(QCoreApplication.translate("MainWindow", u"Joint 0:", None))
        self.j0_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j0_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j1.setText(QCoreApplication.translate("MainWindow", u"Joint 1:", None))
        self.j1_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j1_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j2.setText(QCoreApplication.translate("MainWindow", u"Joint 2:", None))
        self.j2_h.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j2_s.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j3.setText(QCoreApplication.translate("MainWindow", u"Joint 3:", None))
        self.j3_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.js_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j4.setText(QCoreApplication.translate("MainWindow", u"Joint 4:", None))
        self.j4_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j4_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j5.setText(QCoreApplication.translate("MainWindow", u"Joint 5:", None))
        self.j5_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j5_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.j6.setText(QCoreApplication.translate("MainWindow", u"Joint 6:", None))
        self.j6_s.setText(QCoreApplication.translate("MainWindow", u"Send", None))
        self.j6_h.setText(QCoreApplication.translate("MainWindow", u"Home", None))
        self.y_pos.setText(QCoreApplication.translate("MainWindow", u"Y+", None))
        self.y_neg.setText(QCoreApplication.translate("MainWindow", u"Y-", None))
        self.x_neg.setText(QCoreApplication.translate("MainWindow", u"X-", None))
        self.x_pos.setText(QCoreApplication.translate("MainWindow", u"X+", None))
        self.z_pos.setText(QCoreApplication.translate("MainWindow", u"Z+", None))
        self.z_neg.setText(QCoreApplication.translate("MainWindow", u"Z-", None))
        self.jog_amo.setText(QCoreApplication.translate("MainWindow", u"Jog Amount", None))
        self.target.setText(QCoreApplication.translate("MainWindow", u"Target", None))
        self.actual.setText(QCoreApplication.translate("MainWindow", u"Actual", None))
        self.dis_err.setText(QCoreApplication.translate("MainWindow", u"Distance Error   ", None))
    # retranslateUi

