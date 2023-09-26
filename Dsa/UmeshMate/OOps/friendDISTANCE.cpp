#include<iostream>
using namespace std;
class DB;
class DM
{
    int meter,centimeter;
    public:
        void accept()
        {
            cout<<"\n\n Enter meter and centimeter: ";
            cin>>meter>>centimeter;
        }

        void display()
        {
           cout<<"\n\n Meter: "<<meter;
           cout<<"\n Centimeter: "<<centimeter;
        }

        friend void add(DB d1,DM d2);
};

class DB
{
    int feet,inches;
    public:
        void accept()
        {
            cout<<"\n\n Enter feet and inches: ";
            cin>>feet>>inches;
        }

        void display()
        {
           cout<<"\n\n Feet: "<<feet;
           cout<<"\n Inches: "<<inches;
        }

        friend void add(DB d1,DM d2);
};

void add(DB d1,DM d2)
{
    DM d;
    int c=(d2.meter*100+d2.centimeter+d1.feet*30.48+d1.inches*2.54);
    if(c>=100)
    {
        d.meter=c/100;
        d.centimeter=c%100;
    }
    else
    {
        d.meter=0;
        d.centimeter=c;
    }
    d.display();
}

int main()
{
    DB d1;
    DM d2;

    d1.accept();
    d2.accept();

    d1.display();
    d2.display();

    cout<<"\n\n Addition of Meter-Centimeter";
    add(d1,d2);

    return 0;
}
/*
Create two classes DM and DB which store the values of distance.
DM stores distance in meters and centimeters. 
DB stores distances in feet and inches. 
Write a program that can read values for the class object and add one object of DM with another object of DB. 
Use a friend function to carry out the addition operation and this function will display answer in meter and centimeters.
*/

// #include<iostream>
// using namespace std;

// class DM;
// class DB
// {
// 	float f,inch;
// public:
// 	DB(){}
// 	DB(float a,float b)
// 	{
// 		f=a;
// 		inch=b;
// 	}
// 	void putdata()
// 	{
// 		cout<<"\nFEET:"<<f<<", INCH:"<<inch;
// 	}

// 	float getf()
// 	{
// 		return f;
// 	}

// 	float getInch()
// 	{
// 		return inch;
// 	}
// };

// class DM
// {
// 	float m,cm;
// public:
// 	DM(){}

// 	DM(float a,float b)
// 	{
// 		m=a;
// 		cm=b;
// 	}
// 	void putdata()
// 	{
// 		cout<<"\nM="<<m<<", CM="<<cm<<endl;
// 	}
// 	friend DM operator+(DM &t1,DB &t2)
// 	{
// 		DM t3;
// 		DM temp = t2;

// 		t3.m = t1.m + temp.m;
// 		t3.cm = t1.cm + temp.cm;

// 		return t3;
// 	}

// 	DM(DB & t1)
// 	{
// 		float t=t1.getf()*30;
// 		t+=t1.getInch()*30/12;
// 		m=t/100;
// 		cm=(int)t%100;
// 	}
// };


// int main()
// {
// 	DM o1(12,10);
// 	DB o2(5,10);

// 	DM o3 = o1 + o2;

// 	o3.putdata();

	
// 	return 0;
// }
