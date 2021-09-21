/*
For a given number `num` we get square of it by multiplying number as `num * num`. 
Now write one of `num` in square `num * num` in terms of power of `2`. Check below examples.

Eg: num = 10, square(num) = 10 * 10 
                          = 10 * (8 + 2) = (10 * 8) + (10 * 2)
    num = 15, square(num) = 15 * 15 
                          = 15 * (8 + 4 + 2 + 1) = (15 * 8) + (15 * 4) + (15 * 2) + (15 * 1)

Multiplication with power of 2's can be done by left shift bitwise operator.
*/

#include <bits/stdc++.h>
using namespace std;
 
int square(int num)
{
    // handle negative input by making it positive first and then sending it to calculate square bitwise
    if (num < 0)
	{
		num = -num;
	} 
 
    // Initialize result
    int result = 0, n = num;  //num ko preserve kiya
 
    while (n > 0)
    {
        int possibleShifts = 0;
		int pow_2 = 1;      //1 already hai 1st bit pe to (actual-1) shifts hi karne hoge
 
 		//possible shifts calculate kiye har ek n ke liye
        while ((pow_2 << 1) <= n)      //tab tak hi shift karo jab tak 2 ki highest power i/p se choti hai
        {
            pow_2 = pow_2 << 1; //multiply by 2
            possibleShifts++;
        }
 	
 		
        result = result + (num << possibleShifts);
        
        //yaha / operator tha but usko use nhi kar sakte
        
        /*
		Ref- code
		
		// Function for multiplication
int multiply(int n, int m)
{ 
    int ans = 0, count = 0;
    while (m)
    {
        // check for set bit and left
        // shift n, count times
        if (m % 2 == 1)             
            ans += n << count;
 
        // increment of place value (count)
        count++;
        m /= 2;
    }
    return ans;
}
		
		*/
		
        n = n - pow_2;
        
    }
 
    return result;
}
 
// Driver code
int main()
{
    // Function calls
    for (int n = 10; n <= 15; n++)
        cout << "\n\n n = " << n << ", n^2 = " << square(n) << endl;
    return 0;
}
