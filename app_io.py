from os import system, name
from constants import *
from constants import error as err
import views

class App_IO:
    def __init__(self):
        self._views = views.Views()

    def io_main_view(self):
        self._views.main()
        main_choice = self.io_get_choice(main_io_options, main_exit_val)
        main_choice = "M{}".format(main_choice)
        next_view = self._views.get_view_name(main)
        return err["NO_ERROR"]

    def io_get_choice(self, dict_of_choices, exit_cond=-1):
        print("Please Enter a Choice:\n")
        sorted_keys = sorted(dict_of_choices.keys())
        for key in sorted_keys:
            print("({}):\t{}".format(key, dict_of_choices[key]))
        print("\n")

        while True:
            choice = input("Choice: ")
            try:
                choice = int(choice)
                if choice > exit_cond or choice < 1:
                    raise ValueError
                break
            except ValueError:
                print("Error: not a valid choice.")
                continue
        return choice

    def group_view(self):
        self._views.group()
        group_choice = self.io_get_choice(group_io_options)

    def _show_screen(self, view_name):
        return err["NO_ERROR"]
