#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

struct treenode{
       int data;
       int num;
       treenode *next;
       treenode *right;
       treenode *left;
}*start=NULL,*end=NULL,*p;

struct code{
       char bcode[12];
       int ch;
}coding[256];

struct tree{
        int data;
        int num;
        }atree[512];

int o=0;

int search(int i);
void insert(int i);
void insertm(struct treenode *l);
void sort();
void create();
void binary(struct treenode *n,char byte[],int i);
int searchc(int i);
void write();
void read();
void tree(struct treenode *n,int i);
int numnode=0;
int numchar=0;
char filename[25];

int main()
{
 clrscr();
 FILE *fp1,*fp2;

 cout<<"\n Enter The Location And Name Of The Source File To Compress : ";
 cin>>filename;
 fp1=fopen(filename,"r+b");
 if (fp1==NULL)
    {
       cout<<"\n Error In Open File...";
       getch();
       exit(1);
    }
  int i=getc(fp1);
  while (i!=-1)
  {
   numchar++;
   if (search(i)==-1)
      insert(i);
   i=getc(fp1);
  }
  fclose(fp1);
  sort();
  create();
  char byte[20]={0};
  binary(start,byte,0);
  tree(start,1);
  write();
  cout<<"\n\nComplete Succssfuly Coding To Code.txt\n";
  read();
  cout<<"Complete Succssfuly Encoding To Decode.txt";
  getch();
}
//*************************search******************************
int search(int i)
{
 struct treenode *h;
 h=start;
 while(h)
 {
  if (h->data==i)
  {
   h->num=h->num+1;
   return 0;
  }
  h=h->next;
 }
 return -1;
}
//**************************insert******************************
void insert(int i)
{
 p=new treenode;
 p->data=i;
 p->num=1;
 p->right=p->left=p->next=NULL;
 if (start==NULL)
 {
     start=p;
     end=p;
 }
 else
 {
     end->next=p;
     end=p;
 } }
//******************************Sort*******************
void sort()
{
 struct treenode *h1,*h2,*n2,*right,*left;
 int d,n;
 n2=start;
 while(n2)
 { h1=start;
   h2=start->next;
  while(h2)
  {
    if (h1->num > h2->num)
    {
      d=h1->data;
      n=h1->num;
      right=h1->right;
      left=h1->left;
      h1->data=h2->data;
      h1->num=h2->num;
      h1->right=h2->right;
      h1->left=h2->left;
      h2->data=d;
      h2->num=n;
      h2->right=right;
      h2->left=left;
    }
     h1=h2;
     h2=h2->next;
    }
     n2=n2->next;
 } }
//****************Create*******************************
void create()
{
  struct treenode *h;
  while (start->next)
  {
   int i1,i2;
   p=new treenode;
   p->left=start;
   p->right=start->next;
   p->num=start->num+start->next->num;
   p->data=-1;
   p->next=NULL;
   h=start;
   start=start->next->next;
   h->next->next=NULL;
   h->next=NULL;
   insertm(p);
   sort();
  }}
//********************Insertm****************************
void insertm(struct treenode *l)
{
 if (start==NULL)
 {
     start=l;
     end=l;
 }
 else
 {
     end->next=l;
     end=l;
 } }
//********************Binary****************************
void binary(struct treenode *n,char byte[],int i)
{
 if (n->data==-1)
    {
      char b1[20]={0},b2[20]={0};
      strcpy(b1,byte);
      strcpy(b2,byte);
      b1[i]='1';
      binary(n->right,b1,i+1);
      b2[i]='0';
      binary(n->left,b2,i+1);
     }
   else
     {
       cout<<"Char :"<<(char)n->data<<" Byte : "<<byte<<"\n";
       strcpy(coding[o].bcode,byte);
       coding[o++].ch=n->data;
     }
}
//*********************Coding*******************************
void write()
{
  FILE *fp1,*fp2;
  fp1=fopen(filename,"r+b");
  fp2=fopen("Code.txt","w+b");
  //**************************************************************
  int i=1;
  while (i<=numnode)
  {
    fprintf(fp2,"%d",atree[i].data);
    i++;
  }
  //*****************************************************************
 i=getc(fp1);
 int j=0,place=1;
 unsigned char bytebuf=0;
 while (i!=-1)
  {
   j=searchc(i);
   int y=0;
   while (coding[j].bcode[y]) {
      if (coding[j].bcode[y]=='1')
          bytebuf |= place;

      if (place==128)
      {
     putc(bytebuf,fp2);
     place=1;
     bytebuf=0;
       }
       else
     place<<=1;
       y++;
      }
   i=getc(fp1);
  }
  if (place<=128 && place !=1) putc(bytebuf,fp2);
  fclose(fp1);
  fclose(fp2);
}
//********************searchcode***************************
int searchc(int i)
{
  int j=0;
  while (j<o)
      if (coding[j].ch==i)
           return j;
      else
           j++;
}
//**********************Encode*****************************
void read()
{
 FILE *fp1,*fp2;
 fp1=fopen("Decode.txt","w+b");
 fp2=fopen("Code.txt","r+b");
 //************************************************
 int i=1,a;
  while (i<=numnode)
  {
    fscanf(fp2,"%d",&a);
    i++;
  }
 //************************************************
 i=getc(fp2);
 int j=0,place=1;
 struct treenode *n;
 unsigned char bytebuf=0;
 while (i!=-1)
 {
   n=start;
   while (n->data==-1)
    {
      int x=(place & i)?1:0;
      if (x==1)
    n=n->right;
      else
    n=n->left;
      if (place==128)
     {i=getc(fp2);
      place=1; }
      else
      place<<=1;
     }
   if (j++<numchar)
     putc(n->data,fp1);
  }
  fclose(fp1);
  fclose(fp2);
}
//*********************************************************
void tree(struct treenode *n,int i)
{
 atree[i].data=n->data;
 atree[i].num=n->num;
 numnode=i;
 if (n->left!=NULL)
    tree(n->left,2*i);
 if (n->right!=NULL)
    tree(n->right,2*i+1);
}
