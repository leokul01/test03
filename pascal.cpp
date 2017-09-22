#include <iostream>
#include <vector>
using namespace std;
int fact(int p) {
	if (p<2) return 1;
	return p*fact(p-1);
    }
int main()
{
    // TODO: написать вывод треугольника Паскаля с использованием vector.
    //
    // Вид треугольника:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1// 1 4 6 4 1
    // ...
    
    
    vector<int> v;
    int count =0,place = 0;
    v.push_back(1);
    cout << '1' << endl;

    for(int line=1;line<=10;line++) {
	for(int j = 1;j<=line;j++) {
	    v.push_back(fact(line)/(fact(j)*fact(line-j)));
	    count++;    
	}
	for(int j=place;j<=place + count;j++) {
	    cout << v[j] << ' ';
	}
	place+=count;
	count = 0;
	cout << endl;
    }
    
    return 0;
}

