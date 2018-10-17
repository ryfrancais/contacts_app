from constants import error as err

class Group:
    def __init__(self, group_name = '',
                group_id = -1, date_created = ''):
        return 

    def create_group(self, group_name,
                    group_id, date_created):
        self.group_name = group_name
        self.group_id = group_id
        self.date_created = date_created
        return err["NO_ERROR"]

    def get_group_id(self, id):
        self.group_id = id
        return err["NO_ERROR"]

    def view_groups(self):
        # TODO: Add method to view groups
        pass
