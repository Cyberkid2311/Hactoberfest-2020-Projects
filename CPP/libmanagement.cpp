#include<iostream> 
#include<string> 
using namespace std; 

int size,size2; 

class member{
 public : 
 string username; 
  int exist; 
  
  void add_member() 
  { 
   cout<<"Enter the Name\n"; 
   cin>>(this->username); 
   cout<<"Added!!!\n"; 
   (this->exist)=1; 
   size2++; 
  }

}User[500]; 

class books{
  public : 
  int taken,exist; 
  string title, author; 
  
  void add_book() 
 { 
   cout<<"Enter the details\n"; 
   cout<<"Title: "; 
   cin>>(this->title); 
   cout<<"Author: "; 
   cin>>(this->author); 
   (this->taken )= 0;
   cout<<"Book Added!!!\n"; 
   (this->exist)=1;   
   size++; 
 }

}Book[500]; 

void delete_member() 
{
   cout<<"Enter Member ID\n"; 
   int a; 
   cin>>a; 
   if(a>size2 || a==0 || User[a-1].exist==0)
    { cout<<"No such ID exist!!!\n"; 
      return; 
    } 
    cout<<"Member deleted from the record!!!\n"; 
   User[a-1].exist=0; 
}
  
void issue_book() 
{ 
   cout<<"Enter Member ID\n"; 
   int a; 
   cin>>a; 
   if(a>size2 || a==0 || User[a-1].exist==0)
    { cout<<"No such ID exist!!!\n"; 
      return; 
    } 

  cout<<"Enter Book ID\n"; 
  cin>>a; 
  if(a>size || a<=0 || Book[a-1].exist==0) 
    { cout<<"No such ID exist!!!\n";  
       return ; 
    } 
  if(Book[a-1].taken==1) 
    cout<<"Book already issued!!!\n"; 
  else 
    { cout<<"Book issued successfully!!!\n"; 
       Book[a-1].taken=1; 
    }
}

void cal_fine() 
{  
   cout<<"Enter Member ID\n"; 
   int a; 
   cin>>a; 
   if(a>size2 || a==0 || User[a-1].exist==0)
   { cout<<"No such ID exist!!!\n"; 
      return; 
   }
   int ans,days; 
   cout<<"Enter the number of days\n"; 
   scanf("%d",&days); 
   ans=(days-30)*2; 
   if(ans<0) 
    ans=0; 
   cout<<"Your fine is "<<ans<<" ₹ !!!\n"; 
}

void return_book() 
{ 
  cout<<"Enter Book ID\n"; 
  int a; 
  cin>>a;  
  if(a>size || a<=0 || Book[a-1].exist==0) 
    { cout<<"No such ID exist!!!\n"; 
       return ; 
    } 
   cal_fine(); 
   Book[a-1].taken=0; 
}

void print()
{  
  int j=0; 
  cout<<"Books List \n"; 
   for(int i=0;i<size;i++) 
    { if(Book[i].exist==1) 
        { j++; 
        cout<<j<<" "<<Book[i].title<<endl; 
        } 
    } 
   cout<<endl; 
   j=0; 
  cout<<"Members List \n"; 
   for(int i=0;i<size2;i++) 
    { if(User[i].exist==1) 
        { j++; 
        cout<<j<<" "<<User[i].username<<endl;
        } 
    } 
    
}

int printmenu() 
{ 
 int choice; 
  cout<<"~MENU~\n"; 
  cout<<"1: Add Book\n"; 
  cout<<"2. Issue Book\n"; 
  cout<<"3. Return Book\n"; 
  cout<<"4. Calculate Fine\n"; 
  cout<<"5. Adding Members\n"; 
  cout<<"6. Delete Membership\n"; 
  cout<<"7. List of Books and Members\n"; 
  cout<<"8. Exit\n"; 
  cout<<"Enter your choice: "; 
  cin>>choice; 
  return choice; 
}
int main() {
  int choice,flag=1; 
  size=size2=0; 
  do 
  { 
    choice=printmenu(); 
    switch (choice) 
    {
    case 1: Book[size].add_book(); 
                  break;
    case 2: issue_book(); 
                  break; 
    case 3: return_book(); 
                  break;
    case 4: cal_fine(); 
                  break;
    case 5: User[size2].add_member(); 
                  break; 
    case 6: delete_member(); 
                  break;
    case 7:  print(); 
                  break;
    case 8: flag=0; 
                  break; 
    default: cout<<"Incorrect option\n"; 
    }
  }
   while(flag==1); 
  return 0;
}
