//a)	WAP to declare a class 'city' having data members as name and population. Accept this data for 5 cities and display name of city having highest population
#include<iostream>
#include<string>
class City
{
	public:

		int population;
		string name;
		
		
		void getdata()
		{
			cout<<"Enter the name of the city";
			getline(cin,name);
			cout<<"Enter the population of the city";
			cin>>population;
			cin.ignore();
		}
		
		int calc(*a,int size)
		{
			int  max [0];
			for(int i=0;i<size:i++)
			{
				if (a[i]>max)
				max==a[i];
			}
			return max;
		}
		
		void displaydata()
		{
			cout<<"The city with the higest population is: \n"<<name;
		}
};

int main()
{
	City city[5];
	for(int i=0;i<5;i++)
	{
		city[i].getdata();
	}
	
	int n=city[1].calc(city.population,5);
	city[n]displaydata();
	return 0;
	
}
