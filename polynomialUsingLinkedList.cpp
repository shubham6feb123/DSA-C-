#include <iostream>
#include<set>
using namespace std;
// Note using this code we can perform operations on only two polynomial equations of any degree
class node
{
public:
  int power;
  int coefficient;
  node *next;
  node(int pow, int coeff)
  {
    this->power = pow;
    this->coefficient = coeff;
    next = NULL;
  }
};

//for connecting polynomial equation nodes with each other
void createPolyEquation(node* &e, int pow, int coefficient)
{
  node *p1 = e;

  if (e == NULL)
  {
    e = new node(pow, coefficient);
    return;
  }

  while (p1->next != NULL)
  {
    p1 = p1->next;
  }
  p1->next = new node(pow, coefficient);
};

//for displaying polynomial equation
void display(node *&e, int degree)
{
  node *p1 = e;

  while (p1 != NULL)
  {
    if (p1->power == degree)
    {
      cout << p1->coefficient << "X^" << p1->power;
    }
    else if (p1->coefficient > 0 && p1->power != 0)
    {
      cout << " + " << p1->coefficient << "X^" << p1->power;
    }
    else if (p1->coefficient < 0 && p1->power != 0)
    {
      cout << " - " << -1 * p1->coefficient << "X^" << p1->power;
    }
    else if (p1->coefficient < 0)
    {
      cout << " - " << -1 * p1->coefficient;
    }
    else
    {
      cout << " + " << p1->coefficient;
    }
    p1 = p1->next;
  }
  cout<<endl;
};

//for displaying polynomial equation
void makePloyEquation(node* &E,int degree){
  for (int i = degree; i >= 0; i--)
  {
    int coefficient;
    cout << "Enter coefficient of degree " << i << " : ";
    cin >> coefficient;
    createPolyEquation(E, i, coefficient);
  }
};

//for adding two polyomial equations
void addEquation(node* e1,node* e2,int d1,int d2){
   node* p1=e1;
   node* p2=e2;
   node* p3=NULL;
   cout<<"Equation Added : ";
    if(d1>d2){
      while(p2!=NULL){
        if(p1->power==p2->power){
           int coeff = p1->coefficient+p2->coefficient;
           createPolyEquation(p3,p1->power,coeff);
           p1=p1->next;
           p2=p2->next;
        }else{
          createPolyEquation(p3,p1->power,p1->coefficient);
          p1=p1->next;
        }
      }
       display(p3,d1); 
    }else if(d1<d2){
          while(p1!=NULL){
            if(p1->power==p2->power){
           int coeff = p1->coefficient+p2->coefficient;
           createPolyEquation(p3,p2->power,coeff);
           p1=p1->next;
           p2=p2->next;
        }else{
          createPolyEquation(p3,p2->power,p2->coefficient);
          p2=p2->next;
        }
          }
      display(p3,d2);
    }else{
       while(p1!=NULL){
          int coeff = p1->coefficient+p2->coefficient;
          createPolyEquation(p3,p1->power,coeff);
          p1=p1->next;
          p2=p2->next; 
       }
      display(p3,d1);
    }
  
};

//for subtracting two polyomial equations
void subtractEquation(node* e1,node* e2,int d1,int d2){
 node* p1=e1;
 node* p2=e2;
 node* p3=NULL;
   cout<<"Equation Subtracted : ";
   if(d1>d2){
      while(p2!=NULL){
        if(p1->power==p2->power){
           int coeff = p1->coefficient-p2->coefficient;
           createPolyEquation(p3,p1->power,coeff);
           p1=p1->next;
           p2=p2->next;
        }else{
          createPolyEquation(p3,p1->power,p1->coefficient);
          p1=p1->next;
        }
      }
       display(p3,d1); 
    }else if(d1<d2){
          while(p1!=NULL){
            if(p1->power==p2->power){
           int coeff = p1->coefficient-p2->coefficient;
           createPolyEquation(p3,p2->power,coeff);
           p1=p1->next;
           p2=p2->next;
        }else{
          createPolyEquation(p3,p2->power,p2->coefficient);
          p2=p2->next;
        }
          }
      display(p3,d2);
    }else{
       while(p1!=NULL){
          int coeff = p1->coefficient-p2->coefficient;
          createPolyEquation(p3,p1->power,coeff);
          p1=p1->next;
          p2=p2->next; 
       }
      display(p3,d1);
    }
  
}

//for multiplying two polyomial equations
void multiplyEquation(node* e1,node* e2,int d1,int d2){
node* p1=e1;
node* p2=e2;
node* p3=NULL;

cout<<"Equation Multiplied : ";
while(p1!=NULL){
while(p2!=NULL){
 int coeff = p1->coefficient*p2->coefficient;
 int power = p1->power+p2->power;
 createPolyEquation(p3,power,coeff);
 p2=p2->next;
}
p2=e2;
p1=p1->next;
}

//alag code yha se


display(p3,d1+d2);
}

//for selecting operation type
void operation(node* e1,node* e2,int d1,int d2){
int operand;
cout<<"Choose option"<<endl;
cout<<"1. + "<<endl;
cout<<"2. - "<<endl;
cout<<"3. * "<<endl;
cin>>operand;
if(operand==1){
addEquation(e1,e2,d1,d2);
}
else if(operand==2){
 subtractEquation(e1,e2,d1,d2);
}else{
   multiplyEquation(e1,e2,d1,d2);
}
}
int main()
{
  node *E1 = NULL;
  node *E2 = NULL;
  int d1,d2;
  int exit=1;
  while(exit!=0){
  cout << "Enter highest degree of first polynomial equation : ";
  cin >> d1;
  if(d1>=0)makePloyEquation(E1,d1);
  cout << "Enter highest degree of second polynomial equation : ";
  cin >> d2;
  if(d2>=0&&d1>=0)makePloyEquation(E2,d2);

  if(d1>=0&&d2>=0)
  {
  cout<<"Equation one : ";
  display(E1, d1);
  cout<<"Equation second : "; 
  display(E2, d2);
 operation(E1,E2,d1,d2);
  }else{
    cout<<"Highest degree of polynomial equation can not be negative"<<endl;
  }

  cout<<"To exit program press 0 otherwise press 1"<<endl;
  cin>>exit;
  }

  return 0;
}