from constants import VERSION, DEBUG, LINE_LEN
from constants import error as err

class App_IO:
    def __init__(self):
        pass

    def io_main_show(self):
        divider = '-'
        print("\n")
        print("{}".format(divider * LINE_LEN).center(LINE_LEN))
        print("Contact Management System".center(LINE_LEN))
        print("v. {}".format(VERSION).center(LINE_LEN))
        print("{}".format(divider * LINE_LEN).center(LINE_LEN))
        print("\n\n")
        return err["NO_ERROR"]


if DEBUG:
    app = App_IO()
    app.io_main_show()