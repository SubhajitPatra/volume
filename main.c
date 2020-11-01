#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
void print_menu(){
printf("\n 1.Sphere\n");
printf(" 2.Cube\n");
printf(" 3.Cuboid\n");
}
int take_input()
{
    int input;
    printf("Enter the input\n");
    scanf("%d",&input);
    return input;
}
void print_sphere()
{
    int radius;
    printf("Enter the radius length\n");
    scanf("%d",&radius);
    printf("The volume is %d",4/3*22/7*radius*radius*radius);
}
void print_cube()
{
    int side;
    printf("Enter the side\n");
    scanf("%d",&side);
    printf("The volume is %d",side*side*side);
}
void print_cuboid()
{
    int length,breadth,height;
    printf("Enter length,breadth and height simultaneously\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    scanf("%d",&height);
    printf("The volume is %d\n",length*breadth*height);
}
int main()
{
    int user_input;
    while(1)
    {

        print_menu();
        user_input=take_input();
        switch(user_input)
        {
    case 1:
        print_sphere();
        break;
    case 2:
        print_cube();
        break;
    case 3:
        print_cuboid();
        break;
    default:
        printf("\n exiting...........");
        return 0;


        }
    }
    return 1;
}
