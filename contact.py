from constants import error as err
from copy import deepcopy

class contact:
    def __init__(self, first_name,
                last_name, emails,
                member_of, date_added):
        self.first_name = first_name
        self.last_name = last_name
        self.emails = deepcopy(emails)
        self.member_of = deepcopy(member_of)
        self.date_added = self.date_added
        self.contact_id = self.generate_id()
        return

    def add_contact(self, first_name,
                    last_name, emails,
                    member_of, date_added):
        self.first_name = first_name
        self.last_name = last_name
        self.emails = deepcopy(emails)
        self.member_of = deepcopy(member_of)
        self.date_added = self.date_added
        self.contact_id = self.generate_id()
        return err["NO_ERROR"]

    def modify_name(self, new_first, new_last):
        self.first_name = new_first
        self.last_name = new_last
        return err["NO_ERROR"]

    def modify_emails(self, new_emails):
        self.emails = deepcopy(new_emails)
        return err["NO_ERROR"]

    def modify_membership(self, new_memberships):
        self.member_of = deepcopy(new_memberships)
        return err["NO_ERROR"]

    def get_id(self):
        return self.contact_id

    def generate_id(self):
        # TODO: Write method to generate a unique
        # contact ID

        return err["NO_ERROR"]

