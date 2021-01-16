#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str_array[]={"Nahid", "Jahid","Sabbir","Sharif","Hridoy","Shanta"};
    int n = sizeof(str_array)/ sizeof(str_array[0]);
    cout<<"\nn= "<<n<<"\n";
    string test="Nahid";
    int i;
    //Input From Users For Searching
    //cout<<"\nEnter a name to search: ";
    //cin>>test;
    for(i=0; i<n; i++)
    {
        if(str_array[i]==test)
        {
        cout<<"\nThe element found in the "<<i+1<<" number position in the array."<<endl;
            break;
        }
    }

        if(str_array[i]!=test)
        {
            cout<<"\nSorry! The element is not found in the array.\n"<<endl;
        }
    return 0;
}
