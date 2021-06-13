#include<iostream>
#include<cstring>
using namespace std;
class vedio{
	protected:
		string text;
		float rating;
	public:
		vedio(string e,float q){
			text=e;
			rating=q;
		}
		virtual void display(){
			
		}	
};
class vediolength:public vedio{
	protected:
		float vl;
	public:
		vediolength(string s,float q,float w):vedio(s,q){
			vl=w;
		}
	    void display(){
	    	cout<<"the text for this vedio is"<<text<<endl;
	    	cout<<"the rating of this vedio is"<<rating<<endl;
	    	cout<<"the length of this vedio is"<<vl<<endl;
		}
};

class vediowords:public vedio{
	protected:
		int words;
	public:
		vediowords(string ss,float qq,int n):vedio(ss,qq)
		{
			words=n;
		}
	void display(){
		cout<<"the text for this vedio is"<<text<<endl;
	    cout<<"the rating of this vedio is"<<rating<<endl;
	    cout<<"the words in this vedio is"<<words<<endl;
	}
		
};
int main(){
	string texto;
	float ratings,vll;
	int wordss;
	
	texto="my name is khan";
	ratings=7.5;
	vll=9.8;
	vediolength obj1(texto,ratings,vll);
	//obj1.display();
	
	texto="my name is khan by srk";
	wordss=290;
	ratings=9.5;
	vediowords obj2(texto,ratings,wordss);
//	obj2.display();
    vedio *semi[2];
    semi[0]=& obj1;
    semi[1]=& obj2;
    
    semi[0]->display();
    semi[1]->display();
	
	return 0;
	
}
