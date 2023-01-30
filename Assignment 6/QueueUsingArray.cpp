#include <iostream>
using namespace std;

//complete the functions
class Queue{
	int A[100000];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		start=0;
		end=0;
	}
	
	//push the value at the back
	void push(int val){
		A[end]=val;
    end++;
	}
	
	int front(){
	return	A[start];
	}
	
	void pop(){
		start++;
	}
	
	int size(){
	    int d;
	    d=end-start;
		return d;
	}
	
	bool isEmpty(){
        if(end==start)
		return true;
		else 
		return false;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
