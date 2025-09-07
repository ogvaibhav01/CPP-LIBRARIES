#include<iostream>
#include<list>
//note for myself it is list not lists in including phase
using namespace std;
int main(){
    list <int> house_no = {101,202,303,404,505,606,707};
    for(int num : house_no){
        cout<<num<<endl; //simple and effective way
    }
    //cout<<house_no.at(2) there is a con in lists that u cant access element randomly
    cout<<endl<<house_no.back()<<endl;
    house_no.push_back(808);//adds 808 to the back
    cout<<endl<<house_no.back()<<endl;
    house_no.push_front(000);//adds 0 to front
    cout<<endl<<house_no.front()<<endl;
    house_no.pop_back();//deletes the backmost item
    cout<<endl<<house_no.back()<<endl;
}