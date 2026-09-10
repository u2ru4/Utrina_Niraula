/*exeption hanling is a machanesim in c++ used to detect and handle 
runtime errors so that the program does not terminate abonormally.
it allows a program to continue execution by transferring 
control to an error-handling routine.key word used in exceptional handling are:
1.try:-
   the code that may generate an exception is placed inside a try block.
   try{code that mayy cause an exception}
2.throw:-
   the throw statement is used to generate an exception.
   throw exception_value;
3.catch:-
   a catch block receives and handles the exception thrown by the try block.
   catch(type variable){};
 program with multiple catch blocks
 1.division by zero.
 2.out_of_range array access*/
 #include<iostream>
 using namespace std;
 int main()
 {
    try
    {
      int a=10,b=2;
      if(b==0)//true so the next statement executes
      //if not true then it goes in catch (int index)
        throw "division by zero";
        //throw means an erroe has occured.stop normal 
        //execution, find a matching catch block.
    int arr[5];
    int index = 7;
    if(index>=5)
      throw index;
    }
    catch (const char* msg)
    {
        cout<<"exception: "<<msg<<endl;
    }
    catch (int index)
    {
        cout<<"exception:array index"
            <<index<<"is out of range."<<endl;
    }
    return 0;
    
 }