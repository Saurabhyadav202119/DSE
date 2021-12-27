//  stack operations to convert a given infix expression into its postfix //

#include<iostream>
#include<string>
using namespace std;

#define max 100

char stack[100];


int top=-1;
void push(char item)
{
    if(top==max-1)
    {
        cout<<"stack is full!";
    }
   
    else
    {
        top++;
        stack[top]=item;
    }
}


char pop()
{
    char ch;
    if(top==-1)
    {
        cout<<"stack is empty!";
    }
    else
    {
        ch=stack[top];
        stack[top]='\0';
        top--;
        return(ch);
    }
    return 0;
}
int priority ( char sign )
{
    if(sign == '+' || sign =='-')
    {
        return(1);
    }
 
    if(sign == '*' || sign =='/')
    {
        return(2);
    }
 
    if(sign == '$')
    {
        return(3);
    }
 
    return 0;
}


string convert(string infix)
{
    int i=0;
    string postfix = "";   
    while(infix[i]!='\0')
    {       
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix.insert(postfix.end(),infix[i]);
            i++;
        }       
        else if(infix[i]=='(' || infix[i]=='{'  || infix[i]=='[')
        {
            push(infix[i]);
            i++;
        }        
        else if(infix[i]==')' || infix[i]=='}'  || infix[i]==']')
        {
            if(infix[i]==')')
            {
                while(stack[top]!='(')
                {               postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
            if(infix[i]==']')
            {
                while(stack[top]!='[')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
 
            if(infix[i]=='}')
            {
                while(stack[top]!='{')
                {
                    postfix.insert(postfix.end(),pop());
                }
                pop();
                i++;
            }
        }
        else            
        {
            if(top==-1)
            {
                push(infix[i]);
                i++;
            }
 
            else if( priority(infix[i]) <= priority(stack[top])) {
                postfix.insert(postfix.end(),pop());
               
                while(priority(stack[top]) == priority(infix[i])){
                    postfix.insert(postfix.end(),pop());
                    if(top < 0) {
                        break;
                    }
                }
                push(infix[i]);
                i++;
            }
            else if(priority(infix[i]) > priority(stack[top])) {
                push(infix[i]);
                i++;
            }
        }
    }
    while(top!=-1)
    {
        postfix.insert(postfix.end(),pop());
    }
    cout<<"The converted postfix string is : "<<postfix;   
    return postfix;
}

int main()
{
    int cont;
    string infix, postfix;
    cout<<"\nEnter the infix  : "; 
    cin>>infix;
    postfix = convert(infix);
    return 0;
}