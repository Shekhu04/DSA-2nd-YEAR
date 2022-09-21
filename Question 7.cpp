#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a;
    cin>>b;
    string c=a+b;
    int len1 =a.size();
    int len2 =b.size();
    cout<<len1<<" "<<len2<<endl;
    cout<<c<<endl;
    string k;
    k=a[0];
    a[0]=b[0];
    b[0]=k[0];
    cout<<a<<" "<<b;
    return 0;
}
