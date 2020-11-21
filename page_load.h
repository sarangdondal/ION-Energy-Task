#include <iostream>
using namespace std;
#include<string.h>

class Webpage
{
public:
	string page_data;
	bool current_page_status;
	Webpage *next_page;
	Webpage *prev_page;
	Webpage(string page_data)
	{
		this->page_data = page_data;
		this->current_page_status=false;
		this->next_page = NULL;
		this->prev_page = NULL;
	}
};

Webpage *traverse_webpage(Webpage *head_webpage);
void delete_pages(Webpage* delete_page);
void print_page_data(Webpage* current_page);


Webpage *load_new_page(Webpage *head_webpage ,Webpage* new_page){



    if(head_webpage == NULL){

        new_page -> current_page_status = true;
        return new_page;
    }

    Webpage *current_page=traverse_webpage(head_webpage);


    if(current_page == NULL){

        cout << "You are on Browser page(NULL)" <<endl;
        return NULL;
    }

    if(current_page ->next_page==NULL){

        current_page ->next_page = new_page;
        new_page -> prev_page = current_page;
        current_page->current_page_status = false;
        new_page->current_page_status = true;
        current_page=new_page;


    }

    else{

        Webpage *delete_page = current_page ->next_page;
        delete_pages(delete_page);
        current_page ->next_page = new_page;
        new_page -> prev_page = current_page;
        current_page->current_page_status = false;
        new_page->current_page_status = true;
        current_page=new_page;

    }

    return current_page;
}

Webpage *traverse_webpage(Webpage *head_webpage){

   /* if(head_webpage==NULL){
       return NULL;
   }


        if(head_webpage -> current_page_status == true){
            return head_webpage;
        }

    Webpage* current_page= traverse_webpage(head_webpage -> next_page);
    return current_page;*/

    while(head_webpage->current_page_status!=true){

        head_webpage= head_webpage->next_page;
    }

    return head_webpage;

}

void delete_pages(Webpage* delete_page){

    while(delete_page->next_page != NULL){
    delete_page = delete_page -> next_page;

        }

    while(delete_page == NULL){

        Webpage* temp= delete_page;
        delete_page= delete_page->prev_page;
        delete temp;
            }
}

Webpage* back_page(Webpage *current_page){

    if(current_page->prev_page == NULL){

         cout<<endl;
         cout<<"*************************************NO BACK PATH. FIRST LOAD NEW PAGE*****************************" <<endl;
        return current_page;
    }

    else{


        current_page->current_page_status=false;
        current_page->prev_page->current_page_status=true;
        current_page= current_page->prev_page;
        return current_page;

    }

}

Webpage* front_page(Webpage *current_page){

    if(current_page->next_page == NULL){

        cout<<endl;
        cout<<"************************************NO FRONT PATH. FIRST LOAD NEW PAGE*****************************" <<endl;
        return current_page;
    }

    else{


        current_page->current_page_status=false;
        current_page->next_page->current_page_status=true;
        current_page= current_page->next_page;
        return current_page;

    }

}

void print_page_data(Webpage *webpage){

    cout<< webpage->page_data<< endl;

}

