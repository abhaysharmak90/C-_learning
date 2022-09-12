#include "ITEMS.h"
#include "truckload.h"
#include "Functions.h"

#include <iostream>
#include <stdlib.h>

int main()
{
    size_t choice{0};
    std::vector<truckload *> loads;
    do
    {
        /* code */
        // truckload load1;
        // load1.create_T_load();
        // load1.display_T_load();
        std::cout << "What task do u wanna perform:\n"
                  << "1.Create Load.\n"
                  << "2.Display Load.\n"
                  << "3.Add Items.\n"
                  << "4.Remove Items.\n"
                  << "5.Clear screen.\n"
                  << "0.Exit.\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            Create_Load(loads);
            break;
        case 2:
            Display_Load(loads);
            break;
        case 3:
            Add_Items(loads);
            break;
        case 4:
            Remove_Items(loads);
            break;
        case 5:
            system("clear");
            break;

        default:
            std::cout << "!!! Wrong Input,Enter a valid choice !!!\n";
            break;
        }

    } while (choice != 0);
}