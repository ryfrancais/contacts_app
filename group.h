#ifndef _GROUP_H
#define _GROUP_H

#include "custom_defines.h"
#include <string.h>
#include <stdio.h>

typedef struct group
{
    char group_name[GROUPNAME_LEN];
}group;

void create_group(char group_name[GROUPNAME_LEN]);
void delete_group(char group_name[GROUPNAME_LEN]);
group * view_groups();


#endif