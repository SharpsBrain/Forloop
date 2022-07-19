#include <iostream>

using namespace std;

int main()
{

   /* //syntax of for loop :
   // for(variable initialization;condition check;variable update)
   for(int a=1;a<=5;a++){
    cout<<a<<endl;
   }*/
    /*int num,sum;
   sum=0;
   cout<<"Enter the positive integer:";
   cin>>num;
   for(int i=1;i<=num;++i){
    sum+=i;

   }
   cout<<"sum is:"<<sum<<endl;
    */

    int i,smallest,largest,number;
    for(i=0;i<5;i++){
        cout<<"enter the number"<<i+1<<"\t";
        cin>>number;
        if(i==0){
            largest=number;
            smallest=number;
        }
        else if(number>largest){
            largest=number;

        }
        else if(number <smallest){
            smallest=number;

        }
    }
    cout<<"Largest ="<<largest<<endl;

    cout<<"Smallest="<<smallest;

    return 0;

}
//------------------------sharps brain-------------------------//
