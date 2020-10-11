#include<stdio.h>
#include<stdlib.h>
struct term{
  int coff,exp;
  struct term *p;
};
void create(struct term **,int,int);
void show(struct term *);
struct term *add(struct term *,struct term *);
void main(){
  struct term *poly1=NULL,*poly2=NULL,*poly3=NULL;
  printf("\nfirst list :\n");
  create(&poly1,14,4);
  create(&poly1,3,3);
  create(&poly1,4,2);
  create(&poly1,5,1);
  create(&poly1,6,0);
  show(poly1);
  printf("\nsecond list :\n");
  create(&poly2,10,5);
  create(&poly2,20,4);
  create(&poly2,30,3);
  create(&poly2,24,2);
  create(&poly2,15,1);
  show(poly2);
  printf("\npolynomial after addition\n");
  poly3=add(poly1,poly2);
  show(poly3);

}
void create(struct term**q,int t,int r){
  struct term *temp,*temp1;
  temp=malloc(sizeof(struct term));
  temp->coff=t;
  temp->exp=r;
  temp->p=NULL;
  if(*q==NULL){
    *q=temp;
    return;
  }
  temp1=*q;
  while(temp1->p!=NULL){
    temp1=temp1->p;
  }
  temp1->p=temp;
}
void show(struct term *d){
  while(d!=NULL){
    if(d->p!=NULL){
    printf("%dx^%d + ",d->coff,d->exp);
    d=d->p;}
    else{
      if(d->exp!=0){
          printf("%dx^%d",d->coff,d->exp);

      }
      else{
        printf("%d",d->coff);
      }
      d=d->p;
    }
  }
}
struct term *add(struct term *q,struct term *i){
  if(q==NULL && i==NULL){
    printf("\naddition is not possible\n");
    return 0;
  }
  struct term *temp,*temp1=NULL,*last;

  while(q!=NULL && i!=NULL){
    temp=malloc(sizeof(struct term));
    if(temp1==NULL){
      temp1=last=temp;
    }
    else{
      last->p=temp;
      last=temp;
    }
    if(q->exp==i->exp){
  temp->coff=q->coff+i->coff;
  temp->exp=i->exp;
  q=q->p;
  i=i->p;
}
   else{if(q->exp>i->exp){
    temp->coff=q->coff;
    temp->exp=q->exp;
    q=q->p;
  }
  if(q->exp<i->exp){
    temp->coff=i->coff;
    temp->exp=i->exp;
    i=i->p;

  }}
}
if(q!=NULL){
  while(q!=NULL){
    temp=malloc(sizeof(struct term));
    last->p=temp;
    last=temp;
    temp->coff=q->coff;
    temp->exp=q->exp;
    q=q->p;

  }
  last->p=NULL;
  return temp1;
}
if(i!=NULL){
  while(q!=NULL){
    temp=malloc(sizeof(struct term));
    last->p=temp;
    last=temp;
    temp->coff=i->coff;
    temp->exp=i->exp;
    i=i->p;

  }
    last->p=NULL;
    return temp1;
}
}
