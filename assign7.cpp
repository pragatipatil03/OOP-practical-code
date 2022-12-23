#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

class state
{
    public:
    void insert()
    {
	typedef map<string,int> mapType;
	mapType populationMap;
	
	populationMap["Maharashtra"]= 125;
	populationMap["Uttar Pradesh"]= 225;
	populationMap["Bihar"]= 120; 
	populationMap["West Bengal"]= 100; 
	populationMap["Madhya Pradesh"]= 90; 
	populationMap["Tamil Nadu"]= 80; 
	populationMap["Rajasthan"]= 78;
	populationMap["Andhra Pradesh"]= 53;
	populationMap["Odisha"]= 47;
	populationMap["Kerala"]= 38;
	populationMap["Telangana"]= 37;
	populationMap["Assam"]= 35;
	populationMap["Jharkhand"]= 38;
	populationMap["Karnataka"]= 68;
	
	mapType::iterator iter;
	 
	cout << "Total state of India with Size of populationMap: " << populationMap.size() << '\n';
	
	for (iter = populationMap.begin(); iter != populationMap.end(); ++iter) 
	{
	 cout << iter->first <<":" << iter->second << " million\n";
	}
	
	char c;
	do
	{
		string state;
		cout<<"\nEnter that state you want to know the population of: ";
		cin>>state;
		iter = populationMap.find(state);
		if( iter != populationMap.end() ) 
		    cout << state <<"'s populations is "
		        << iter->second << " million\n";
		else
		    cout << "State is not in populationMap" << '\n';
		    
		cout<<"Do you wish to continue?(y/n):";
		cin>>c;
	}while(c=='y'||c=='Y');
	 
	populationMap.clear();
    }

};
int main()
{
    state s1;
    s1.insert();
    return 0;
}
