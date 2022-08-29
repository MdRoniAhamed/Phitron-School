#include<stdio.h>  ///Header file c++.
#include<string.h>  ///string header file.
int top=-1;  /// Global variable top value -1 set.
char Stack[4]={'\0'};  /// Global char variable value set NULL.
void Push(char x);
char Pop(void);
int main()
{
    char Str1[4]={'\0'};  ///char string size 4 . value set 0.
    char Str2[4]={'\0'};  ///char string size 4 . value set 0.
    int i;
    strcpy(Str1, "CSE");   /// strcpy call string copy to  str1  . value = CSE.
    for(i=0; i<3; ++i){    /// for loop size 3.
    Push(Str1[i]);         /// call function Push pass value str1[index-i].
    }
    for(i=0; i<3; ++i){  /// for loop size 3.
    Str2[i]=Pop();  /// call function pop(). str2[index-i] add value return pop.
    }
    printf("%s", Str2); ///string show value str2.
    return 0; ///
}

void Push(char x){  ///value add char stack.
  	Stack[++top]=x;  ///Stack [++top] value add char.
  	return;
}
char Pop(void){  ///Value out to Stack.
   return Stack[top--];}  ///return value Stack top to pop().

