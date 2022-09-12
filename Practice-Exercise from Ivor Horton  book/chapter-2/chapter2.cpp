#include <iostream>
#include <cmath>

double tometer(int ft, int in)
{
    in += (ft * 12);
    double temp_cm{};
    temp_cm = in * 2.54;

    return (temp_cm / 100);
}

void circlearea()
{
    int radius{};
    int area{};
    std::cout << "Enter the radius of the circle(in cm): ";
    std::cin >> radius;
    area = 3.14 * radius * radius;
    std::cout << "The area of the cirlce with radius " << radius << " is " << area << " cmsq\n";
}

void BMI()
{
    int weight_in_kg{};
    int feet{}, inches{};
    double meter{}, BMI{};

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight_in_kg;
    std::cout << "Enter your height in feet-inches: ";
    std::cin >> feet >> inches;
    meter = tometer(feet, inches);
    BMI = ((static_cast<double>(weight_in_kg)) / (meter * meter));
    std::cout << "Your BMI is: " << round(BMI) << "\n";
}

void heightofatree()
{
    int observer_s_height{};
    int distance_from_tree{};
    int angle_recorded{};
    int tree_height;
    std::cout << "Enter the height,distance and angle:";
    std::cin >> observer_s_height >> distance_from_tree >> angle_recorded;
    tree_height = observer_s_height + (distance_from_tree * tan(angle_recorded));
    std::cout << "The height of the tree is: " << tree_height << "\n";
}

void inchestofeet_inches()
{
    int no_of_inches{};
    int no_of_feets{};
    std::cout << "Enter an integer value for no_of_inches: ";
    std::cin >> no_of_inches;
    no_of_feets = no_of_inches / 12;
    no_of_inches = no_of_inches % 12;
    std::cout << "The mesurements after conversion are: " << no_of_feets << " Feets " << no_of_inches << " Inches\n";
}

void BOXonshelf()
{
    const int inches_per_foot = 12;

    long shelf_length{}, shelf_depth{}, box_side;

    std::cout << "Enter length of the shelf: ";
    std::cin >> shelf_length;
    std::cout << "Enter depth of the shelf: ";
    std::cin >> shelf_depth;
    std::cout << "Enter box side size: ";
    std::cin >> box_side;

    long no_of_BOX{};
    no_of_BOX = static_cast<long>(((inches_per_foot * shelf_length) / box_side) * ((inches_per_foot * shelf_depth) / box_side));
    std::cout << "\nthe no of BOX that can fit on shelf are: " << no_of_BOX << "\n";
}

int main()
{
    std::cout << "Enter your choice(1-5)\n"
              << std::endl;
    std::cout << "1.No of BOX on Shelf" << std::endl;
    std::cout << "2.Calculate Your BMI" << std::endl;
    std::cout << "3.Inches to Feet-Inches" << std::endl;
    std::cout << "4.Height of a Tree" << std::endl;
    std::cout << "5.Area of a Circle\n"
              << std::endl;
    int ch;
    std::cin >> ch;
    std::cout << std::endl;
    switch (ch)
    {
    case 1:
        BOXonshelf();
        break;
    case 2:
        BMI();
        break;
    case 3:
        inchestofeet_inches();
        break;
    case 4:
        heightofatree();
        break;
    case 5:
        circlearea();
        break;
    default:
        std::cout << "Wrong choice program terminated...\n";
        break;
    }
}