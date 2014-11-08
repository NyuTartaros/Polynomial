/*      Shell Design
 * -def poly_name char*  //to setup a polynomial
 * -set poly_name char*  //reset a polynomial
 * -print poly_name //Print a polynomial to OUTPUT
 * -cal (four-opera expression) //input the four-operation expression of polynomials(analyse of four-opera expression)
 * -value poly_name x0 // calculate the value of the polynomial named poly_name at x0
 * -exit //EXIT
 */
#include <iostream>
#include <cmemory>
#include <stdio.h>
#include "polynomial.h"
#include "PolyOpera.h"
#include "DataStruct.h"
#include "four-operation expression analyse.h"

using namespace std;

char ins[10];
char polyname, * exp;
double x0;
fraction p0;
polynomial* p;
extern PolyList_Class polylist;

int main()
{
//initialization
    memset(ins,'\0',10*sizeof(char));
    polyname=0;
//shell
    while(ins!="-exit")
    {
        scanf("%s", ins);
        switch(ins)
        {
            case "-def":
                exp=new char[100];
                memset(exp, '\0', 100*sizeof(char));
                scanf("%c %s", &polyname, exp);
                polylist.add(polyname, exp);
                cout<<polyname<<':'<<endl;
                polylist.ppoint[point].p->print();
                delete exp;
                break;
            case "-set":
                exp=new char[100];
                memset(exp, '\0', 100*sizeof(char));
                scanf("%c %s", &polyname, exp);
                p=polylist.sear(polyname);
                p.setp(exp);
                cout<<polyname<<':'<<endl;
                p.print();
                delete exp;
                break;
            case "-print":
                scanf("%c", polyname);
                p=polylist.sear(polyname);
                cout<<polyname<<':'<<endl;
                p.print():
                break;
            case "-cal":
                exp=new char[100];
                memset(exp, '\0', 100*sizeof(char));
                scanf("%s", exp);
                p=new polynomial;
                *p=analyse(exp);
                cout<<"The Result is:"<<endl;
                p.print();
                break;
            case "-value":
                scanf("%c %lf", polyname, x0);
                p=polylist.sear(polyname);
                p0=p.value(x0);
                cout<<p0.n;
                if(p0.d!=1)
                    cout<<'/'<<p0.d<<endl;
            default:cout<<"Instruction Error!";break;
        }
    }
//EXIT
    cout<<"Program shutting down...";
    return 0;
}
