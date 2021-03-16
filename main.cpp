#include <iostream>
#include <cstring>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    };
Node* head=NULL;
void push(int data){
Node* new_node=new Node();
new_node->data=data;
new_node->next=head;
head=new_node;
}
int printList(Node* ptr){
int siz=0;
while(ptr!=NULL){
    ptr=ptr->next;
    siz++;
    }
    cout<<" "<<siz;
}
int rec(Node* ptr){
if(ptr==NULL){
    return 0;
}
return 1+rec(ptr->next);

}

//function to get nth node for a linked list
void get(Node* ptr, int pos){
int i=0;
while(i<pos-1){
    ptr=ptr->next;
    i++;
}
cout<<" "<<ptr->data;
}

//function to search an element in linked list:iteratively
int iter(Node *ptr,int element){
int mov=0;
while(ptr!=NULL){
    if(element==ptr->data){
        return mov;
    }
ptr=ptr->next;
mov++;

}

      }






// Given a set of strings S1,S2...Sn which have numbers and spaces like 53_65_72, the space divides the string into columns
// Write a algo to compare the set of strings
//PARAMETERS:keys(The column number which is to be used for comparison), comparison type(lexicographic or numeric), reversed

void String_max(int key,string Reversed,string method){






}



string Extract(string str,int key){
char *s=strtok((char *)str.c_str()," ");
while(key>1){
    s=strtok(NULL," ");
    key--;}

return (string)s ;

}



int main()
{
    //push(6);
   //push(8);
    //push(10);
    //push(12);
    //push(14);

    //printList(head);
    //get(head,3);
    //cout<<" "<<iter(head,10);
    /*int n;
    cin>>n;
    cin.get();

    string a[100];
    for(int i=0;i>n;i++){
        getline(cin,a[i]);
    }
    int key;
    string order,method;*/
    string a("15 6 8 2");
    int key;
    cin>>key;
    cout<<Extract(a,key);

}
