#include <iostream>
#include <list>

using namespace std;

const int WELLINGTON = 13;
const int MAX_REGIONS = 100;

void printList(list<int> thislist) {
	list<int>::iterator iter;
  	for (iter = thislist.begin(); iter != thislist.end(); ++iter)
    	cout << ' ' << *iter;
	cout << endl;
}

int main() {

	int regions;
	int skip;
	int regions_on;
	bool searching;

	list<int> power_on;
	list<int> power_on_original;

	//get regions and insert them all into a list
	cin >> regions;

	while(regions > 0) {
		power_on_original.clear();
		for (int i = 1; i <= regions; ++i)  // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
		{
			power_on_original.push_back(i);
		}

		skip = 1;
		searching = true;
		power_on = power_on_original;
		regions_on = regions;	

		//start at 1 and search for lowest skip.
		while(searching) {
			//delete regions in order until only 2 left
			while(regions_on > 2) {
				power_on.pop_front();
				regions_on--;
				for (int i = 1; i < skip; ++i)
				{
					power_on.push_back(power_on.front());
					power_on.pop_front();
				}
				// printList(power_on);
			}
			//delete second to last region
			power_on.pop_front();
			if(power_on.front() == WELLINGTON) { //check if it's our goal region
				searching = false;
				cout << skip << endl;
			}
			else { //reset and increment
				power_on = power_on_original;
				regions_on = regions;	
				skip++;	
			}

		}
		//get next problem
		cin >> regions;
	}
	// printList(power_on);
	
	return 0;
}