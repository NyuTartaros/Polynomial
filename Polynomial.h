#ifndef POLYNOMIAL_H_INCLUDED
#define POLYNOMIAL_H_INCLUDED

class PolyList_Class
{
public:
    void add(char polyname,  char* exp);
    polynomial* sear(char polyname);
private:
    struct PolyPointer
    {
        char name;
        polynomial* p;
    };
    PolyPointer ppoint[10];
    int point;
};

class polynomial
{
public:
    polynomial(int a=20); //By default, suppose the max time is 20
    void setp(char*);  //set the polynomial from INPUT
        /*By NOW, the function only support the case of coefficients&time less than 10 and not less than 0 */
    void print(); //print the polynamial to OUTPUT
    int* show(); //diliver the polynomial the another procedure
    fraction value(double); //calculate the value of the poly at an exact point
private:
    int* poly;
    int n; //time
};

#endif // POLYNOMIAL_H_INCLUDED
