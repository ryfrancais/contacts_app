#include "group.h"

void create_group(char group_name[80])
{
    group new_group;
    strcpy(new_group.group_name, group_name);
    printf("%s", group_name);
}

int main()
{
    char gr[80] = "My New Group";
    create_group(gr);
    return 0;
}