#include<bits/stdc++.h>
using namespace std;

int main()
{
    //open a text file for reading
    ifstream my_file("example.txt");

    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    //store the contents of file in "line" string
    string line;

    //loop until the end of text file
    while(!my_file.eof())
    {
        //store the current line of file
        //in the "line" variable
        getline(my_file, line);

        //print the line variable
        cout<<line<<endl;
    }
    //close the file
    my_file.close();
    return 0;
}
