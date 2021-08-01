#!/usr/bin/env python
import sys
from PyQt5 import QtCore
# from PyQt5.QtCore import Qt
# From QtWidgets - QCheckBox, QDoubleSpinBox, QLCDNumber, QMainWindow,
# QRadioButton, QPushButton, QProgressBar
from PyQt5.QtWidgets import (QApplication, QComboBox, QLabel, QLineEdit,
                             QSpinBox, QVBoxLayout, QHBoxLayout, QGridLayout,
                             QWidget, QFormLayout)


class Window(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Character Sheet")
        self.resize(1200, 600)
        self.main = QVBoxLayout()

        # ----------------------------------------------------------------------

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

        self.line1.addWidget(QLabel("Name: "))
        self.Name = QLineEdit()
        self.Name.setMinimumWidth(240)
        self.line1.addWidget(self.Name)

        self.Spec = QFormLayout()
        self.Spec.addRow(QLabel("Species: "), self.Species)
        self.line1.addLayout(self.Spec)

        self.Cla = QFormLayout()
        self.Cla.addRow(QLabel("Class: "), self.Classes)
        self.line1.addLayout(self.Cla)

        self.top.addLayout(self.line1)

        self.line2 = QHBoxLayout()

        self.line2.addWidget(QLabel("Career: "))
        self.line2.addWidget(QLineEdit())

        self.CarL = QFormLayout()
        self.CarL.addRow(QLabel("Career Level: "), self.Level)
        self.line2.addLayout(self.CarL)

        self.top.addLayout(self.line2)

        self.line3 = QHBoxLayout()

        self.line3.addWidget(QLabel("Career Path: "))
        self.line3.addWidget(QLineEdit())
        self.line3.addWidget(QLabel("Status: "))

        self.Stat = QFormLayout()
        self.Stat.addRow(self.Status, self.SLevel)
        self.line3.addLayout(self.Stat)

        self.top.addLayout(self.line3)

        self.line4 = QHBoxLayout()

        self.line4.addWidget(QLabel("Age: "))
        self.Age = QLineEdit()
        self.Age.setFixedWidth(60)
        self.line4.addWidget(self.Age)

        self.line4.addWidget(QLabel("Height: "))
        self.Height = QLineEdit()
        self.Height.setFixedWidth(120)
        self.line4.addWidget(self.Height)

        self.line4.addWidget(QLabel("Hair: "))
        self.Hair = QLineEdit()
        self.line4.addWidget(self.Hair)

        self.line4.addWidget(QLabel("Eyes: "))
        self.Eyes = QLineEdit()
        self.line4.addWidget(self.Eyes)

        self.top.addLayout(self.line4)
        self.top.addWidget(QLabel())
        self.top.addStretch()

        self.main.addLayout(self.top)

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

        self.fate = QFormLayout()
        self.FText = QLabel("FATE")
        self.Fate = QSpinBox()
        self.Fortune = QSpinBox()
        self.FText.setAlignment(QtCore.Qt.AlignCenter)

        self.fate.addRow(self.FText)
        self.fate.addRow(QLabel("Fate: "), self.Fate)
        self.fate.addRow(QLabel("Fortune: "), self.Fortune)

        # ----------------------------------------------------------------------

        self.exp = QFormLayout()
        self.EText = QLabel("EXPERIENCE")
        self.Current = QLineEdit()
        self.Current.setFixedWidth(60)
        self.Spent = QLineEdit()
        self.Spent.setFixedWidth(60)
        self.Total = QLineEdit()
        self.Total.setFixedWidth(60)
        self.EText.setAlignment(QtCore.Qt.AlignCenter)

        self.exp.addRow(self.EText)
        self.exp.addRow(QLabel("Current: "), self.Current)
        self.exp.addRow(QLabel("Spent: "), self.Spent)
        self.exp.addRow(QLabel("Total: "), self.Total)

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

        # ----------------------------------------------------------------------

        self.middle = QHBoxLayout()
        self.middle.addLayout(self.chara)
        self.middle.addLayout(self.fate)
        self.middle.addLayout(self.move)
        self.middle.addLayout(self.exp)
        self.middle.addLayout(self.resi)

        self.main.addLayout(self.middle)
        self.main.addStretch()
        self.setLayout(self.main)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
