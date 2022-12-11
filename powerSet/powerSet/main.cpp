#include <iostream>
#include<math.h>
using namespace std;
void powerSet(int* s, int size)
{
    int max_size = pow(2, size);
    int k=0;
    
    for (int i = 0; i < max_size; i++) {
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j)) {//to find no. elements of set in elements of powerset
                cout<<s[j];
            }
        }
        cout << endl;
        //        k++;
        //        if(k==2) k=0;
    }
}
 
int main()
{
    int s[] = {1,2,3};
    powerSet(s,3);
    return 0;
}
