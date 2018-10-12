#ifndef _CONTACT_H
#define _CONTACT_H

#include "group.h"
#include "custom_defines.h"
#include <string.h>
#include <stdio.h>

/*
 * The contact datatype contains information about an individual,
 * including name, email(s), and phone number(s).
 * 
 * Low-level functions for creation/destruction/modification
 * of contacts are to be added here.
 */

typedef struct contact
{
    char first_name[FIRSTNAME_LEN];
    char last_name[LASTNAME_LEN];
    char emails[NUM_EMAILS][EMAIL_LEN];
    group member_of[MAX_GROUPS];
    int contact_id;
}contact;

int add_contact(contact new_contact);
int modify_name(contact mod_contact);
int modify_emails(contact mod_contact);
int modify_membership(contact mod_contact);
int get_id(contact c);


#endif