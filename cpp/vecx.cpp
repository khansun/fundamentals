#include<iostream>
#include<vector>

using namespace std;

 int main() {
	 vector<int> arrow;
	 arrow.push_back(2);
	 arrow.push_back(4);
	 arrow.push_back(5);
	 cout << "Vector: ";
	 for (unsigned int i = 0; i < arrow.size(); i++) {
		 cout << arrow[i] << " ";
	 }
	 cout << endl;
		 return 0;
 }
