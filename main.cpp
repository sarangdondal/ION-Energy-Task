#include <iostream>
#include<stdint.h>
#include "page_load.h"
#include "pages_defination.h"
#include "print_hirearchy.h"

using namespace std;

int main()
{

    load_new_page(NULL,browser_page);
    print_page_data(browser_page);


    char key='p';
    cin>>key;

    while(key != '1'){

        cout<<"Not a valid entry.To load www.google.com Please enter 1 and press enter"<<endl;
        key= fgetc(stdin);


    }


    Webpage* current_page=load_new_page(browser_page,Google_search_page);
    print_page_data(current_page);

    print_hierarchy();
    cout<<endl;


    char choice;
    cin>> choice;

    while(choice!='C'){

    if(current_page==Google_search_page){


    switch (choice)
   {
       case '1': {
                 current_page = load_new_page(browser_page, ionenergy_home_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }
       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<< "Please enter the valid page number"<<endl;
                break;
   }


    }

    else if(current_page==ionenergy_home_page){


    switch (choice)
   {

      case '1': {

                 current_page = load_new_page(browser_page, ionenergy_platform_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }
       case '2': {
                 current_page = load_new_page(browser_page, ionenergy_application_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }
       case '3': {
                 current_page = load_new_page(browser_page, ionenergy_company_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<< "Please enter the valid page number"<<endl;
                break;
   }
    }

    else if(current_page==ionenergy_platform_page){


    switch (choice)
   {
        case '1': {
                 current_page = load_new_page(browser_page, ionenergy_battery_des_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '2': {
                 current_page = load_new_page(browser_page, ionenergy_battery_Man_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '3': {
                 current_page = load_new_page(browser_page, ionenergy_Edison_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<<"Please enter the valid page number"<<endl;
                break;
   }


    }


    else if(current_page==ionenergy_application_page){


    switch (choice)
   {
        case '1': {
                 current_page = load_new_page(browser_page, ionenergy_electric_2_3_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '2': {
                 current_page = load_new_page(browser_page, ionenergy_pass_comm_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '3': {
                 current_page = load_new_page(browser_page, ionenergy_ind_vehicle_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<< "Please enter the valid page number"<<endl;
                break;
   }


    }

    else if(current_page==ionenergy_company_page){

    switch (choice)
   {
        case '1': {
                 current_page = load_new_page(browser_page, ionenergy_about_us_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '2': {
                 current_page = load_new_page(browser_page, ionenergy_Media_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case '3': {
                 current_page = load_new_page(browser_page, ionenergy_Event_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<< "Please enter the valid page number"<<endl;
                break;
   }


    }

   else{



    switch (choice)
   {
       case 'b': {
                 current_page = back_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

        case 'f': {
                 current_page = front_page(current_page);
                 cout<<endl;
                 print_page_data(current_page);
                 cout<<endl;
                 break;
                 }

       default: cout<< "Please enter the valid page number"<<endl;
                break;
   }


    }

    print_hierarchy();


    cout<<endl;
    cin>>choice;

    }





    }




