#include<iostream>
using namespace std;
class Clothes{
	private: 
	string color,fabric;
	public:
		int length,amount;
		void setdata(string c1,string f1);
		void getdata(){
			cout<<"color of cloth is   "<<color<<endl;
			cout<<"fabric of cloth is   "<<fabric<<endl;
			cout<<"lenght of cloth is   "<<length<<endl;
			cout<<"amount of cloth is  "<<amount<<endl;
			
			
			
		}
		
};
void Clothes::setdata(string c1,string f1){
	color=c1;
	fabric=f1;
}


int main(){
	Clothes kapray;
	kapray.amount=4;
	kapray.length=7;
kapray.setdata("blue","silk");
	kapray.getdata();
	
	
	
}
