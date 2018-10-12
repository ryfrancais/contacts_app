#include "group.h"

int create_group(char group_name[80])
{
    group new_group;
    strcpy(new_group.group_name, group_name);
    printf("%s", group_name);
    return NO_ERROR;
}

int delete_group(char group_name[GROUPNAME_LEN])
{
    group new_group;
    /* TODO: Add delete functionality */
    return NO_ERROR;
}

group* view_groups()
{
    /* TODO: Add group lookup functionality */
    return NO_ERROR;
}

int get_group_id(group g)
{
    
}

int main()
{
    char gr[80] = "My New Group";
    create_group(gr);
    return 0;
}