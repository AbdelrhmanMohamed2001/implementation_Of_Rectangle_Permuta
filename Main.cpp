#include <iostream>
#include<string>
#include <set>

using namespace std;                             //problem 5....

void RecPermute(string soFar, string rest)
{
    set<string> Array;
    int SIZE=Array.size();      //array size
    if (rest == "")
        cout <<"SoFar = "<< soFar << endl; // Print the word
    else

        for (int i = 0; i < rest.length(); i++)
            {
            string next = soFar + rest[i];
            string remaining = rest.substr(0, i)+ rest.substr(i+1);
            Array.insert(next);
            if(Array.size()>SIZE)
            RecPermute(next, remaining);
            }

}



void ListPermutations(string s) {

    RecPermute("", s);

}



int main()

{
    string s;
    cout<<"Enter word"<<endl;
    cin>>s;
   ListPermutations(s);


	return 0;

}
