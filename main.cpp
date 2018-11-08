#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
int rightOrder(int &, int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  rightOrder(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
int rightOrder(int &r, int &g, int &b)
{
        int temp;

        if(r >= g)
        {
                if(b >= g)
                {
                        if(r >= b)
                        {
                                temp = b;
                                b = g;
                                g = temp;
                        }
                        else
                        {
                                temp = r;
                                r = b;
                                b = g;
                                g = temp;
                        }
                }
        }
        else
        {
                if(r >= b)
                {
                        temp = r;
                        r = g;
                        g = temp;
                }
                else
                {
                        if(g >= b)
                        {
                                temp = r;
                                r = g;
                                g = b;
                                b = temp;
                        }
                        else
                        {
                                temp = r;
                                r = b;
                                b = temp;
                        }
                }
        }

}
