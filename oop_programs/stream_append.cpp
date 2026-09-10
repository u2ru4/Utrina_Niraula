/*a stream is a flow of data between a program and an input/output device.
in c++, stream are used to perform input and output operations.
.input stream: data flows from an input device(keyboard,file)to the program.
.output stream:data flows from the program to an output device(screen,file).
examples:
cin->input stream
cout->output stream
fstream->input file stream(reading from a file)
ofstream->output file stream(writing to a file)
fstream->input and output file stream(reading and writing)*/
//PROGRAM TO APPEND NEW DATA TO AN EXISTING TEXT FILE
#include<iostream>
#include<fstream>//allows the program to perform file handling operations.
using namespace std;
int main()
{
    ofstream file;//creates an object name file of type ofstream
    //ofstream stands for output file stream.
    //it is only for writing data to a file
    file.open("data.txt",ios::app);
    //ios::app mean append mode new data is added at the end of the file
    //existing contents are not erased
    if(!file)//checks whether the file was opened succesfully
    //!file means "if the file counldnot be opened"
    {
        cout<<"error opening file!"<<endl;
        return 1;
    }
    string text;//declares a string variable named text.
    //it will store the text entered by the user.
    cout<<"enter text to append: ";
    getline(cin,text);//reads the entire line entered by the user
    //stores it in the variable text.
    //unlike cin,getline() can read spaces
    file<<text<<endl;
    cout<<"data appended successfully."<<endl;
    file.close();
    return 0;
}