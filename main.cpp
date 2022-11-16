/*
05 - Functions
Homework
by Grzegorz Potocki
*/

#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <string.h>

using namespace std;

int mini_of_2(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int mini_of_4(int a, int b, int c, int d){
    int result1 = mini_of_2(a, b);
    int result2 = mini_of_2(c, d);
    if(result1<result2){
        return result1;
    }
    else{
        return result2;
    }
}
float g_mean(int a, int b, int c){
    return cbrt(a*b*c);
}
void round1(float &a){
    int result=static_cast<int>(a*10)%10;
    if(result>=5){
        a=ceil(a);
    }
    else{
        a=floor(a);
    }
}
bool is_prime(int n){
    if(n==0 || n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    else{
        for(int i=2; i<100; i++){
            if(n%i==0){
                return false;
            }
            else{
                return true;
            }
        }
    }
}
void sphere(float &r){  //idk how to do it
    float result1=4*M_PI*pow(r, 2);
    float result2=(4*M_PI*pow(r, 3))/3;
    r=result1;
}
float h_mean(int a, int b, int c){
    float result=3/(pow(a, -1)+pow(b, -1)+pow(c, -1));
    return result;
}
int GCD_of_2(int a, int b){
    do{
        int c= a%b;
        a=b;
        b=c;
    }
    while(b!=0);
    if (b==0){
        return a;
    }
}
int GCD_of_3(int a, int b, int d){
    int result=GCD_of_2(a, b);
    do{
        int c=d%result;
        d=result;
        result=c;
    }
    while(result!=0);
    if (result==0){
        return d;
    }
}
void encrypt(char a[]){
    char ch;
    for(int i=0; i<a[i]!='\0'; i++){
        ch = a[i];
        if(ch>='a' && ch<='z'){
            ch=ch + 25;
            if(ch>'z') {
               ch=ch-'z'+'a'-1;
            }
            a[i] = ch;
         }
    }
    return ch;
}
int main()
{
    char choice;
    std::cout<<"Choose an option:\n1 - Exercise 1\n2 - Exercise 2\n3 - Exercise 3\n4 - Exercise 4\n5 - Exercise 5\n6 - Exercise 6\n"<<std::endl;
    std::cout<<"7 - Homework 1\n8 - Homework 2\n9 - Homework 3\nA - Homework 4\nx - exit"<<std::endl;
    std::cin>>choice;
    int choice_int=static_cast<int>(choice);
    while (choice=='x' || choice=='X'){
        return 0;
    }
    switch(choice_int) {
        case 49:{   //ex1
            int number1, number2;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            int result=mini_of_2(number1, number2);
            cout<<result;
            break;
        }
        case 50:{   //ex2
            int number1, number2, number3, number4;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            cout<<"Enter number 3: ";
            cin>>number3;
            cout<<"Enter number 4: ";
            cin>>number4;
            int result=mini_of_4(number1, number2, number3, number4);
            cout<<result;
            break;
        }
        case 51:{   //ex3
            int number1, number2, number3;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            cout<<"Enter number 3: ";
            cin>>number3;
            float result=g_mean(number1, number2, number3);
            cout<<result;
            break;
        }
        case 52:{   //ex4
            float number1;
            cout<<"Enter number to round: ";
            cin>>number1;
            round1(number1);
            cout<<number1;
            break;
        }
        case 53:{   //ex5 weird question???
            int number1;
            cout<<"Enter number to check is it a prime (smaller than 100): ";
            cin>>number1;
            int result=is_prime(number1);
            cout<<result;
            break;
        }
        case 54:{   //ex6
            float r;
            cout<<"Enter radius: ";
            cin>>r;
            sphere(r);
            cout<<r;
            break;
        }
        case 55:{   //hw1
            int number1, number2, number3;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            cout<<"Enter number 3: ";
            cin>>number3;
            float result=h_mean(number1, number2, number3);
            cout<<result;
            break;
        }
        case 56:{   //hw2
            int number1, number2;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            int result=GCD_of_2(number1, number2);
            cout<<result;
            break;
        }
        case 57:{   //hw3
            int number1, number2, number3;
            cout<<"Enter number 1: ";
            cin>>number1;
            cout<<"Enter number 2: ";
            cin>>number2;
            cout<<"Enter number 3: ";
            cin>>number2;
            int result=GCD_of_3(number1, number2, number3);
            cout<<result;
            break;
        }
        case 65:{   //hw4
            char text[100];
            cout<<"Enter message to cipher: ";
//            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//            cin.getline(text, 100);
            cin>>text;
            char result[100]=encrypt(text);
            cout<<result;
            break;
        }
        default:{
            std::cout<<"Value of expression is out of scope";
            break;
        }
    }
    return 0;
}
