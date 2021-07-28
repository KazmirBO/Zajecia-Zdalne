#!/bin/python3

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
        main = QVBoxLayout()

        # ----------------------------------------------------------------------

        Classes = QComboBox()
        Classes.addItems(["Academics", "Burghers", "Courtiers", "Peasants",
                          "Rangers", "Riverfolk", "Rouges", "Warriors"])

        Species = QComboBox()
        Species.addItems(
            ["Human", "Dwarf", "Hlafling", "High Elf", "Wood Elf"])

        Level = QComboBox()
        Level.addItems(["1", "2", "3", "4"])

        Status = QComboBox()
        Status.addItems(["Brass", "Silver", "Gold"])

        SLevel = QComboBox()
        SLevel.addItems(["1", "2", "3", "4", "5"])

        top = QVBoxLayout()

        line1 = QHBoxLayout()

        line1.addWidget(QLabel("Name: "))
        Name = QLineEdit()
        Name.setMinimumWidth(240)
        line1.addWidget(Name)

        Spec = QFormLayout()
        Spec.addRow(QLabel("Species: "), Species)
        line1.addLayout(Spec)

        Cla = QFormLayout()
        Cla.addRow(QLabel("Class: "), Classes)
        line1.addLayout(Cla)

        top.addLayout(line1)

        line2 = QHBoxLayout()

        line2.addWidget(QLabel("Career: "))
        line2.addWidget(QLineEdit())

        CarL = QFormLayout()
        CarL.addRow(QLabel("Career Level: "), Level)
        line2.addLayout(CarL)

        top.addLayout(line2)

        line3 = QHBoxLayout()

        line3.addWidget(QLabel("Career Path: "))
        line3.addWidget(QLineEdit())
        line3.addWidget(QLabel("Status: "))

        Stat = QFormLayout()
        Stat.addRow(Status, SLevel)
        line3.addLayout(Stat)

        top.addLayout(line3)

        line4 = QHBoxLayout()

        line4.addWidget(QLabel("Age: "))
        Age = QLineEdit()
        Age.setFixedWidth(60)
        line4.addWidget(Age)

        line4.addWidget(QLabel("Height: "))
        Height = QLineEdit()
        Height.setFixedWidth(120)
        line4.addWidget(Height)

        line4.addWidget(QLabel("Hair: "))
        Hair = QLineEdit()
        line4.addWidget(Hair)

        line4.addWidget(QLabel("Eyes: "))
        Eyes = QLineEdit()
        line4.addWidget(Eyes)

        top.addLayout(line4)
        top.addWidget(QLabel())
        top.addStretch()

        main.addLayout(top)

        # ----------------------------------------------------------------------

        ch = QGridLayout()

        ch.addWidget(QLabel(), 0, 0)
        ch.addWidget(QLabel("WS"), 0, 1)
        ch.addWidget(QLabel("BS"), 0, 2)
        ch.addWidget(QLabel("S"), 0, 3)
        ch.addWidget(QLabel("T"), 0, 4)
        ch.addWidget(QLabel("I"), 0, 5)
        ch.addWidget(QLabel("Ag"), 0, 6)
        ch.addWidget(QLabel("Dex"), 0, 7)
        ch.addWidget(QLabel("Int"), 0, 8)
        ch.addWidget(QLabel("WP"), 0, 9)
        ch.addWidget(QLabel("Fel"), 0, 10)
        ch.addWidget(QLabel("Initial: "), 1, 0)

        WSi = QSpinBox()
        BSi = QSpinBox()
        Si = QSpinBox()
        Ti = QSpinBox()
        Ii = QSpinBox()
        Agi = QSpinBox()
        Dexi = QSpinBox()
        Inti = QSpinBox()
        WPi = QSpinBox()
        Feli = QSpinBox()

        ch.addWidget(WSi, 1, 1)
        ch.addWidget(BSi, 1, 2)
        ch.addWidget(Si, 1, 3)
        ch.addWidget(Ti, 1, 4)
        ch.addWidget(Ii, 1, 5)
        ch.addWidget(Agi, 1, 6)
        ch.addWidget(Dexi, 1, 7)
        ch.addWidget(Inti, 1, 8)
        ch.addWidget(WPi, 1, 9)
        ch.addWidget(Feli, 1, 10)

        ch.addWidget(QLabel("Advances: "), 2, 0)

        WSa = QSpinBox()
        BSa = QSpinBox()
        Sa = QSpinBox()
        Ta = QSpinBox()
        Ia = QSpinBox()
        Aga = QSpinBox()
        Dexa = QSpinBox()
        Inta = QSpinBox()
        WPa = QSpinBox()
        Fela = QSpinBox()

        ch.addWidget(WSa, 2, 1)
        ch.addWidget(BSa, 2, 2)
        ch.addWidget(Sa, 2, 3)
        ch.addWidget(Ta, 2, 4)
        ch.addWidget(Ia, 2, 5)
        ch.addWidget(Aga, 2, 6)
        ch.addWidget(Dexa, 2, 7)
        ch.addWidget(Inta, 2, 8)
        ch.addWidget(WPa, 2, 9)
        ch.addWidget(Fela, 2, 10)

        ch.addWidget(QLabel("Current: "), 3, 0)

        WSc = QSpinBox()
        BSc = QSpinBox()
        Sc = QSpinBox()
        Tc = QSpinBox()
        Ic = QSpinBox()
        Agc = QSpinBox()
        Dexc = QSpinBox()
        Intc = QSpinBox()
        WPc = QSpinBox()
        Felc = QSpinBox()

        ch.addWidget(WSc, 3, 1)
        ch.addWidget(BSc, 3, 2)
        ch.addWidget(Sc, 3, 3)
        ch.addWidget(Tc, 3, 4)
        ch.addWidget(Ic, 3, 5)
        ch.addWidget(Agc, 3, 6)
        ch.addWidget(Dexc, 3, 7)
        ch.addWidget(Intc, 3, 8)
        ch.addWidget(WPc, 3, 9)
        ch.addWidget(Felc, 3, 10)

        chara = QVBoxLayout()

        characteristic = QLabel("CHARACTERISTICS")
        characteristic.setAlignment(QtCore.Qt.AlignCenter)

        chara.addWidget(characteristic)
        chara.addLayout(ch)
        chara.addStretch()

        # ----------------------------------------------------------------------

        fate = QFormLayout()
        FText = QLabel("FATE")
        Fate = QSpinBox()
        Fortune = QSpinBox()
        FText.setAlignment(QtCore.Qt.AlignCenter)

        fate.addRow(FText)
        fate.addRow(QLabel("Fate:"), Fate)
        fate.addRow(QLabel("Fortune:"), Fortune)

        # ----------------------------------------------------------------------

        resi = QVBoxLayout()
        resibottom = QGridLayout()
        RText = QLabel("RESILIENCE")
        RText.setAlignment(QtCore.Qt.AlignCenter)
        Resi = QSpinBox()
        Reso = QSpinBox()
        Motivation = QLineEdit()

        resibottom.addWidget(QLabel("Resilience"), 0, 0)
        resibottom.addWidget(QLabel("Resolve"), 0, 1)
        resibottom.addWidget(QLabel("Motivation"), 0, 2)
        resibottom.addWidget(Resi, 1, 0)
        resibottom.addWidget(Reso, 1, 1)
        resibottom.addWidget(Motivation, 1, 2)

        resi.addWidget(RText)
        resi.addLayout(resibottom)
        resi.addStretch()

        # ----------------------------------------------------------------------

        middle = QGridLayout()
        middle.addLayout(chara, 0, 0,)
        middle.addLayout(fate, 0, 1)
        middle.addLayout(resi, 0, 2)

        main.addLayout(middle)
        self.setLayout(main)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = Window()
    window.show()
    sys.exit(app.exec_())
