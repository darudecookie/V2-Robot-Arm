import sys
from PySide2.QtCore import Qt
from PySide2.QtWidgets import *
from PySide2.QtGui import *
from ui_alex import Ui_MainWindow

class Menu(QMainWindow,Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

if __name__=='__main__':
    app=QApplication(sys.argv)
    window=Menu()
    window.show()
    sys.exit(app.exec_())
