#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        for(int j=0; j<(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*n)-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    // this pattern can be printed by combining pattern1 and pattern2
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*n)-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void pattern6(int n){
    int space = 2* (n-1);
    for(int i=1; i<=n; i++){
        // numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // spaces
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        // numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}
void pattern7(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<= 'A'+(n-i-1); ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern10(int n){
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0; i<n; i++){
        char ch = 'A';
        //space
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        //alphabets
        int breakpoint = (2*i+1)/2; 
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern12(int n){
    char lastChar = 'A'+(n-1);
    for(int i=0; i<n; i++){
        for(char ch = lastChar-i; ch<=lastChar; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int n; cin>>n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    pattern12(n);
    return 0;
}