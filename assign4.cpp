
#include<iostream>
using namespace std;
int n;

template<class T>
class mysort
{
	public :
	T a[20];
		void sort();
		void read();
};
template<class T>
void mysort <T>::read()
{
	cout<<"enter the size of array: "<<endl;
    cin>>n;
    cout<<"enter the element of array; "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }		
}
	
template<class T>
void mysort <T>:: sort()
{
	T temp;
	for(int i=0;i<(n-1);i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			if(a[j] < a[i])	
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;		
			}
				
		}	
		for(int  k=0;k<n;k++)								
		{
			cout<<" "<<a[k];
		}
		cout<<endl;	
	}
		
}
int main()
{
	int ch;
	do
	{
		cout<<"\n Enter your choice " ;
		cout<<"\n 1. For integer array  " ;
		cout<<"\n 2. For float array " ;
		
		cin>>ch;
		switch(ch)
		{
			case 1 :	
				mysort <int>s1;	
				s1.read();
				cout<<"sorted array is: "<<endl;
				s1.sort();
				break;
			case 2 :	
			    mysort<float>s2;
			    s2.read();
			    cout<<"sorted array is: "<<endl;
				s2.sort();
				break;
			default :
				cout<<" Please, Enter the valid option "<<endl;	
		}
	}while(ch!=3);
	return 0;
}
