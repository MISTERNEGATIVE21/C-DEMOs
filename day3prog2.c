
#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;
int c=0;int temp =0;int data=0;
void create()
{  int opinion=1;
  while(opinion)
 { struct node *newnode,*temp;
newnode =(struct node*)malloc(sizeof(struct node));
printf("\nEnter number to"" be inserted : ");
	scanf("%d", &data);
	start->info=data;
	newnode->link=0;
	if(start==NULL)
	{start=temp=newnode;}
	else
	{
	temp->link=newnode;
	temp=newnode;
	}
	printf("do you want to continue press 1 , to exit press 0");
	scanf("%d",&opinion);
	}
	}

void display()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
        
	else {
	temp = start;
	while (temp != NULL) {
	printf( "%d \t",temp->info);c++;
	temp = temp->link;
	}
}
printf("\nthe number of elements are %d",c);
c=0;
}
void createlist()
{ int p=1; 
while(p)
	{int data;
	struct node* temp;
temp = malloc(sizeof(struct node));
printf("\nEnter number to"
		" be inserted : ");
scanf("%d", &data);
temp->info = data;
temp->link = start;
start = temp;
printf("\nEnter do you want to continue press 1 else press 0 : ");
 scanf("%d",&p);
 }
 }
void reverse()
{
	struct node *t1, *t2, *temp;
	t1 = t2 = NULL;
	if (start == NULL)
		printf("List is empty\n");

	else {

		while (start != NULL) {
			t2 = start->link;
			start->link = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;
		printf("Reversed linked ""list is : ");
	while (temp != NULL) {
	printf("%d ", temp->info);
	temp = temp->link;
	}
}
}
int searchnode(int key)
{   int index=0;
    struct node *temp = start;

    while(temp != NULL)
    {
      index++;

        if(temp->info == key)
            return index;
      

        temp = temp->link;
    }
}

void insertafter()
{       struct node *temp, *newnode;
    int pos,loc,data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter the value of node data where the would be inserted after:");
    scanf("%d ", &loc);
	printf("\nEnter the value of element to be inserted :");
	scanf("%d",&data);
    pos= searchnode(loc)+1;
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
void insertbefore(){
	 struct node *temp, *newnode;
    int pos,loc,data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter the value of node data where the would be inserted before:");
    scanf("%d""%d", &loc,&data);
    pos= searchnode(loc);
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
void insertatbegining()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	temp->link = start;
	start = temp;
}

void insertatend()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}
void deletefirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}


void deleteend()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}

void deleteafter()
{
	struct node *temp, *position;
	int i = 1, pos,vpos;

	
	if (start == NULL)
		printf("\nList is empty\n");

	
	else {
		printf("\nEnter index : ");

		scanf("%d", &vpos);
		pos=searchnode(vpos)+1;
		position = malloc(sizeof(struct node));
		temp = start;

		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		
		position = temp->link;
		temp->link = position->link;

		
		free(position);
	}
}


void deletebefore()
{
	struct node *temp, *position;
	int i = 1,pos,vpos;

	
	if (start == NULL)
		printf("\nList is empty\n");

	
	else {
		printf("\nEnter index : ");

		scanf("%d", &vpos);
		pos=searchnode(vpos)-1;
		position = malloc(sizeof(struct node));
		temp = start;

		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		
		position = temp->link;
		temp->link = position->link;

		
		free(position);
	}
}
int main()
{ 
 int choice,cc,dd;
	while (1) {
	printf("\n1 To display list\n2 create linklist\n3 Insert an element into linked list \n4 To reverse the linked list \n5 Delete an element \n6 Exit the Program");
	printf("\nEnter Choice :\n");
	scanf("%d", &choice);

		switch (choice) {
	case 1:
	display();
	break;
	case 2:
	createlist();
	break;
	case 3:
		printf("\n1 To insert element after a node  \t2 To insert element before a node  \n3 To Insert an element the begining \n4 To insert element at the end \n5To exit\n");
		printf("\nEnter Choice :\n");
	        scanf("%d", &cc);
	        switch(cc)
	        {
	        			case 1:
	        			insertafter();
					display();
					break;
					case 2:
					insertbefore();
					display();
					break;
					case 3:
					insertatbegining();
					display();
					break;
					case 4:
					insertatend();
					display();
					break;
					default:
					printf("Incorrect Choice\n");
		            }
		                                                      
        break;
        case 4:
	reverse();
	break;
	case 5:
	printf("\t1 To delete element after a node  \t2 To delete element before a node  \t3 To delete an element the begining \n4 To delete element at the end \n5To exit\n");
		printf("\nEnter Choice :\n");
	        scanf("%d", &dd);switch(dd)
	        {
	        			case 1:
	        			deleteafter();
					display();
					break;
					case 2:
					deletebefore();
					display();
					break;
					case 3:
					deletefirst(); 
					display();
					break;
					case 4:
					deleteend();
					display();
					break;
					default:
					printf("Incorrect Choice\n");
		         }
		                                                      
	        
	break;
	case 6:
	exit(1);
	break;
	default:
	printf("Incorrect Choice\n");
		}
	}
	return 0;
}



