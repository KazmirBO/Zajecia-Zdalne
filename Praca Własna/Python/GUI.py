# from file_choosing import Ui_Dialog
from PyQt5 import QtWidgets

# our class


class MainWindow():
    def __init__(self):
        super(MainWindow).__init__()


def setupUi(self, Dialog):
    super(MainWindow, self).setupUi(Dialog)
    # Todo: add our own functions
    # adding functions to buttons from here
    self.toolButton.clicked.connect(self._create_window)
    self.pushButton.clicked.connect(self._clicked_push_button)


# running GUI instance
if __name__ == "__main__":
    import sys

    app = QtWidgets.QApplication(sys.argv)
    Dialog = QtWidgets.QDialog()
    ui = MainWindow()
    ui.setupUi(Dialog)
    Dialog.show()
    sys.exit(app.exec_())
