#include <iostream>
#include <cmemory>
#include "DataStruct.h"

class PolyList_Class
{
public:
    PolyList_Class()
    {
        memset(ppoint, '\0', 10*sizeof(PolyPointer);
        point=-1;
    }
    void add(char polyname,  char* exp)
    {
        point++;
        ppoint[point].name=polyname;
        ppoint[point].p= new polynomial;
        ppoint[point].p->setp(exp);
    }
    polynomial* sear(char polyname)
    {
        int i;
        if(point>=0)
        {
            for(i=0; i<=point; i++)
                if(ppoint[i].name == polyname)
                    return ppoint[i].p;
            cout<<"ERROR! There is no such a polynomial!"<<endl;
        }
        else
            cout<<"ERROR! There is no polynomials!"<<endl,return -1;
    }
private:
    struct PolyPointer
    {
        char name;
        polynomial* p;
    };
    PolyPointer ppoint[10];
    int point;
};

#define 1 IN
#define 0 OUT
class polynomial
{
public:
    polynomial(int a=20) //By default, suppose the max time is 20
    {
        poly= new int[a];
        memset(poly,'\0', a*sizeof(int));
    }

    void setp(char* s) /*By NOW, the function only support the case of coefficients&time less than 10 and not less than 0 */
    {
        int i;
        int state=OUT;//point out whether cursor if in a term or not
        while(s[i]!='\0')
        {
            if(s[i]=='+')
            {
                state=OUT;
                continue;
            }
            if(state==OUT)
            {
                if('1'<=s[i] && s[i]<='9')
                {
                    state=IN;
                    if( s[i+1]=='\0' || s[i+1]=='+')
                        poly[0]+=s[i];
                    else if( s[i+1]=='x' && (s[i+2]=='\0' || s[i+2]=='+') )
                        poly[1]+=s[i];
                    else if( s[i+1]=='x' && ('0'<=s[i+2] && s[i+2]<='9') )
                        poly[s[i+2]-48]+=s[i];
                    else
                        cout<<"INPUT ERROR!"<<endl;
                }
                else if(s[i]=='x')
                {
                    state=IN;
                    if(s[i+1]=='^' && '0'<=s[i+2] && s[i+2]<='9')
                        poly[s[i+2]-48]++;
                    else if(s[i+1]=='\0' || s[i+1]=='+')
                        poly[1]++;
                    else
                        cout<<"INPUT ERROR"<<endl;
                }
                else
                    cout<<"INPUT ERROR"<<endl;
            }
            i++;
        }
    }//set the polynomial from INPUT

    void print()
    {
        int i;
        if(n>0)
            for(i=n;i>0;i--)
                cout<<poly[i]<<"x^"<<i<<'+';
        cout<<poly[0]<<endl;
    }//print the polynamial to OUTPUT

    int* show()
    {
        return poly;
    }//diliver the polynomial the another procedure

    fraction value(double x0)
    {

    }//calculate the value of the poly at an exact point

private:
    int* poly;
    int n;//time
};
