#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

         typedef struct mynode {
    char name[20];
    char gen[6];
    int age;
    struct mynode* link;
} Node;
Node* start = NULL;

    void heading();
void details();
void inter();
void india();
void receipt();

     int k, amount;
char type[60], place[30], date[20];
 int main()
{
    int a;

    heading();

    printf("\t\t\t\t1. International "
           "Tour Packages\n");
    printf("\t\t\t\t2. India Tour Packages\n");
    printf("\t\t\t\tEnter Choice: ");
    scanf("%d", &a);
    switch (a) {

    case 1:
        inter();
        break;
        case 2:
        india();
        break;

    default:
        printf("Enter Right Choice...");
        break;
    }

        details();
        receipt();
}

      void india()
{
    int a;
        system("cls");
        heading();
    strcpy(type, "India Tour Package");
    printf("\t\t\t\t1. Le Ladakh Tour Packages    "
           "6 Days 7 Nights (22880/-)\n");
    printf("\t\t\t\t2. Manali Tour Packages "
           "5 Days 4 Nights (35500/-)\n");
    printf("\t\t\t\t3. Kerala Tour Packages "
           "11 Days 10 Nights (17000/-)\n");
    printf("\t\t\t\tEnter Choice: ");
    scanf("%d", &a);
    if (a == 1) {
        strcpy(place, "Le Ladakh Tour");
        amount = 22880;
    }
    else if (a == 2) {
        strcpy(place, "Manali Tour");
        amount = 35500;
    }
    else if (a == 3) {
        strcpy(place, "Kerala Tour");
        amount = 17000;
    }
    else
        printf("Enter Correct Choice...");
}

      void inter()
{
    int a;

    system("cls");

    heading();
    strcpy(type, "International Tour Package");
    printf("\t\t\t\t1. England Tour Packages"
             "6 Days 7 Nights (28880/-)\n");
    printf("\t\t\t\t2. Canada Tour Packages "
           "5 Days 4 Nights (25500/-)\n");
    printf("\t\t\t\t3. France Tour Packages "
           "11 Days 10 Nights (567800/-)\n");
    printf("\t\t\t\t4. Dubai Tour Packages "
           "10 Days 11 Nights (56720/-)\n");
    printf("\t\t\t\tEnter Choice: ");
    scanf("%d", &a);
    if (a == 1) {
        strcpy(place, "England Tour");
        amount = 28880;
    }
    else if (a == 2) {
        strcpy(place, "Canada Tour");
        amount = 25500;
    }
    else if (a == 3) {
        strcpy(place, "France Tour");
        amount = 567800;
    }
     else if (a == 4) {
        strcpy(place, "Dubai Tour");
        amount = 56720;
    }
    else
        printf("Enter Correct Choice...");
}

      void details()
{
    int i, a;
    char val[20], gen[6];

    system("cls");
    heading();
    printf("\t\t\t\tEnter Number Of "
           "Passengers: ");
    scanf("%d", &k);
    printf("\t\t\t\tEnter Date "
           "(DD/MM/YY): ");
    fflush(stdin);
    gets(date);
    for (i = 1; i <= k; i++) {
        system("cls");
        heading();
        printf("\t\t\t\tEnter The %dth "
               "Passenger Name: ",
               i);
        fflush(stdin);
        gets(val);
        printf("\t\t\t\tEnter The %dth "
               "Passenger Gender: ",
               i);
        fflush(stdin);
        gets(gen);
        printf("\t\t\t\tEnter The %dth "
               "Passenger Age: ",
               i);
        fflush(stdin);
        scanf("%d", &a);

        add_node(val, gen, a);
    }
}

     void add_node(char lol[20],
              char der[6], int b)
{
    Node *newptr = NULL, *ptr;
    newptr = (Node*)malloc(sizeof(Node));
    strcpy(newptr->name, lol);
    strcpy(newptr->gen, der);
    newptr->age = b;
    newptr->link = NULL;
    if (start == NULL)
        start = newptr;
    else {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newptr;
    }
}

     void receipt()
{
    int i, b;
    Node* ptr = start;
    system("cls");
    heading();
    printf("\n\t\t\t\t**Take Screenshot "
           "For Further Use**\n");

    printf("\t\t\t\tType: ");
    puts(type);
    printf("\t\t\t\tPackage: ");
    puts(place);
    printf("\t\t\t\tDate: ");
    puts(date);
    b = amount * k;
    printf("\t\t\t\tTotal Amount: %d", b);
    printf("\n\t\t\t\t**Thank You For "
           "registering with us**");
}


void heading()
{
    printf("\t\t\t\t***Tourism Package "
           "Management System***\n");
    printf("\t\t\t***Vaccination Certificate "
           "Is Necessary For Travel Purpose***\n\n");
}
