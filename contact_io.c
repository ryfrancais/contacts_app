#include "contact_io.h"

/*
 * io_main_show:
 * 
 * Show the main screen with all options for modifying
 * contacts and groups.
 * 
 * Args:
 *      None
 * Returns:
 *      int -> error code
 */

int io_main_show()
{
    initscr();
    clear();
    printf("\r\n\t\t%s\r\n", "Contact Management System");
    printf("\t\t\tv. %s\r\n", VERSION_NUM);
    printf("%s\r\n\r\n", "-------------------------------------------------------------");
    io_get_choice();
    refresh();
    endwin();
    return NO_ERROR;
}

/*
 * io_get_choice:
 * 
 * Receive input from stdin and change screens accordingly.
 * 
 * Args:
 *      None
 * Returns:
 *      int -> error code
 */

int io_get_choice()
{
    int choice = 0;

    printf("%s\r\n\r\n","Please Enter a Choice:");
    printf("%s\t%s\r\n", "(1):", "Create Group");
    printf("%s\t%s\r\n", "(2):", "Delete Group");
    printf("%s\t%s\r\n", "(3):", "View Groups");
    printf("%s\t%s\r\n", "(4):", "Create Contact");
    printf("%s\t%s\r\n", "(5):", "Delete Contact");
    printf("%s\t%s\r\n", "(6):", "Edit Contact");
    printf("%s\t%s\r\n", "(7):", "View Contacts");
    printf("%s\t%s\r\n", "(8):", "Help");
    printf("%s\t%s\r\n", "(9):", "Exit");
    printf("%s\t%s\r\n", "(10):", "Option 10");

    while (1) {
        choice = stdin_num_getter("Choice");
        if (choice > 10 || choice < 1) {
            printf("\r\n%s\r\n", "Error: Not a valid choice.");
            continue;
        }
        break;
    }
    printf("\r\n%s: %d\r\n", "Your choice was", choice);
    return NO_ERROR;
}

/*
 * io_new_group:
 * 
 * Show screen for adding a new group and handle all input
 * on this screen.
 * 
 * Args:
 *      None
 * Returns:
 *      int -> error code
 */

int io_new_group()
{
    return NO_ERROR;
}

/*
 * io_delete_group:
 * 
 * Show screen for deleting groups and handle all input on
 * this screen.
 * 
 * Args:
 *      None
 * Returns:
 *      int -> error code
 */

int io_delete_group()
{
    return NO_ERROR;
}

int io_new_contact()
{
    return NO_ERROR;
}

int io_delete_contact()
{
    return NO_ERROR;
}

int io_add_email()
{
    return NO_ERROR;
}

int io_delete_email()
{
    return NO_ERROR;
}

int io_add_membership()
{
    return NO_ERROR;
}

int io_delete_membership()
{
    return NO_ERROR;
}

int io_get_id()
{
    return NO_ERROR;
}

/*
 * stdin_num_getter(const char*)
 * 
 * Get integer input, and check for good input.
 * 
 * Args:
 *      const char *question -> Text to be displayed before
 *      getting input
 * Returns:
 *      int -> number input
 */

static int stdin_num_getter(const char *question)
{
    int input_num = -1;
    int num = 0;
    char *output = calloc(BUFF_LEN, sizeof(char));
    int index = 0;

    printf("%s:\r\n", question);
    while (1) {
        num = fgetc(stdin);
        if (num == EOF || num == '\n' || num == '\r') {
            output[index] = '\0';
            break;
        }

        output[index] = num;
        num -= '0';
        output[index + 1] = '\0';
        if (num <= 9 && num >= 0) {
            if (input_num == -1)
                input_num = num;
            else
                input_num = (10 * input_num) + num;
        } else {
            input_num = -1;
            for (int i = 0; i < BUFF_LEN; i++) {
                output[i] = ' ';
            }
            output[BUFF_LEN - 1] = '\0';
            printf("\r%s\r", output);
            index = -1;
        }
        index++; 
        printf("\r%s", output);
    }
    fflush(stdout);
    return input_num;
}

int main()
{
    if (DEBUG) {
        io_main_show();
        return NO_ERROR;
    }
}