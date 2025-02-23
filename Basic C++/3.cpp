#include<bits/stdc++.h>  // bits/stdc++.h : if i apply it then it will be work for all libraries 
                         //  bits/stdc++.h বলতে বোঝানো হয় "standard template library (STL) সহ সব header file একসাথে ইনক্লুড করা"।
using namespace std; // using namespace std; C++-te std (standard) namespace-er moddhe thaka built-in functions, classes, and objects directly access kora shojjo kore. C++-er iostream, vector, string, map, cout, cin moto elements shob std namespace-er moddhe thake.
int main(){   // C++-এ int main() holo program-er starting point, mane jokhon program chalano hoy, shekhane theke program-er execution suru hoy. main() function ta proyojonio, karon program er execution shob somoy main() thekei start hoy.

    cout<<"Input two value: ";  
    int x,y;

    cin  >>  x >> y;  //  cin (console input) ke use kore amra user theke data receive kori. Er sathe, >> operator ke extraction operator bola hoy, ja input stream theke value extract kore.
    
    cout << "value x is: " << x << " and value y is: " << y;   // C++-এ cout ekta object ja output (data print kora) korte use kora hoy standard output-e, usually console ba terminal-e
    return 0;  // return 0; statement-ta main() function er seshe use kora hoy. Eita program er execution sesh hole operating system-ke signal deyar jonno use kora hoy.

}