/*#include<iostream>
using namespace std;

int main() {
    int fact=1,i=1, n;
     cout << "enter number = ";
     cin >> n;

    // for(i=1;i<=n;i++) {
    while(n>=i) {
        fact = fact * i;
        i++;
     }
     cout << "factorial is = " << fact;

   return 0;
    } */

/* #include<iostream>
using namespace std;

int main() {
    int a=0, b=1, i, n, c=0;
     cout << "enter term = " ;
     cin >> n;
     c = a+b;
     cout << "fibonacci series:" << endl ;
     for(i=2;i<=n;i++) {
     cout << c << '\t';
        a = b;
        b = c;
        c = a+b;
     }

   return 0;
      } */

#include<iostream>
using namespace std;

/* int main() {
    int ori, n, i, rem, rev=0;
     cout << "enter number = " ;
     cin >> n;
     ori = n;
     while(n>0) {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
     }
    if(ori == rev) {
        cout << "palindrome number";
    }
    else {
        cout << "not palindrome number";
    }

   return 0;
      } */

/*#include<iostream>
using namespace std;

int main() {
    int  n, i, rem, rev=0;
     cout << "enter number = " ;
     cin >> n;

     while(n>0) {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    cout << "reverse number is = " << rev;

   return 0;
      } */

/*#include<iostream>
using namespace std;

int main() {
    int  ori, n, i, rem, sum=0;
     cout << "enter number = " ;
     cin >> n;
     ori = n;
     while(n>0) {
        rem = n%10;
        sum = sum + rem*rem*rem ;
        n = n/10;
    }
    if(ori==sum) {
        cout << "armstrong number";
    }
    else {
        cout << "not armstrong number";
    }

   return 0;
      }*/

/*#include<iostream>
using namespace std;

int main() {
    int  n, i, rem, sum=0;
     cout << "enter number = " ;
     cin >> n;

     while(n>0) {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    cout << "sum of digits = " << sum;

   return 0;
      } */

/* #include <iostream>
using namespace std;

int main() {
    char alpha ;
    cout<<"enter a character: ";
    cin>>alpha;
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
    {
        cout << "it is a vowel";
    }
    else if ((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z')) {
        cout << "it is consonant";
    }

    return 0;
} */

 #include<iostream>
using namespace std;

int main() {
    int i=1, n, c=0;
    cout << "enter number = ";
     cin >> n;
    // for(i=1;i<=n;i++) {
    while(i<=n) {
     if(n%i==0) {
        c++;
     }
     i++;
     }
     if(c==2) {
        cout << "prime number";
    }
    else {
        cout << "not prime number";
    }

   return 0;
      }

/* #include<iostream>
using namespace std;

int main() {
    int i, k, n;
    cout << "enter number = ";
     cin >> n;
     for(i=2;i<n;i++) {

        for(k=2;k<i;k++) {

           if(i%k==0){

           cout << "";
            break;
        }
            }

     if(k==i) {
        cout << k << '\t';
    }
}

   return 0;
      } */




