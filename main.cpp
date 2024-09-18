// Name: Mojiboye Emmanuel Oluwole
// Matric Number: 21/52ha090
// Department: Computer Science
// Course code: CSC212

/*
#include <iostream>

using namespace std;

// Function to compute factorial using a while loop
int factorial(int n)
{
    int result = 1;
    while (n > 1)
    {
        result *= n;
        n--;
    }
    return result;
}

int main()
{
    // Initializing the needed variable
    int n;

    cout << "Welcome to My Factorial App" << endl;
    cout << " " << endl;
    cout << "Enter an integer: ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}


*/

#include<iostream>
#include<cmath>

using namespace std;


static int FibonacciMethod(int n)
{
    if(n<=1)
        return n;

    int a = 0;
    int b = 1;
    int result = 0;

    for(int i = 2; i <= n; i++)
    {
        result = a + b;
        // My loop starts counting from the 3rd element(when i = 2) because I have initiated the values for the first 2 elements
        // Every element less than or equal to n, we keep updating result and value for b after we have successfully added it to result

        a = b;
        b = result;
    }
    return result;
}


double sum(double& x, double& y)
    {
        double sum = x+y;
         x = 10;
         y = 20;
         // With the two lines ofcode, we assigned values for x and y. Inside our function.
         // so computer will not care whether we have a values for x and y(that we might have collected from our user),
         // It will only and always use those two values that we set inside our function(Sum).
         return sum;
    }


    static float PllgArea(float side, float height)
    {
        // Area of a parallelogram is: 0.5 * Side * Height; For Rhombus specifically
        return (0.5 * side * height );
    }

    static float PllgPeri(float side)
    {
        return (4 * side);
    }




int main()
{

    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

    // The Discrimnant
    float descr = 0;
    cin >> a >> b >> c;

    descr = b * b -4* a * c;

    if(descr == 0)
    {
        x1 = -b / (2*a);
        cout << "x1 = x2 = "<<x1;
    }

    if(descr > 0)
    {
        x1 = (-b + sqrt(descr))/(2 * a);
        x2 = (-b - sqrt(descr))/(2 * a);
        cout <<"x1 = "<<x1;
        cout <<"x2 = "<<x2;

    }

/*
    float plgSide = 6.5;
   float plgHieght = 5.5;

   float areaVal = PllgArea(plgSide, plgHieght);
   float periVal = PllgPeri(plgSide);

   cout<<"area of Parallelogram with side "<<plgSide<<" And Height"<<plgHieght<<" is "<<areaVal;
   cout<<" \tb ";
   cout<<"perimeter of Parallelogram with side "<<plgSide<<" And Height"<<plgHieght<<" is "<<periVal;


     int num = 10;
    int finalAnswer = FibonacciMethod(num);

    cout<< "Sum is "<<finalAnswer;


    // Creating a 2 Dimensional array
    int a, b[2][3] = {{6, 5, 4}, {3, 2, 1}};
    a = b[0][2] - b[1][1];
    cout << a;

    double a = 35.9, b = 34.1;
    cout<<"Values of a and b before the call"<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    double x = sum(a, b); // When we call a fu
    cout<<"Values of a and b after the call"<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl<<"Sum = "<<x;
   return 0;


    // Working with pointers
    int a, b, *c;
    a = 11; b = 2;
    b+= ++a;
    c = &b;
    cout<<c;
    cout<<a;
    cout<<b;

    int a[5] = {1, 2, 3, 4,5};
    int *b;
    b = &a[1];
    cout<<b;*/
}
