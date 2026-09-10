/*a file pointer is a pointer that indicates the current position 
in a flie where reading or writing operation
will take place.
there are two types of file pointers:
1.get pointer(g)-used for reading from a file
2.put pointer(p)-used for writing to a file.
functions are:
seekg()-moves the get pointer (input pointer) to a 
specified location in a file.
syntax:
file.seekg(offset,reference_position);.
seekp()-moves the put pointer (output pointer)to a 
specified location.Syntax:
file.seekp(offset,reference_position);
tellg()-returns the current position of the get pointer.
syntax:
position=fin.tellg();
tellp()-returns the current position of the put pointer.
syntax:
position=fout.tellp();*/
#include<iostream>
#include<fstream>//used for file handling
using namespace std;
int main()
{
    fstream file;
    //creats a string file object name file
    file.open("sample.txt", ios::out);//opens the file sample.txt in output mode
    //if file doesnot exist it will be created
    file<<"hello world";//write hello world into the file
    cout<<"current put pointer position:"
        <<file.tellp()<<endl;//tellp()returns the current position of the put pointer(write pointer)
        //after writing hello world 11 characters  the pointer is at position 11
    file.seekp(6,ios::beg);//seekp() moves the put pointer.
    //6 means move to position 6
    //ios::beg means counting starts from the begining of the file
    file<<"c++";
    //write c++ from position 6.it overwrites existing characters
    file.close();
    file.open("sample.txt",ios::in);
    //opens the files in input mode(ios::in)for reading
    cout<<"current get pointer position:"
        <<file.tellg()<<endl;//tellg() returns the current position of the get pointer(read pointer)
        //when the file is opened for reading,the pointer starts at position 0.
    file.seekg(6,ios::beg);//seekgg()moves the get pointer
    //moves it to position 6 from the begining
    char ch;//declares a character variable ch
    file.get(ch);//reads one character from the current position (position 6)
    //the character at position 6 in 'c',stores it in ch
        cout<<"character at position 6:"
        <<ch<<endl;
    file.close();
    return 0;
}