/*COUNTY LIBRARY MANAGEMENT SYSTEM
BY MAGDALINE LUMBASI
FEBRUARY 2022
MIT LICENCE
C89 COMPILER
*/


#include <stdio.h>
#include <stdlib.h>

int menu ()
{
    int action;
    printf("select an action below\n");
    printf("1.add new patron\n");
    printf("2.view all patrons\n");
    printf("3.Add new books\n");
    printf("4.view all books\n");
    printf("your action\n");
    scanf("%d",action);
    return action;


}
int main()
{
    printf("county library management system!\n");
    printf("WELCOME MAGDA\n");
    printf("you selected action %d",menu ());
    return 0;
}
