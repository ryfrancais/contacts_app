from os import system, name
from collections import defaultdict
from constants import *
from constants import error as err

class Views:
    def __init__(self):
        pass

    def main(self):
        self._add_view("Main")
        self.clear_screen()
        print("\n")
        self._insert_line(self._divider1)
        print("Contact Management System".center(LINE_LEN))
        print("v. {}".format(VERSION).center(LINE_LEN))
        self._insert_line(self._divider1)
        print("\n")
        return err["NO_ERROR"]

    def group(self):
        self._add_view("Group")
        self.clear_screen()
        print("\n")
        self._insert_line(self._divider1)
        print("Group Management".center(LINE_LEN))
        self._insert_line(self._divider1)
        print("\n")
        return err["NO_ERROR"]

    def clear_screen(self):
        if name == 'nt':
            system('cls')
        else:
            system('clear')
        return err["NO_ERROR"]

    def get_view_name(self, id):
        return self._id_to_view_map[id]

    def get_id(self, view):
        return self._view_to_id_map[view]

    def subid_to_view(self, subid):
        for keys, vals in self._subid_to_view:
            for k in keys:
                if subid == k:
                    subid_exists = True
                    view_to_return = self._subid_to_view[k]
        if subid_exists:
            return view_to_return
        else:
            return err["BAD_SUBID"]

    
    def _insert_line(self, chr_to_repeat):
        print("{}".format(chr_to_repeat * LINE_LEN).center(LINE_LEN))

    def _add_view(self, view_name):
        if isinstance(view_name, str):
            self._view_list.append(view_name)
            return err["NO_ERROR"]
        else:
            return err["VIEW_NOT_STRING"]

    def _del_view(self):
        del self._view_list[-1]
        return err["NO_ERROR"]

    _divider1 = '-'
    _view_list = []

    # Maps General View ID <-> View Name
    _view_to_id_map = {
        "Main"      :   0,
        "Groups"    :   1,
        "Contacts"  :   2,
        "Help"      :   3,
        "G_Add"     :   4,
        "G_Edit"    :   5,
        "G_Del"     :   6,
    }
    _id_to_view_map = dict(reversed(item) for item in _view_to_id_map.items())

    _subid_to_view = {
        ('G5',)         :   "Main",
        ('M1',)         :   "Groups",
        ('M2',)         :   "Contacts",
        ('M3',)         :   "Help",
        ('M4',)         :   "Exit",
        ('G4',)         :   "Prev",
        ('G1',)         :   "G_Add",
        ('G2',)         :   "G_Edit",
        ('G3',)         :   "G_Del",
    }