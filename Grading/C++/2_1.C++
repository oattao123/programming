#include <iostream>
using namespace std;

int main()
{
int a,b,c,sum;
cin >> a >> b >> c ;
sum = a + b + c;
if(sum >= 80 and sum <= 100){
    cout << "A" << endl;
}
else if(sum >= 75){
    cout << "B+" << endl;
}
else if(sum >= 70){
    cout << "B" << endl;
}
else if(sum >= 65){
    cout << "C+" << endl;
}
else if(sum >= 60){
    cout << "C" << endl; 
}
else if(sum >= 55){
    cout << "D+" << endl;
}
else if(sum >= 50){
    cout << "D" << endl;
}
else if(sum >= 0){
    cout << "F" << endl;
}
else {
    cout << "Error" << endl;
}
}