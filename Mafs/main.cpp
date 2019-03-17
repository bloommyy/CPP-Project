#include <iostream>
#include <stdlib.h>

using namespace std;

int mMenu()
{
    int choiceInt;
    cout<<"Which figure would you want to know about?"<<endl<<endl;
    cout<<"1) Triangle"<<endl;
    cout<<"2) Square"<<endl;
    cout<<"3) Rectangle"<<endl;
    cout<<"4) Circle"<<endl;
    cout<<"5) Rhombus"<<endl<<endl;
    do
    {
        cout<<"Pick a number from 1 to 5 depending on what you want to see : ";
        cin>>choiceInt;
    }while(choiceInt!=1 && choiceInt!=2 && choiceInt!=3 && choiceInt!=4 && choiceInt!=5);
    cout<<endl;
    return choiceInt;
}
void triangle()
{
    int lenght=1;
        cout<<endl;
        for(int i=0;i<7;i++)
        {
            for(int j=0;j<lenght;j++)
            {
                cout<<"*";
            }
            cout<<endl;
            lenght++;
        }
        cout<<endl;
        cout<<"1) Triangle inequality theorem :"<<endl<<"A + B > C"<<endl<<"B + C > A"<<endl<<"A + C > B"<<endl;
        cout<<"2) Area theorem - S = 1/2*(A*B*C)"<<endl;
        cout<<"3) Perimeter of triangle - P = A + B + C"<<endl;
        cout<<"4) Pythagorean theorem A^2+B^2=C^2"<<endl;
}

void square()
{
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"1) AB = BC = CD = AD"<<endl;
    cout<<"2) AB||CD and BC||AD"<<endl;
    cout<<"3) Perimeter of square - P = 4*a"<<endl;
    cout<<"4) Area of square - S = a^2"<<endl;
}

void rectangle()
{
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"1) AB = CD & BC = AD"<<endl;
    cout<<"2) AB||CD and BC||AD"<<endl;
    cout<<"3) Perimeter of rectangle - P = 2*a + 2*b"<<endl;
    cout<<"4) Area of rectangle - S = a*b"<<endl;
}
void circle()
{
    cout<<endl;
    cout<<"  ******"<<endl;
    cout<<" *      *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<" *      *"<<endl;
    cout<<"  ******"<<endl;
    cout<<endl;
    cout<<"1) PI = 3.141592..."<<endl;
    cout<<"2) Area of circle - S = PI*r^2"<<endl;
    cout<<"3) Diameter = 2*r"<<endl;
    cout<<"4) Circumference of circle = 2PI*r"<<endl;
}

void rhombus()
{
    cout<<endl;
    cout<<"  *"<<endl;
    cout<<" ***"<<endl;
    cout<<"*****"<<endl;
    cout<<" ***"<<endl;
    cout<<"  *"<<endl;
    cout<<endl;
    cout<<"1) AB = BC = CD = AD"<<endl;
    cout<<"2) Sides in terms of are and height - a = S / ha"<<endl;
    cout<<"3) Sides in terms of area and sine of any angle - a = sqrt(S) / sqrt(sina)"<<endl;
    cout<<"4) Sides in terms of area and inradius - a = S / 2r"<<endl;
    cout<<"5) Perimeter of a rhombus - P = 4 * a"<<endl;
    cout<<"6) Area of rhombus - S = a * ha"<<endl;
}

int main()
{
    system( "color 0A" );
    string choosen;
    do
    {
        int choice=0;
        choice=mMenu();
        if(choice==1)
        {
            triangle();
        }else if(choice==2)
        {
            square();
        }else if(choice==3)
        {
            rectangle();
        }else if(choice==4)
        {
            circle();
        }else if(choice==5)
        {
            rhombus();
        }
        do
        {
            cout<<endl<<"Would you like to see another figure?(Yes/No) ";
            cin>>choosen;
            cout<<endl;
        }while(choosen!="Yes" && choosen!="No");
    }while(choosen!="No");
    return 0;
}
