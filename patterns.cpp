// #include<iostream>
// using namespace std;
//  int main(){
//     int age = 25 ;
//     char ch='A';
//     float PI = 3.14;
//     bool issafe = true;
//     double num=999.47678;
//     cout <<  sizeof (age)  <<endl ;
//     cout << sizeof (ch)  <<endl ;
//     cout << sizeof (PI)  <<endl ;
//     cout << sizeof (bool)  <<endl ;
//     cout << sizeof (num)  <<endl ;
//     return 0;

// }                            simple if else positive negative number
// #include<iostream>
// using namespace std;
// int main(){
//     int n ,a;
//     cout <<"enter the value of n =";
//     cin >>n;
//     cout <<(n>0?"positive":"negative") <<endl;
//     // if(n>0){
//     //     cout <<"positive number";

//     // }
//     // else if (n==0){
//     //     cout << "number is zero";
//     // }
//     // else{
//     //     cout <<"number is negative ";
//     // }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     while(i<=n){
//         cout<<"yash thapliyal\n";
//         i++;
//     }
//     return 0;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for(i=1;i<=n;i++){
//         cout<<"yash thapliyal\n";
        
//     }
//     return 0;
    
// }                        Patterns
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1,j;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for (i=1;i<=n;i++){
//         for(j=1;j<=10;j++){
//             cout <<"*";
//         }
//         cout <<"\n";
//     }
//     return 0;
    
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,a=1;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for (i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout <<j;
            
//         }
//         cout <<"\n";
        
//     }
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,a=1;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for (i=1;i<=n;i++){
//         char ch ='A';
//         for(j=1;j<=n;j++){
//             cout <<ch;
//             ch++;
            
//         }
//         cout <<"\n";
        
//     }
//     return 0;
    
// }                   

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,a=1;
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for (i=1;i<=n;i++){
//        // char ch ='A';
//         for(j=1;j<=n;j++){
//             cout <<a <<" ";
//             a++;
            
//         }
//         cout <<"\n";
        
//     }
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,a=1;
//        char ch ='A';
//     cout <<"enter the value of n=\n";
//     cin >>n;
//     for (i=1;i<=n;i++){
     
//         for(j=1;j<=n;j++){
//             cout <<ch<<" ";
//             ch++;
            
//         }
//         cout <<"\n";
        
//     }
//     return 0;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout <<"*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,num=1;
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout <<num;
//         }
//         num++;
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     char ch='A';
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout <<ch;
//         }
//         ch++;
//         cout <<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     char ch='A';
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=0;i<=n-1;i++){
//         for(j=1;j<=i+1;j++){
//             cout <<j;
//         }
    
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     char ch='A';
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=0;i<=n-1;i++){
//         for(j=i+1;j>0;j--){
//             cout <<j;
//         }
    
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,a=1;
//     char ch='A';
//     cout <<"enter the value of n=";
//          cin >>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout <<a;
//             a++;
//         }
    
//         cout <<"\n";
//     }
//     return 0;
// }                                         INVERTED TRIANGLE PATTERN 
// #include<iostream>
// using namespace std;
// int main(){
//     int num,i,j,n;
//     cout <<"enter the value of n =" << endl;
//     cin >>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<i;j++){
//             cout <<" ";
            
//         }
//         for(j=0;j<n-i;j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num,i,j,n;
//     char ch ='A';
//     cout <<"enter the value of n =" << endl;
//     cin >>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<i;j++){
//             cout <<" ";
            
//         }
//         for(j=0;j<n-i;j++){
//             cout << (ch);
//         }
//         cout << endl;
//         ch++;
//     }

// }                                    PYRAMID PATTERN 


// #include<iostream>
// using namespace std;
// int main(){
//     int num,i,j,n;
//     cout <<"enter the value of n =" << endl;
//     cin >>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout <<" ";
            
//         }
//         for(j=1;j<=i;j++){
//             cout << j;
//         }
//         for(j=i-1;j>=1;j--){
//             cout <<j;
//         }
//         cout << endl;
//     }

// }                                      HOLLOW DIAMOND PATTERN 
// #include<iostream>
// using namespace std;
// int main(){
//     int num,i,j,n;
//     cout <<"enter the value of n =" << endl;
//     cin >>n;
//     for(i=0;i<  n;i++){
//         //spaces 
//         for(j=0;j<n-i-1;j++){
//             cout <<" ";
            
//         }
//         cout << "*";

//         if(i!=0){
//         for(j=0;j<2*i-1;j++){
//             cout << " ";
//         }
//         cout << "*";
//     }
//         cout << endl;
//     }
//     //bottom part 
//     for (i=0;i<n-1;i++){
//         //spaces 
//         for (j=0;j<i+1;j++){
//             cout <<" ";

//         }
//         cout <<"*";
//         if(i!=n-2){
//             //spaces 
//             for (j=0;j<2*(n-i)-5;j++){
//                 cout << " ";
//             }
//             cout <<"*";
//         }
//         cout << endl;
//     }
//     return 0;

// }          
//                                            BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;
// int  main (){
//     int i ,j,n=5,k;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout << "*";

//         }
//         for(j=0;j<n-i;j++){
//             cout << " ";
//         }
//         for(j=0;j<n-i;j++){                  
//             cout << " ";
//         }
//             for (j=1;j<=i;j++){    
//                 cout << "*";
//             } 
//              cout << endl;
//         }  
//     for(i=n;i>=0;i--){
//         for(j=1;j<=i;j++){
//             cout << "*";}  
//         if(i!=n){
//             for (int k=1;k<=n-i;k++){  
//                 if(n-i==n){

//                 break;}
//                 cout <<" ";
//             }}
       
//             if(i!=n){
//                 for( int k=1;k<=n-i;k++){
//                     if(n-i==n){
//                         break;}
//                         cout <<" ";

//                     }}
//         for(j=1;j<=i;j++){
//             cout << "*";}
//               cout << endl;
                
//             }
        
      
//           return 0;
//     }
       
    
  

