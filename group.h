#ifndef _GROUP_H
#define _GROUP_H

#include "custom_defines.h"
#include <string.h>
#include <stdio.h>

/*
 * Groups are containers for multiple users and all of their
 * data.
 * 
 * Low-level functions for creation/destruction of groups are
 * to be added here.
 */

typedef struct group
{
    char group_name[GROUPNAME_LEN];
    int group_id;
}group;

int create_group(char group_name[GROUPNAME_LEN]);
int delete_group(char group_name[GROUPNAME_LEN]);
int get_group_id(group g);
group * view_groups();


#endif