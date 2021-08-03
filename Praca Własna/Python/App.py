#!/usr/bin/env python

import sys
from PyQt5 import QtCore
from PyQt5.QtWidgets import (QApplication, QComboBox, QLabel, QLineEdit,
                             QSpinBox, QVBoxLayout, QHBoxLayout, QGridLayout,
                             QFormLayout, QMainWindow, QStatusBar, QWidget,
                             QFileDialog)


class Window(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.response = 'Default-name.zst'
        self.setWindowTitle(
            "Character Sheet - WFRP 4e - " + self.response)
        # self.resize(1200, 600)
        self.generalLayout = QVBoxLayout()
        self._centralWidget = QWidget(self)
        self.setCentralWidget(self._centralWidget)
        self._centralWidget.setLayout(self.generalLayout)
        self._createMenu()
        self._createDisplay()
        self._createStatusBar()

        # ----------------------------------------------------------------------

    def _createDisplay(self):
        self.Classes = QComboBox()
        self.Classes.addItems(["Academics", "Burghers", "Courtiers",
                               "Peasants", "Rangers", "Riverfolk", "Rouges",
                               "Warriors"])

        self.Species = QComboBox()
        self.Species.addItems(
                 ["Human", "Dwarf", "Hlafling", "High Elf", "Wood Elf"])

        self.Level = QComboBox()
        self.Level.addItems(["1", "2", "3", "4"])

        self.Status = QComboBox()
        self.Status.addItems(["Brass", "Silver", "Gold"])

        self.SLevel = QComboBox()
        self.SLevel.addItems(["1", "2", "3", "4", "5"])

        self.top = QVBoxLayout()
        self.line1 = QHBoxLayout()
        self.line2 = QHBoxLayout()
        self.line3 = QHBoxLayout()
        self.line4 = QHBoxLayout()

        self.Name = QLineEdit()
        self.Car = QLineEdit()
        self.CarP = QLineEdit()
        self.Age = QLineEdit()
        self.Height = QLineEdit()
        self.Hair = QLineEdit()
        self.Eyes = QLineEdit()

        self.Name.setMinimumWidth(160)
        self.Age.setFixedWidth(60)
        self.Height.setFixedWidth(120)

        self.line1.addWidget(QLabel("Name: "))
        self.line1.addWidget(self.Name)
        self.line1.addWidget(QLabel("Species: "))
        self.line1.addWidget(self.Species)
        self.line1.addWidget(QLabel("Class: "))
        self.line1.addWidget(self.Classes)

        self.line2.addWidget(QLabel("Career: "))
        self.line2.addWidget(self.Car)
        self.line2.addWidget(QLabel("Career Level: "))
        self.line2.addWidget(self.Level)

        self.line3.addWidget(QLabel("Career Path: "))
        self.line3.addWidget(self.CarP)
        self.line3.addWidget(QLabel("Status: "))
        self.line3.addWidget(self.Status)
        self.line3.addWidget(self.SLevel)

        self.line4.addWidget(QLabel("Age: "))
        self.line4.addWidget(self.Age)
        self.line4.addWidget(QLabel("Height: "))
        self.line4.addWidget(self.Height)
        self.line4.addWidget(QLabel("Hair: "))
        self.line4.addWidget(self.Hair)
        self.line4.addWidget(QLabel("Eyes: "))
        self.line4.addWidget(self.Eyes)

        self.top.addLayout(self.line1)
        self.top.addLayout(self.line2)
        self.top.addLayout(self.line3)
        self.top.addLayout(self.line4)
        self.top.addWidget(QLabel())
        self.top.addStretch()

        self.generalLayout.addLayout(self.top)

        # ----------------------------------------------------------------------

        self.ch = QGridLayout()

        self.ch.addWidget(QLabel(), 0, 0)
        self.ch.addWidget(QLabel("WS"), 0, 1)
        self.ch.addWidget(QLabel("BS"), 0, 2)
        self.ch.addWidget(QLabel("S"), 0, 3)
        self.ch.addWidget(QLabel("T"), 0, 4)
        self.ch.addWidget(QLabel("I"), 0, 5)
        self.ch.addWidget(QLabel("Ag"), 0, 6)
        self.ch.addWidget(QLabel("Dex"), 0, 7)
        self.ch.addWidget(QLabel("Int"), 0, 8)
        self.ch.addWidget(QLabel("WP"), 0, 9)
        self.ch.addWidget(QLabel("Fel"), 0, 10)
        self.ch.addWidget(QLabel("Initial: "), 1, 0)

        self.WSi = QSpinBox()
        self.BSi = QSpinBox()
        self.Si = QSpinBox()
        self.Ti = QSpinBox()
        self.Ii = QSpinBox()
        self.Agi = QSpinBox()
        self.Dexi = QSpinBox()
        self.Inti = QSpinBox()
        self.WPi = QSpinBox()
        self.Feli = QSpinBox()

        self.ch.addWidget(self.WSi, 1, 1)
        self.ch.addWidget(self.BSi, 1, 2)
        self.ch.addWidget(self.Si, 1, 3)
        self.ch.addWidget(self.Ti, 1, 4)
        self.ch.addWidget(self.Ii, 1, 5)
        self.ch.addWidget(self.Agi, 1, 6)
        self.ch.addWidget(self.Dexi, 1, 7)
        self.ch.addWidget(self.Inti, 1, 8)
        self.ch.addWidget(self.WPi, 1, 9)
        self.ch.addWidget(self.Feli, 1, 10)

        self.ch.addWidget(QLabel("Advances: "), 2, 0)

        self.WSa = QSpinBox()
        self.BSa = QSpinBox()
        self.Sa = QSpinBox()
        self.Ta = QSpinBox()
        self.Ia = QSpinBox()
        self.Aga = QSpinBox()
        self.Dexa = QSpinBox()
        self.Inta = QSpinBox()
        self.WPa = QSpinBox()
        self.Fela = QSpinBox()

        self.ch.addWidget(self.WSa, 2, 1)
        self.ch.addWidget(self.BSa, 2, 2)
        self.ch.addWidget(self.Sa, 2, 3)
        self.ch.addWidget(self.Ta, 2, 4)
        self.ch.addWidget(self.Ia, 2, 5)
        self.ch.addWidget(self.Aga, 2, 6)
        self.ch.addWidget(self.Dexa, 2, 7)
        self.ch.addWidget(self.Inta, 2, 8)
        self.ch.addWidget(self.WPa, 2, 9)
        self.ch.addWidget(self.Fela, 2, 10)

        self.ch.addWidget(QLabel("Current: "), 3, 0)

        self.WSc = QSpinBox()
        self.BSc = QSpinBox()
        self.Sc = QSpinBox()
        self.Tc = QSpinBox()
        self.Ic = QSpinBox()
        self.Agc = QSpinBox()
        self.Dexc = QSpinBox()
        self.Intc = QSpinBox()
        self.WPc = QSpinBox()
        self.Felc = QSpinBox()

        self.ch.addWidget(self.WSc, 3, 1)
        self.ch.addWidget(self.BSc, 3, 2)
        self.ch.addWidget(self.Sc, 3, 3)
        self.ch.addWidget(self.Tc, 3, 4)
        self.ch.addWidget(self.Ic, 3, 5)
        self.ch.addWidget(self.Agc, 3, 6)
        self.ch.addWidget(self.Dexc, 3, 7)
        self.ch.addWidget(self.Intc, 3, 8)
        self.ch.addWidget(self.WPc, 3, 9)
        self.ch.addWidget(self.Felc, 3, 10)

        self.chara = QVBoxLayout()

        self.characteristic = QLabel("CHARACTERISTICS")
        self.characteristic.setAlignment(QtCore.Qt.AlignCenter)
        self.chara.addWidget(self.characteristic)
        self.chara.addLayout(self.ch)
        self.chara.addStretch()

        # ----------------------------------------------------------------------

        self.WSi.valueChanged.connect(self.WSrefresh)
        self.WSa.valueChanged.connect(self.WSrefresh)
        self.WSc.valueChanged.connect(self.WSrefresh)

        self.BSi.valueChanged.connect(self.BSrefresh)
        self.BSa.valueChanged.connect(self.BSrefresh)
        self.BSc.valueChanged.connect(self.BSrefresh)

        self.Si.valueChanged.connect(self.Srefresh)
        self.Sa.valueChanged.connect(self.Srefresh)
        self.Sc.valueChanged.connect(self.Srefresh)

        self.Ti.valueChanged.connect(self.Trefresh)
        self.Ta.valueChanged.connect(self.Trefresh)
        self.Tc.valueChanged.connect(self.Trefresh)

        self.Ii.valueChanged.connect(self.Irefresh)
        self.Ia.valueChanged.connect(self.Irefresh)
        self.Ic.valueChanged.connect(self.Irefresh)

        self.Agi.valueChanged.connect(self.Agrefresh)
        self.Aga.valueChanged.connect(self.Agrefresh)
        self.Agc.valueChanged.connect(self.Agrefresh)

        self.Dexi.valueChanged.connect(self.Dexrefresh)
        self.Dexa.valueChanged.connect(self.Dexrefresh)
        self.Dexc.valueChanged.connect(self.Dexrefresh)

        self.Inti.valueChanged.connect(self.Intrefresh)
        self.Inta.valueChanged.connect(self.Intrefresh)
        self.Intc.valueChanged.connect(self.Intrefresh)

        self.WPi.valueChanged.connect(self.WPrefresh)
        self.WPa.valueChanged.connect(self.WPrefresh)
        self.WPc.valueChanged.connect(self.WPrefresh)

        self.Feli.valueChanged.connect(self.Felrefresh)
        self.Fela.valueChanged.connect(self.Felrefresh)
        self.Felc.valueChanged.connect(self.Felrefresh)

        # ----------------------------------------------------------------------

        self.fate = QFormLayout()
        self.FText = QLabel("FATE")
        self.Fate = QSpinBox()
        self.Fortune = QSpinBox()
        self.FText.setAlignment(QtCore.Qt.AlignCenter)

        self.fate.addRow(self.FText)
        self.fate.addRow(QLabel("Fate: "), self.Fate)
        self.fate.addRow(QLabel("Fortune: "), self.Fortune)

        # ----------------------------------------------------------------------

        self.EText = QLabel("EXPERIENCE")
        self.EText.setAlignment(QtCore.Qt.AlignCenter)
        self.exp = QFormLayout()
        self.Current = QSpinBox()
        self.Spent = QSpinBox()
        self.Total = QSpinBox()
        self.Current.setMaximum(10000)
        self.Spent.setMaximum(10000)
        self.Total.setMaximum(10000)
        self.Current.setFixedWidth(80)
        self.Spent.setFixedWidth(80)
        self.Total.setFixedWidth(80)

        self.exp.addRow(self.EText)
        self.exp.addRow(QLabel("Current: "), self.Current)
        self.exp.addRow(QLabel("Spent: "), self.Spent)
        self.exp.addRow(QLabel("Total: "), self.Total)

        self.Current.valueChanged.connect(self.Erefresh)
        self.Spent.valueChanged.connect(self.Erefresh)
        self.Total.valueChanged.connect(self.Erefresh)

        # ----------------------------------------------------------------------

        self.resi = QVBoxLayout()
        self.resibottom = QFormLayout()
        self.RText = QLabel("RESILIENCE")
        self.RText.setAlignment(QtCore.Qt.AlignCenter)
        self.Resi = QSpinBox()
        self.Reso = QSpinBox()
        self.Motivation = QLineEdit()

        self.resibottom.addRow(QLabel("Resilience: "), self.Resi)
        self.resibottom.addRow(QLabel("Resolve: "), self.Reso)
        self.resibottom.addRow(QLabel("Motivation: "), self.Motivation)

        self.resi.addWidget(self.RText)
        self.resi.addLayout(self.resibottom)
        self.resi.addStretch()

        # ----------------------------------------------------------------------

        self.move = QVBoxLayout()
        self.mstat = QFormLayout()
        self.MText = QLabel("MOVEMENT")
        self.MText.setAlignment(QtCore.Qt.AlignCenter)
        self.Movement = QSpinBox()
        self.Walk = QSpinBox()
        self.Run = QSpinBox()

        self.mstat.addRow(QLabel("Movement: "), self.Movement)
        self.mstat.addRow(QLabel("Walk: "), self.Walk)
        self.mstat.addRow(QLabel("Run: "), self.Run)

        self.move.addWidget(self.MText)
        self.move.addLayout(self.mstat)
        self.move.addStretch()

        self.Movement.valueChanged.connect(self.Mrefresh)
        self.Walk.valueChanged.connect(self.Mrefresh)
        self.Run.valueChanged.connect(self.Mrefresh)

        # ----------------------------------------------------------------------

        self.middle = QHBoxLayout()
        self.middle.addLayout(self.chara)
        self.middle.addLayout(self.fate)
        self.middle.addLayout(self.move)
        self.middle.addLayout(self.exp)
        self.middle.addLayout(self.resi)

        self.generalLayout.addLayout(self.middle)
        self.generalLayout.addStretch()

    def WSrefresh(self):
        ini = self.WSi.value()
        adv = self.WSa.value()
        cur = ini + adv
        self.WSc.setValue(cur)

    def BSrefresh(self):
        ini = self.BSi.value()
        adv = self.BSa.value()
        cur = ini + adv
        self.BSc.setValue(cur)

    def Srefresh(self):
        ini = self.Si.value()
        adv = self.Sa.value()
        cur = ini + adv
        self.Sc.setValue(cur)

    def Trefresh(self):
        ini = self.Ti.value()
        adv = self.Ta.value()
        cur = ini + adv
        self.Tc.setValue(cur)

    def Irefresh(self):
        ini = self.Ii.value()
        adv = self.Ia.value()
        cur = ini + adv
        self.Ic.setValue(cur)

    def Agrefresh(self):
        ini = self.Agi.value()
        adv = self.Aga.value()
        cur = ini + adv
        self.Agc.setValue(cur)

    def Dexrefresh(self):
        ini = self.Dexi.value()
        adv = self.Dexa.value()
        cur = ini + adv
        self.Dexc.setValue(cur)

    def Intrefresh(self):
        ini = self.Inti.value()
        adv = self.Inta.value()
        cur = ini + adv
        self.Intc.setValue(cur)

    def WPrefresh(self):
        ini = self.WPi.value()
        adv = self.WPa.value()
        cur = ini + adv
        self.WPc.setValue(cur)

    def Felrefresh(self):
        ini = self.Feli.value()
        adv = self.Fela.value()
        cur = ini + adv
        self.Felc.setValue(cur)

    def Mrefresh(self):
        mov = self.Movement.value()
        wal = 2 * mov
        ru = 2 * wal
        self.Walk.setValue(wal)
        self.Run.setValue(ru)

    def Erefresh(self):
        cur = self.Current.value()
        spe = self.Spent.value()
        tot = cur + spe
        self.Total.setValue(tot)

    def _createMenu(self):
        self.menu = self.menuBar().addMenu("&Menu")
        self.menu.addAction('&Get File Name', self.getFileName)
        self.menu.addAction('&Import', self.impo)
        self.menu.addAction('&Export', self.expo)
        self.menu.addAction('&Exit', self.close)

    def _createStatusBar(self):
        status = QStatusBar()
        status.showMessage("Hello World!")
        self.setStatusBar(status)

    def impo(self):
        stats = []
        with open(self.response, 'r') as f:
            stats = f.read().splitlines()
        f.close()
        self.Name.setText(str(stats[0]))
        self.Species.setCurrentIndex(int(stats[1]))
        self.Classes.setCurrentIndex(int(stats[2]))
        self.Car.setText(str(stats[3]))
        self.Level.setCurrentIndex(int(stats[4]))
        self.CarP.setText(str(stats[5]))
        self.Status.setCurrentIndex(int(stats[6]))
        self.SLevel.setCurrentIndex(int(stats[7]))
        self.Age.setText(str(stats[8]))
        self.Height.setText(str(stats[9]))
        self.Hair.setText(str(stats[10]))
        self.Eyes.setText(str(stats[11]))
        self.WSi.setValue(int(stats[12]))
        self.WSa.setValue(int(stats[13]))
        self.BSi.setValue(int(stats[14]))
        self.BSa.setValue(int(stats[15]))
        self.Si.setValue(int(stats[16]))
        self.Sa.setValue(int(stats[17]))
        self.Ti.setValue(int(stats[18]))
        self.Ta.setValue(int(stats[19]))
        self.Ii.setValue(int(stats[20]))
        self.Ia.setValue(int(stats[21]))
        self.Agi.setValue(int(stats[22]))
        self.Aga.setValue(int(stats[23]))
        self.Dexi.setValue(int(stats[24]))
        self.Dexa.setValue(int(stats[25]))
        self.Inti.setValue(int(stats[26]))
        self.Inta.setValue(int(stats[27]))
        self.WPi.setValue(int(stats[28]))
        self.WPa.setValue(int(stats[29]))
        self.Feli.setValue(int(stats[30]))
        self.Fela.setValue(int(stats[31]))
        self.Fate.setValue(int(stats[32]))
        self.Fortune.setValue(int(stats[33]))
        self.Movement.setValue(int(stats[34]))
        self.Current.setValue(int(stats[35]))
        self.Spent.setValue(int(stats[36]))
        self.Resi.setValue(int(stats[37]))
        self.Reso.setValue(int(stats[38]))
        self.Motivation.setText(str(stats[39]))

    def expo(self):
        with open(self.response, 'w') as f:
            # f.write('%s\n' % )
            f.write('%s\n' % self.Name.text())
            f.write('%s\n' % self.Species.currentIndex())
            f.write('%s\n' % self.Classes.currentIndex())
            f.write('%s\n' % self.Car.text())
            f.write('%s\n' % self.Level.currentIndex())
            f.write('%s\n' % self.CarP.text())
            f.write('%s\n' % self.Status.currentIndex())
            f.write('%s\n' % self.SLevel.currentIndex())
            f.write('%s\n' % self.Age.text())
            f.write('%s\n' % self.Height.text())
            f.write('%s\n' % self.Hair.text())
            f.write('%s\n' % self.Eyes.text())
            f.write('%s\n' % self.WSi.value())
            f.write('%s\n' % self.WSa.value())
            f.write('%s\n' % self.BSi.value())
            f.write('%s\n' % self.BSa.value())
            f.write('%s\n' % self.Si.value())
            f.write('%s\n' % self.Sa.value())
            f.write('%s\n' % self.Ti.value())
            f.write('%s\n' % self.Ta.value())
            f.write('%s\n' % self.Ii.value())
            f.write('%s\n' % self.Ia.value())
            f.write('%s\n' % self.Agi.value())
            f.write('%s\n' % self.Aga.value())
            f.write('%s\n' % self.Dexi.value())
            f.write('%s\n' % self.Dexa.value())
            f.write('%s\n' % self.Inti.value())
            f.write('%s\n' % self.Inta.value())
            f.write('%s\n' % self.WPi.value())
            f.write('%s\n' % self.WPa.value())
            f.write('%s\n' % self.Feli.value())
            f.write('%s\n' % self.Fela.value())
            f.write('%s\n' % self.Fate.value())
            f.write('%s\n' % self.Fortune.value())
            f.write('%s\n' % self.Movement.value())
            f.write('%s\n' % self.Current.value())
            f.write('%s\n' % self.Spent.value())
            f.write('%s\n' % self.Resi.value())
            f.write('%s\n' % self.Reso.value())
            f.write('%s\n' % self.Motivation.text())
            f.close()

    def getFileName(self):
        filename = QFileDialog.getOpenFileName(
            self,
            'Select File',
            '',
            'ZST File (*.zst);; All Files (*)'
        )[0]
        self.response = filename.split("/")[-1]
        self.setWindowTitle(
            "Character Sheet - WFRP 4e - " + self.response)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
