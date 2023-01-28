#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<cstring>
using namespace std;
struct book{
    char name[30];
    char author[30];
    int id;
    struct book *next;
};

struct student{
    char name[30];
    char email[30];
    char book[30];
    char a[30];
    int id;
    struct student *next;
};

struct book *start_lib=NULL;
struct student *start=NULL;
struct book *initialize_lib(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
struct book *diplay_lib(struct book *);
struct book *delete_book(int);
struct book *add_book(char [],char [],int);
void display(struct student *);
void greetings();
void main_menu();

int main(){
    start_lib=initialize_lib(start_lib);
    greetings();
    main_menu();
    return 0;
}

void greetings(){
    cout<<("\n\n");
    cout<<("\t\t\t          * * * * * * * * * * * * * * * * * * * * *\n");
    cout<<("\t\t\t          *                                       *\n");
    cout<<("\t\t\t          *                                       *\n");
    cout<<("\t\t\t          *      ----------------------------     *\n");
    cout<<("\t\t\t          *         WELCOME TO MVGR COLLEGE       *\n");
    cout<<("\t\t\t          *      ----------------------------     *\n");
    cout<<("\t\t\t          *                                       *\n");
    cout<<("\t\t\t          *                                       *\n");
    cout<<("\t\t\t          * * * * * * * * * * * * * * * * * * * * *\n");
    cout<<("\n\n");
    cout<<("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    cout<<("\t\t\t     *                                               *\n");
    cout<<("\t\t\t     *            ------------------------           *\n");
    cout<<("\t\t\t     *                CENTRAL LIBRARY                *\n");
    cout<<("\t\t\t     *            ------------------------           *\n");
    cout<<("\t\t\t     *                                               *\n");
    cout<<("\t\t\t     *                                               *\n");
    cout<<("\t\t\t     *       Vizianagaram,Andhra Pradesh,India       *\n");
    cout<<("\t\t\t     *         Email: studentlib@gmail.com           *\n");
    cout<<("\t\t\t     *        Contact:8800991010,8800992020          *\n");
    cout<<("\t\t\t     *                                               *\n");
    cout<<("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    cout<<("\n\n");
}

void main_menu(){
    int choice;
    do{
        cout<<("\n\n");
        cout<<("\n\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *\n");
        cout<<("\n\t\t\t\t\t      MAIN MENU: ");
        cout<<("\n\t\t\t\t\t     1.ISSUE OF BOOKS ");
        cout<<("\n\t\t\t\t\t     2.RETURN OF BOOKS ");
        cout<<("\n\t\t\t\t\t     3.DISPLAY STUDENT DETAILS ");
        cout<<("\n\t\t\t\t\t     4.EXIT\n ");
        cout<<("\n\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *\n");
        cout<<("\n\t\t\t\t\t      Enter your choice: ");
        cin>>(choice);
        switch(choice){
            case 1:{
                start=book_issue(start);
                break;
            }
            case 2:{
                start=book_return(start);
                break;
            }
            case 3:{
                display(start);
                break;
            }
            case 4:{
                exit(1);
            }
            default:{
                cout<<("\n\t\t\t\t      ...Invalid Option!...\n");
            }
        }
    }while(choice!=4);
}

struct book *initialize_lib(struct book *start){
    struct book *ptr,*new_book1,*new_book2,*new_book3,*new_book4,*new_book5;

    new_book1=(struct book *)malloc(sizeof(struct book));
    new_book1->next=NULL;
    start_lib=new_book1;
    strcpy(new_book1->name,"OOP with Python");
    strcpy(new_book1->author,"Mark Lutz");
    new_book1->id=101;
    ptr=new_book1;

    new_book2=(struct book*)malloc(sizeof(struct book));
    new_book2->next=NULL;
    strcpy(new_book2->name,"OOP with C++");
    strcpy(new_book2->author,"Reema Thareja");
    new_book2->id=102;
    ptr->next=new_book2;
    ptr=new_book2;

    new_book3=(struct book*)malloc(sizeof(struct book));
    new_book3->next=NULL;
    strcpy(new_book3->name,"OOP through Java");
    strcpy(new_book3->author,"Herbert Schildt");
    new_book3->id=103;
    ptr->next=new_book3;
    ptr=new_book3;

    new_book4=(struct book*)malloc(sizeof(struct book));
    new_book4->next=NULL;
    strcpy(new_book4->name,"Higher Ebgineering Mathematics");
    strcpy(new_book4->author,"B.S.Grewal");
    new_book4->id=104;
    ptr->next=new_book4;
    ptr=new_book4;

    new_book5=(struct book*)malloc(sizeof(struct book));
    new_book5->next=NULL;
    strcpy(new_book5->name,"Computer System Architecture");
    strcpy(new_book5->author,"Morris Mano");
    new_book5->id=105;
    ptr->next=new_book5;

    return start_lib;
}

struct student *book_issue(struct student *start){
    struct book *ptr;
    struct student *ptr2,*new_student;
    int i=1,id,flag=0;
    if(start_lib==NULL){
        cout<<("\n\t\t\t\t No books left in the library to issue!\n\t\t\t\t Sorry for the inconvenience!\n");
    }else{
        system("cls");
        ptr=start_lib;
        cout<<("\n\t* * * * * * * * * * * Books Available: * * * * * * * * * * *\n");
        while(ptr!=NULL){
            cout<<("\n\t_________________________________________________________\n");
            cout<<("\n\t Book %d",i);
            cout<<("\n\t Book Title: %s",ptr->name);
            cout<<("\n\t Name of Author: %s",ptr->author);
            cout<<("\n\t Book ID: %d",ptr->id);
            cout<<("\n\t_________________________________________________________\n");
            ptr=ptr->next;
            i++;
        }
        cout<<("\n\n\t Enter the Book ID: ");
        cin>>(id);
        ptr=start_lib;
        while(ptr!=NULL){
            if(ptr->id==id){
                flag=1;
                break;
            }
            ptr=ptr->next;
        }
        if(flag==1){
            ptr=start_lib;
            while(ptr->id!=id){
                ptr=ptr->next;
            }
            new_student=(struct student *)malloc(sizeof(struct student));
            cout<<("\n\t Enter Student Details:\n ");
            cout<<("\n\t Enter your Name: ");
            cin>>("%s",new_student->name);
            cout<<("\n\t Enter your Email: ");
            cin>>("%s",new_student->email);
            strcpy(new_student->book,ptr->name);
            strcpy(new_student->a,ptr->author);
            new_student->id=ptr->id;
            new_student->next=NULL;
            cout<<("\n\t Issue of Book ID %d done successfully!\n",new_student->id);
            cout<<("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
            if(start==NULL){
                start=new_student;
            }else{
                ptr2=start;
                while(ptr2->next!=NULL){
                    ptr2=ptr2->next;
                }
                ptr2->next=new_student;
            }
            start_lib=delete_book(new_student->id);
        }else{
            cout<<("\n\t\t      ...Invalid Option!...\n");
        }
    }
    return start;
}

struct student *book_return(struct student *start){
    struct student *ptr,*preptr;
    char bookname[30],authorname[30];
    int flag=0,id,identity,c=0,d=1;
    cout<<("\n\n\t* * * * * * * * * * * * * Books Submission: * * * * * * * * * * *\n");
    cout<<("\n\n\t Enter your Book ID: ");
    cin>>(identity);
    ptr=start;
    while(ptr!=NULL){
        if(ptr->id==identity){
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==1){
        ptr=start;
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }
        ptr=start;
        while(ptr->id!=identity){
                d++;
            ptr=ptr->next;
        }
        ptr=start;
        if( d==1 ){
            cout<<("\n\t_________________________________________________________________\n");
            cout<<("\n\t\t Student Name: %s",start->name);
            cout<<("\n\t\t Student Email: %s",start->email);
            cout<<("\n\t\t Name of Book Issued: %s",start->book);
            cout<<("\n\t_________________________________________________________________\n");
            cout<<("\n\n\t Return of Book ID %d done successfully!\n",identity);
            cout<<("\n\n\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
            strcpy(bookname,start->book);
            strcpy(authorname,start->a);
            id=start->id;
            start=start->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }else{
            ptr=start;
            while(ptr->id!=identity){
                preptr=ptr;
                ptr=ptr->next;
            }
            cout<<("\n\t______________________________________________________\n");
            cout<<("\n\t Student Name: %s",ptr->name);
            cout<<("\n\t Student Email: %s",ptr->email);
            cout<<("\n\t Name of Book Issued: %s",ptr->book);
            cout<<("\n\t Book ID: %d",ptr->id);
            cout<<("\n\t______________________________________________________\n");
            strcpy(bookname,ptr->book);
            strcpy(authorname,ptr->a);
            id=ptr->id;
            preptr->next=ptr->next;
            free(ptr);
            add_book(bookname,authorname,id);
        }
        cout<<("\n\t Thank you! \n\t Do visit again! ");
    }else{
        cout<<("\n\tSorry the book doesn't exist! Please recheck the entered ID");
    }
    return start;
}

void display(struct student *start){
    struct student *ptr;
    ptr=start;
    if(ptr!=NULL){
        cout<<("\n\t\t* * * * * * * * * * Details of Students: * * * * * * * * * *\n");
        cout<<("\n\t\t____________________________________________________________\n");
        cout<<("\n\t\t\t Student Name: %s",ptr->name);
        cout<<("\n\t\t\t Student Email: %s",ptr->email);
        cout<<("\n\t\t\t Name of Book Issued: %s",ptr->book);
        cout<<("\n\t\t\t Book ID: %d",ptr->id);
        cout<<("\n\t\t____________________________________________________________\n");
        cout<<("\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
        ptr=ptr->next;
    }
    else
    cout<<("\n\n\t No Books have been taken.");
}

struct book *delete_book(int id){
    struct book *ptr,*preptr;
    int c=0;
    ptr=start_lib;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    if(c==1){
        ptr=start_lib;
        start_lib=NULL;
        free(ptr);
    }else if(start_lib->id==id){
        ptr=start_lib;
        start_lib=start_lib->next;
        free(ptr);
    }else{
        ptr=start_lib;
        while(ptr->id!=id){
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=ptr->next;
        free(ptr);
    }
    return start_lib;
}

struct book *add_book(char bookname[30],char authorname[30],int id){
    struct book *ptr,*new_book;
    new_book=(struct book *)malloc(sizeof(struct book));
    strcpy(new_book->name,bookname);
    strcpy(new_book->author,authorname);
    new_book->id=id;
    new_book->next=NULL;
    if(start_lib==NULL){
        start_lib=new_book;
    }else{
        ptr=start_lib;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_book;
    }
    return start_lib;
}