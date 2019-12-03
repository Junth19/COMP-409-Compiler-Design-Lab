// Author : Junth Basnet

/*
Question 1:
Write a Program to identify whether a given line is comment or not.
*/

#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	
    char comment[50];
    int flag = 0;
    
    cout << "Enter Comment:" << endl;
    cin >> comment;
    
    if(comment[0] == '/'){
        if(comment[1] == '/'){
            cout << "Line is a comment.";
        }
        else if (comment[1] == '*'){
            for (int i = 2; i < 50; i++){
                if(comment[i] == '*' && comment[i + 1] == '/'){
                    cout << "Line is a comment.";
                    flag = 1;
                    break;
                }
                else{
                    continue;
                }
            }
            if (flag == 0){
                cout << "Line is not a comment.";
            }
        }
        else{
            cout << "Line is not a comment.";
        }
    }
    else{
        cout << "\n Line is not a comment.";
    }

    return 0;
}
