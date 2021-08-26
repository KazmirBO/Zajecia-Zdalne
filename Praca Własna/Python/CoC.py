#!/usr/bin/env python
# UTF-8

import sys
from PyQt5 import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *


class StartWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.Title = "Character Creator for Call of Cthulhu"
        self.setFont(QFont('PatrickHand', 12))
        self.setWindowTitle(self.Title)
        self.resize(500, 150)
        self.generalLayout = QHBoxLayout()
        self._centralWidget = QWidget(self)
        self._centralWidget.setLayout(self.generalLayout)
        self.setCentralWidget(self._centralWidget)

        # self._createMenu()
        self._createDisplay()
        # self._createStatusBar()

    def _createDisplay(self):
        self.buttons = QHBoxLayout()

        self.creator = QPushButton("&Creator", self)
        self.creator.clicked.connect(self.CreatorShow)
        self.create = CreatorWindow(self)

        self.sheet = QPushButton("&Sheet", self)
        self.sheet.clicked.connect(self.CharacterShow)
        self.character = CharacterWidow(self)

        self.buttons.addWidget(self.creator)
        self.buttons.addWidget(self.sheet)

        self.generalLayout.addLayout(self.buttons)

    def CharacterShow(self):
        self.character.show()

    def CreatorShow(self):
        self.create.show()

class CharacterWidow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.response = 'Default-character.chr'
        self.Title = "Character Sheet - Call of Cthulhu - " + self.response
        self.setFont(QFont('PatrickHand', 12))
        self.setWindowTitle(self.Title)
        self.resize(1200, 800)

class CreatorWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.Title = "Character Creator for Call of Cthulhu"
        self.setFont(QFont('PatrickHand', 12))
        self.setWindowTitle(self.Title)
        self.resize(1200, 800)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = StartWindow()
    window.show()
    app.exec()
