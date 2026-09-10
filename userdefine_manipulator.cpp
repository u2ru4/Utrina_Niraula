/*a user_defined manipulator is a function that takes
 and returns a stream object.A manipulator is used to
 control how the output is displayed.
syntax:
ostream& manipulatorname(ostream& out)
{
return out;
}
used as:
cout<<manipulatorname<<value;*/
#include<iostream>
#include<iomanip>//used for formatting manipulators 
//setw(),setprecision(),setfill()
using namespace std;
ostream& myformat(ostream& out)//function that creates manipulators.
/*ostream,represents an output stream,
ostream&: return a reference to an output stream,
parameter:ostream& out,
*/


{
    out<<fixed;//decimal formatting become fixed point
    out<<setprecision(2);//show 2 digits after decimal point
    out<<setw(10);//this reserves 10 spaces
    out<<setfill('*');//blanks are filled with***
    out<<right;//places the number on right
    return out;//returns the modified stream
}
int main()
{
    float num= 123.4;
    cout<<myformat<<num<<endl;//inside myformat 
    return 0;
}