#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    float x, y;
    int ch;
    float result;

public:
    void getin(void);
    void calculate(void);
    void show(void);
};
void SimpleCalculator ::getin()
{
    cout << "input two integers on which you want to apply simple airthmetic operation" << endl;
    cin >> x >> y;
    
}
void SimpleCalculator ::calculate()
{
    cout << "input 1 to add" << endl
         << "input 2 to dubstract " << endl
         << "3 to multiply" << endl << 
        "4 to devide" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        result = x + y;
        break;
    case 2:
        result = x - y;
        break;
    case 3:
        result = x * y;
        break;
    case 4:
        result = float(x / y);
        break;
    default:
        cout << "invalid input in simplecalculator" << endl;
        result=0;
        break;
    }
}
void SimpleCalculator ::show()
{
    cout << "result of the operation on " << x << " and " << y << " is " << result << endl;
}
class scientificCalculator
{
protected:
    int a, b, k;
    float result1, result2;

public:
    void getdata(void);
    void cals(void);
    void shows(void)
    {
         cout << "result of the operation on" << a << " and " << b << " is " << result1 << " and" << result2 << endl;
    }
};
void scientificCalculator ::getdata()
{
    cout << "input two integers on which you want to apply simple airthmetic operation" << endl;
    cin >> a >> b;
    
}
void scientificCalculator ::cals()
{
    cout << "input 1 to find log" << endl
         << "input 2 to find exponential " << endl
         << "3 to find value of a^b and b^a" << endl
         << "4 to find squre root" << endl;
    cin >> k;
    switch (k)
    {
    case 1:
         result1 = log(a);
        result2 = log(b);
        break;
    case 2:
        result1 = exp(a);
        result2 = exp(b);
        break;
    case 3:
        result1 = pow(a , b);
        result2 = pow(b , a);
        break;
    case 4:
        result1 = sqrt(a);
        result2 = sqrt(b);
        break;
    default:
        cout << "invalid input in scientificcalculator" << endl;
        result1=0;
        result2=0;
        break;
    }
}
class HybrideCalculator : public SimpleCalculator, public scientificCalculator
{
public:
    void display()
    {
        show();
        shows();
    }
};
int main()
{
    HybrideCalculator o;
    o.getin();
    o.getdata();
    o.calculate();
    o.cals();
    o.display();
    return 0;
}
