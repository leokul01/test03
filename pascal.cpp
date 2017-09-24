#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // TODO: написать вывод треугольника Паскаля с использованием vector.
    //
    // Вид треугольника:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // ...        

    cout << "input n - number of strings in triangle" << '\n';
    int n;
    cin >> n;

    vector<vector<int> > v(n, vector<int>());

    for(int i=0;i<n;i++) {
	v[i].push_back(1);
	for(int j=1;j<i;j++) 
	    v[i].push_back(v[i-1][j-1]+v[i-1][j]);
	v[i].push_back(1);
    }

    for(int i=0;i<n;i++) {
	for(int j=0;j<=i;j++) 
	    cout << v[i][j] << ' ';
	cout << '\n';
    }
    
    return 0;
}

