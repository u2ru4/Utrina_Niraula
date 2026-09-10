/*the standard template library(stl) is a collection of pre defined 
template classes and functions provided by c++
to perform common programming tasks efficiently.
stl provides ready-made data structures and algorithms,
reducing development time and improve code quality
components of stl;
a)containers: objects used to store data. ex:vector,list,deque,set,map,stack
b)algorithms:performs operations on container data.ex:sort(),find(),count()
c)iterators:objects that point to elements in a container and are used to traverse containers
ex:begin(),end()
d)function objects:objects that behave like fuction.ex:greater<int>().
a list is an stl container that stores elements in a doubly linked list.
features of list:
.dynamic size
.fast insertion and deletion
.sequential accwss only
.no random access using index*/
//examplle of list container
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>numbers;//list<int> is an stl container
    //creates an empty list named numbers
    numbers.push_back(10);
    //it means insert 10 at the end
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(5);
    //insert at the begining
    cout<<"list elements: ";
    list<int>::iterator it;//creates an iterator for list of integers
    //iterator is like a pointer, point to elements inside the list
    for(it = numbers.begin(); it != numbers.end(); ++it)
    //begin() means go to the first element
    //continue the loop untill u reach the end
    //++it means move iterator forward
    {
        cout<<*it<<"";
        //it is an iterator, give the value stored where it points
    }
    cout<<endl;
    numbers.pop_front();
    //remove the first element
    cout<<"after deletion: ";
    for(it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout<<*it<<"";
    }
    return 0;
}
