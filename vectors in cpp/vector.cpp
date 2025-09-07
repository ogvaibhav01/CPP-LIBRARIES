#include<iostream>
#include<vector>
//note for myself it is vector not vectors in including phase
using namespace std;
int main(){
    //practising vectors in cpp
    vector <int> nums = {1,2,3,4};
        /*
        int size = nums.size();
        for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        cout << num << endl;
        }
        */
        for (int num : nums) { //instead of that old method do this instead { for-each loop }
        //The colon : means “in”—like Python’s for x in list: or JavaScript’s for (let x of array)
        cout << num << endl;
        }
    vector<string> spells = {"Fireball", "Ice Lance", "Shadow Bolt"};
        for (string spell : spells) {
        cout << "Casting " << spell << "!" << endl;
        }
        cout << endl << spells.front() << endl;
        cout << endl << spells.back() <<endl;
        cout << endl << spells.at(2);
        //cout << endl << spells.push_back("Thunder bolt"); it does not work because push_back() does not return anything its return type is void
        spells.push_back("thunderbolt");
        cout << endl << spells.back() << endl;
        cout<<"this is  the size of the vector spells: "<<spells.size()<<endl;
        cout<<"this is  the capacity of the vector spells: "<<spells.capacity()<<endl;
}