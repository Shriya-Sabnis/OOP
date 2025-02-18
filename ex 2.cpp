//ex 2
#include<iostream>
#include<string>
using namespace std;
class City
{
	public:
		int population;
		string city_name;
		
		void getdata()
		{
			cout<<"Enter the name of the city";
			getline(cin,city_name);
			cout<<"Enter the population of the city";
			cin>>population;
			cin.ignore();
		}
		int comp(City arr[],int size)
		{
			int max = 0;
			for (int i=0;i<5;i++)
			{
				if(arr[i].population>max)
				max = arr[i].population;
			}
			return max;
		}
	
		void display_data(string cityName)
		 {
        cout << "The city with the highest population is: " << cityName << endl;
    }
};
int main()
{
	City C1;
	City arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i].getdata();
	}
    int n = C1.comp( arr,5);
    C1.display_data(arr[n].city_name);
	return 0;
}
