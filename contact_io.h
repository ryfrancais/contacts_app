#ifndef _CONTACT_IO_H
#define _CONTACT_IO_H

#include "custom_defines.h"
#include "group.h"
#include "contact.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>

/*
 * All methods for I/O are to be included here, including getting
 * input from stdin and outputting text to stdout.
 */

int io_main_show();
int io_get_choice();

int io_new_group();
int io_delete_group();
int io_new_contact();
int io_delete_contact();
int io_add_email();
int io_delete_email();
int io_add_membership();
int io_delete_membership();
int io_get_id();

static int stdin_num_getter(const char *question);

#endif