#include <iostream>
using namespace std;
/*
 * An array is beautiful if both of the following two conditions meet:

there are at least ๐1 and at most ๐1 elements in the array equal to its minimum;
there are at least ๐2 and at most ๐2 elements in the array equal to its maximum.
For example, the array [2,3,2,4,4,3,2] has 3 elements equal to its minimum (1-st, 3-rd and 7-th) and 2 elements equal to its maximum (4-th and 5-th).

Another example: the array [42,42,42] has 3 elements equal to its minimum and 3 elements equal to its maximum.

Your task is to calculate the minimum possible number of elements in a beautiful array.

Input
The first line contains one integer ๐ก (1โค๐กโค5000) โ the number of test cases.

Each test case consists of one line containing four integers ๐1, ๐1, ๐2 and ๐2 (1โค๐1โค๐1โค50; 1โค๐2โค๐2โค50).

Output
For each test case, print one integer โ the minimum possible number of elements in a beautiful array.
 */

int min_num(int l1, int r1, int l2, int r2){
    if(r1 < l2 || r2 < l1)
        return l1 + l2;
    else
        return l1 > l2 ? l1 : l2;
}
int main() {
    int loop_time = 0;
    cin>>loop_time;
    for(int i=0;i<loop_time;i++) {
        int l1 = 0, r1 = 0, l2 = 0, r2 = 0;
        cin >> l1;
        cin >> r1;
        cin >> l2;
        cin >> r2;
        if (l1 <= 0 || r1 <= 0 || l2 <= 0 || r2 <= 0)    //if any input is not obtained, return 0
            return 0;
        cout << min_num(l1, r1, l2, r2) << endl;
    }
}