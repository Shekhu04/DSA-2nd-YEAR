#include <iostream>
using namespace std;

//complete the functions
class Stack{
	int A[100000];
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		end=0;
	}
	
	//push the value at the back
	void push(int val){
		A[end]=val;
		end++;
	}
	
	int top(){
		return A[end-1];
	}
	
	void pop(){
		end--;
	}
	
	int size(){
		return end;
	}
	
	bool isEmpty(){
		return end==-1;
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
