#include <stdio.h>
#include <math.h>
#include <string.h>
// #include <ncurses.h>

// This is are function that are defined and call in later part of function  

char* Maharashtra();
char* Delhi();
char* Uttar_Pradesh();
char* Madhya_Pradesh();
char* Punjab();
char* Gujarat();
char* Rajasthan();
char* Tamil_Nadu();

int Pass_Info();
int meal();

void sameState();
void differentState();

 // Information of user who is booking

 void Information()
 {

     char mail[40];
     char Mobile_Number[10];
     int otp;
     int mobile = 1;
     char Login_Id[10]; 
     char Password[20];

     printf("Enter your mail Id\n");
     scanf("%s", mail);

     printf("Enter your Mobile Number\n");

     while(mobile == 1){
       
          scanf("%s", Mobile_Number);

          if ( strlen(Mobile_Number) == 10){

              mobile++;
          }
            
          else{
             printf("Your enter Mobile Number is Incorect\nRenter the Moblie Number");
         }
      }  
     // printf("Enter your \n");
     // scanf("%s",&Login_Id);

     // printf("Enter your Mobile Number\n");
     // scanf("%s",&Password);

     //  printf("%s \n %lf", mail, Mobile_Number);

     printf("Your OTP is 1234\n");
     printf("Enter yout OTP\n");

     // while is use to verify the otp
     while (1)
     {

         scanf("%d", &otp);

         if (otp == 1234)
         {
             break;
         }
         else
         {
             printf("Your Enter OTP in invalid\n");
             printf("Renter your OTP\n");
         }
     }
 }

char* States(char** station){

    int Destination_State;

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n");
    scanf("%d",&Destination_State);

    switch (Destination_State){

        case 1:

            printf("Select the Station\n");
            return Maharashtra(&*station);
            break;
    
        case 2:

            printf("Select the Station\n");
            return Delhi(&*station);
            break;
    
        case 3:

            printf("Select the Station\n");
            return Uttar_Pradesh(&*station);
            break;
    
        case 4:

            printf("Select the Station\n");
            return Madhya_Pradesh(&*station);
            break;
    
        case 5:

            printf("Select the Station\n");
            return Punjab(&*station);
            break;
    
        case 6:

            printf("Select the Station\n");
            return Gujarat(&*station);
            break;
    
        case 7:

            printf("Select the Station\n");
            return Rajasthan(&*station);
            break;
    
        case 8:
          
            printf("Select the Station\n");
            return Tamil_Nadu(&*station); 
            break;
    
        
    default:

        printf("you have selected Wrong state\n");
        States(&*station);
        

        break;
    }


}


char *Maharashtra(char** station){

    int Railway_Station;

    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
    
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:

            *station = "Mumbai Central";
            return "Maharashtra";
            break;
        
        case 2:

            *station = "Pune Junction";
            return "Maharashtra";
            break;
    
        case 3:

            *station = "Aurangabad Station";
            return "Maharashtra";
            break;
        case 4:

            *station = "Nagpur Junction";
            return "Maharashtra";
            break;
        case 5:

            *station = "kurla Junction";
            return "Maharashtra";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            //*station = "hi";
            //return "hi";
            Maharashtra(&*station);
            break;
    }
    //return "Maharashtra";
}

char* Delhi(char** station){ 
    
    int Railway_Station;

    printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
           scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:

            *station = "Harzrat Nizamuddin";
            return "Delhi";
            break;
        
        case 2:

            *station = "New Delhi";
            return "Delhi";
            break; 
        
        default:
    
            printf("Your Enter wrong Railway Station\n");
            Delhi(&*station);
            break;
    }
    //return "Delhi";

}

char* Uttar_Pradesh(char** station){

    int Railway_Station;

    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:

            *station = "Ayodhya Junction";
            return "Uttar_Pradesh";
            break;
        
        case 2:

            *station = "Varanasi Junction";
            return "Uttar_Pradesh";
            break;
    
        case 3:

            *station = "Ghaziabad Junction";
            return "Uttar_Pradesh";
            break;
      
        case 4:

            *station = "kanpur Junction";
            return "Uttar_Pradesh";
            break;
      
        case 5:
          
            *station = "Lucknow Junction";      
            return "Uttar_Pradesh";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            Uttar_Pradesh(&*station);
            break;
    }
    //return "Uttar_Pradesh";

}

char* Madhya_Pradesh(char** station){

    int Railway_Station;

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:

            *station = "Gwalior Junction";
            return "Madhya_Pradesh";
            break;

        case 2:

            *station = "Bhopal Junction";
            return "Madhya_Pradesh";
            break;
        
        case 3:

            *station = "Indore Junction";
            return "Madhya_Pradesh";
            break;

        case 4:

            *station = "Ujjain Junction";
            return "Madhya_Pradesh";
            break;
        
        default:
          
            printf("Your Enter wrong Railway Station\n");
            Madhya_Pradesh(&*station);
            break;
    
    }
    //return "Madhya_Pradesh";
}

char* Punjab(char** station){

    int Railway_Station;
  
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:

            *station = "Amritsar Junction";
            return "Punjab";
            break;
        
        case 2:

            *station = "Patiala";
            return "Punjab";
            break;
    
        case 3:

            *station = "Jalandar";
            return "Punjab";
            break;

        default:
            
            printf("Your Enter wrong Railway Station\n");
            Punjab(&*station);
            break;
    }
    //return "Punjab";

}

char* Gujarat(char** station){

    int Railway_Station;

    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
    scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:

            *station = "Ahemdabad Junction";
            return "Gujarat";
            break;
        
        case 2:

            *station = "Surat";
            return "Gujarat";
            break;
    
        case 3:

            *station = "Rajkot Junction";
            return "Gujarat";
            break;
        
        case 4:

            *station = "Vadodara Junction";
            return "Gujarat";
            break;
       
        case 5:
          
            *station = "Gandhinagar Capital";
            return "Gujarat";
            break; 
        
        default:
            printf("Your Enter wrong Railway Station\n");
            Gujarat(&*station);
            break;
    }
    //return "Gujarat";

}

char* Rajasthan(char** station){

    int Railway_Station;

    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
    scanf("%d",&Railway_Station);



    switch (Railway_Station){
            
        case 1:

            *station = "Jaipur Junction";
            return "Rajasthan";
            break;
        
        case 2:

            *station = "Jodhapur Junction";
            return "Rajasthan";         
            break;

        case 3:

            *station = "Udaipur";
            return "Rajasthan";
            break;
        
        case 4:

            *station = "Kota Junction";
            return "Rajasthan";
            break;
        
        default:
           
            printf("Your Enter wrong Railway Station\n");
            Rajasthan(&*station);
            
            break;
    }
    //return "Rajasthan";

}

char* Tamil_Nadu(char** station){

    int Railway_Station;

    //printf("Chennai, Madurai, Coimbatore, Vellore");
    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);
        //StatesArrival();


    switch (Railway_Station){
    
        case 1:

            *station = "Chennai";
            return "Tamil_Nadu";
            break;
        
        case 2:

            *station = "Madurai";
            return "Tamil_Nadu";
            break;
    
        case 3:

            *station = "Coimbatore";
            return "Tamil_Nadu";
            break;
        case 4:

            *station = "vellore";
            return "Tamil_Nadu";
            break;
      
        default:
            printf("Your Enter wrong Railway Station\n");
            Tamil_Nadu(&*station);
            break;
    }
    
    //return "Tamil_Nadu";
}


int fareofbooking(int *fare, int class){

    // int fare = 3;

    int Number_of_pass = Pass_Info(class);

    int mealorder;
    printf("enter 1 if you want to order meal else enter 2\n");
    scanf("%d",&mealorder);

    int mealfare = 0;

    if(mealorder == 1){
        
        mealfare = meal();
    }
    //printf("fare %d. pass %d ",*fare,Number_of_pass);
    int total = Number_of_pass * (*fare);
    int total_fare = (Number_of_pass * (*fare)) + (Number_of_pass * mealfare) + 35;
    //printf("%d\n",total_fare);

    *fare = total_fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"Transaction ID :  %d \nIR recovers only 57% of cost of travel on an average\n\nPayment Details\n");

    fprintf(filePointer,"\nTicket Fare.                                                                      %d\n",total);
    fprintf(filePointer,"Catering Charges (Incl. of GST).                                                    %d\n",mealfare*Number_of_pass);
    fprintf(filePointer,"Convenices Fees(Incl. of GST).                                                      35.00\n");
    fprintf(filePointer,"Travel Insurance Premium(Incl. of GST).                                             %d\n",Number_of_pass);
    fprintf(filePointer,"Total Fare.                                                                         %d\n",total_fare);

    fclose(filePointer);
}

int Pass_Info(int class){
/*
    char* seat;

    switch(class){
        case 1:
            *seat = "A1";
            break;

        case 2:
            *seat = "H2";
            break;

        case 3:
            *seat = "B7";
            break;

        case 4:
            *seat = "E3";
            break;

        case 5:
            *seat = "S9";
            break;

        case 6:
            *seat = "D3";
            break;

        default:
            *seat = "Genral";

    }*/

    int Number_of_pass;
    int NUm = 1;
    printf("Enter the number of travellers\n");
    scanf("%d",&Number_of_pass);

    char nameofpass[Number_of_pass][10];
    int ageofpass[Number_of_pass];
    int genderofpass[Number_of_pass];

    FILE *filePointer ; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"Passenger Detail\n");
    fprintf(filePointer,"#                      Name                                         Age                  Gender                 seat.no\n");



    for(int i = 0; i < Number_of_pass; i++){

        //*nameofpass[i] = "          ";        
        printf("Enter the name of p%d:\n",i+1);
        scanf("%s",nameofpass[i]);

        printf("Enter age:\n");
        scanf("%d",&ageofpass[i]);

        printf("Enter the Gender\n1. Male\n2. Female \n3. Other\n");
        scanf("%d",&genderofpass[i]);

        
        fprintf(filePointer,"P %d                   %s                                          %d                  %d                        %d\n\n",NUm,nameofpass[i],ageofpass[i],genderofpass[i],class+20+i);
        NUm++;
    }

        //fprintf(filePointer,"Transaction ID :  \n IR recovers only 57 of cost of travel on an average\nPayment Details\n");
    fclose(filePointer);
    return Number_of_pass;
}

int meal(){

    int mealoption; 

    printf("1. Veg Meal (Standard Casserole)\n2. Non-Veg Meal Standard Casserole (Egg Curry with Rice)\n3. Non-Veg Meal Standard Casserole (Chicken Curry with Rice)\n");
    scanf("%d",&mealoption);

    switch(mealoption){

        case 1:
            
            printf("Veg Meal\n");
            return 80;
            
            break;

        case 2:
            
            printf("Non-Veg (egg) Meal\n");
            return 90;

            break;

        case 3:
            
            printf("Non-Veg (chicken) Meal\n");
            return 130;

            break;

        default:
           
           printf("you haven't selected any meal\n");
    }
}

void pay()
{
    // payment method option
    int pay_method;

    // otp verfication
    int BankOTP;

    // NetBanking
    int NameOfBank;
    char BankName[20];
    char NetBankingLoginId[15];
    char NetBankingPassword;

    // UPI
    char UPI_ID[15];

    // Card Payment
    double Card_Number;
    char Card_Holder_Name[10];
    int ExpMonth;
    int ExpMonth_Verfiy;
    int ExpYear;
    int ExpYear_Verfiy;
    int Card_CVV;
    int Card_CVV_Verfiy;

    printf("Select the Payment method from following\n");
    printf("1. Netbanking\n2. UPI\n3. Debit/Credit Card\n");
    scanf("%d", &pay_method);

    // switch case is use to select the payment method

    switch (pay_method){
        
        // NET BANKING PAYMENT METHOD
        case 1:
    
            printf("Select from Following Banks\n");
            printf("1. State Bank Of India\n2. HDFC\n3. ICICI\n4. Cannar Bank\n5. Yes Bank\n6. Other\n");
            scanf("%d", &NameOfBank);
    
            // if Your bank name is not in list
            if (NameOfBank == 6){
    
                printf("Enter your Bank Name\n");
                scanf("%s", BankName);
    
                printf("Enter Your Login Id\n");
                scanf("%s", NetBankingLoginId);
    
                printf("Enter Your Passward\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }
                    
                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP\n");
                    }
                }

                break;
            }
    
            // for bank in the list
            else{
    
                printf("Enter Your Login Id\n");
                scanf("%s", &NetBankingLoginId);
    
                printf("Enter Your Passward\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }

                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP\n");
                    }
                }
                break;
            }
        
        // UPI ID PAYMENT METHOD
        case 2:
            
            printf("Enter your UPI Id\n");
            scanf("%s", &UPI_ID);
    
            printf("Your Payment is in Process\n");
            printf("Your Payment is Succesful\n");
    
            break;
        
        // CARD PAYMENT METHOD
        case 3:
    
            printf("Enter your card number\n");
            scanf("%lf", &Card_Number);
            /*
                        for(int i = 1; i <= 16; i++){
    
                            int a = Card_Number%10;
                        }*/
    
            printf("Enter your name\n");
            scanf("%s", &Card_Holder_Name);
    
            printf("Enter your Card exp month\n");
            scanf("%d", &ExpMonth);
            
            // TO VERFIY EXP MONTH IS RIGHT
            if (ExpMonth <= 12){

                ExpMonth = ExpMonth * 10;
    
                for (int i = 1; i <= 3; i++){

                    ExpMonth_Verfiy = ExpMonth % 10;
                }
    
                if (ExpMonth_Verfiy == 0){

                }
    
                else{

                    printf("Your Entered Exp Month is wrong\n");
                    break;
                }
            }
    
            else{

                printf("Your Entered Exp Month is wrong\n");
                break;
            }
    
            printf("Enter your Card exp year\n");
            scanf("%d", &ExpYear);
            
            // TO VERFIY EXP YEAR IS RIGHT
            ExpYear = ExpYear * 10;
    
            for (int i = 1; i <= 3; i++){

                ExpYear_Verfiy = ExpYear % 10;
            }
    
            if (ExpYear_Verfiy == 0){

            }
    
            else{

                printf("Your Entered Exp Year is wrong\n");
                break;
            }
    
            printf("Enter your CVV Number\n");
            scanf("%d", &Card_CVV);
            
            // TO VERFIY CVV
            Card_CVV = Card_CVV * 10;
    
            for (int i = 1; i <= 4; i++){

    
                Card_CVV_Verfiy = Card_CVV % 10;
            }
    
            if (Card_CVV_Verfiy == 0){

            }
    
            else{

                printf("Your Entered CVV is wrong\n");
                printf("%d", Card_CVV);
                break;
            }
            
            printf("Your OTP is 1234\n");

            // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
            while (1){

                scanf("%d", &BankOTP);
                if (BankOTP == 1234){

                    printf("Your Payment is in Process\n");
                    printf("Your Payment is Succesful\n");
                    break;
                }
    
                else{

                    printf("you have Enter wrong OTP\n");
                    printf("Renter the OTP\n");
                }
            }
    
            break;
    
        default:
    
            printf("You have selected wrong option\n");
        }
}

void CSMT_Rajdhani(){

    printf("092347  CSMT Rajdhani\n");
    printf("Departure             Arrival\n");
    printf("  18:43                09:23\n");
    printf(" 3A     2A     1A\n");
    printf(" AVL    AVL    AVL\n");
    printf(" 30     40     93\n");
    printf("$3135  $4254  $5342\n");

}

int CSMT_Rajdhani_Booking(int *class){
    
    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  14:55                                                    18:15\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    
    int fare;

    printf("Select class\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 3:

            printf("you have selected 3A\n");
            fprintf(filePointer,"%d                                      092347 CSMT Rajdhani                   (AC) 3A \n");
            fare = 3135;
            return fare;
            break;

        case 2:

            printf("you have selected 2A\n");
            fprintf(filePointer,"%d                                     092347 CSMT Rajdhani                   (AC) 2A \n");
            fare = 4254;
            return fare;
            break;


        case 1:

            printf("you have selected 1A\n");
            fprintf(filePointer,"%d                                    092347 CSMT Rajdhani                   (AC) 1A \n");
            fare = 5342;
            return fare;
            break;


        default:

            printf("Your selected option is not avl\n");
            //return CSMT_Rajdhani_Booking();

    }

}

      
void AJMER_SHATABDI(){


    printf("12015  AJMER SHATABDI\n");
    printf("Departure             Arrival\n");
    printf("  16:10                21:40\n");
    printf("  CC      EC\n");
    printf("  AVL     AVL\n");
    printf("  30      30\n");
    printf("Rs.700   Rs.800\n");


}


int AJMER_SHATABDI_Booking(int* class){

    int fare;

  //  FILE *filePointer; 
    //filePointer = fopen("Untitled.txt","a");
    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  16:10                                                    21:40\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    //fclose(filePointer);

    printf("Select class1\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) CC \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) EC \n");
            return fare;
            break;


        /*case 1:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 1A \n");
            return fare;
            break;
            */


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

void DEE_JP_DOUBLE_DECKER(){

    printf("12985   DEE_JP_DOUBLE_DECKER  \n");
    printf("Departure             Arrival\n");
    printf("  16:10                21:40\n");
    printf("  CC      EC\n");
    printf("  AVL     AVL\n");
    printf("  30      30\n");
    printf("Rs.700   Rs.800\n");


}





int DEE_JP_DOUBLE_DECKER_Booking(int *class){

    int fare;

  //  FILE *filePointer; 
    //filePointer = fopen("Untitled.txt","a");
    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  17:00                                                    22:00\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    fclose(filePointer);


    printf("Select class1\n");
    scanf("%d",&*class);

    switch (*class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) CC \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           12986   DEE_JP_DOUBLE_DECKER                  (AC) EC \n");
            return fare;
            break;


        /*case 1:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            092347  CSMT Rajdhani                  (AC) 1A \n");
            return fare;
            break;
            */


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}


void  Kerala_Express(){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  10:10                                                    17:40\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    fclose(filePointer);

    



    printf("12367 Kerala Express\n");
    printf("Departure             Arrival\n");
    printf("  10:10                17:40\n");
    printf("  2A      3A         SL\n");
    printf("  AVL     AVL        AVL\n");
    printf("  30      30          26\n");
    printf("Rs.1540   Rs.1120      Rs.660\n");

}

int  Kerala_Express_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           12367 Kerala Express                  (AC) 2A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           12367 Kerala Express                  (AC) 2A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            12367 Kerala Express                  (AC) SL \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}




void  Tamil_Nadu_Express(){


    printf("23446 Tamil Nadu Express\n");
    printf("Departure             Arrival\n");
    printf("  12:25                18:30\n");
    printf("  1A      3A      SL\n");
    printf("  AVL     AVL     AVl\n");
    printf("  30      30       24\n");
    printf("Rs.3580   Rs.1800   Rs.680\n");

}

int  Tamil_Nadu_Express_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  12:25                                                    18:30\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           23446 Tamil Nadu Express                  (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                          23446 Tamil Nadu Express                  (AC) 3A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            23446 Tamil Nadu Express                  (AC) SL \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}


void  Karnataka_Express(){


    printf("54684  Karnataka Express\n");
    printf("Departure             Arrival\n");
    printf("  11:15                19:50\n");
    printf("  1A      3A        SL\n");
    printf("  AVL     AVL       AVL\n");
    printf("  30      30        62\n");
    printf("Rs.5485   Rs.1800   Rs.645\n");

}

int Karnataka_Express_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  11:15                                                    19:50\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                          54684  Karnataka Express                   (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           54684  Karnataka Express                     (AC) 3A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            54684  Karnataka Express                  (AC) SL \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}


void  Taj_Express_Booking(){


    printf("51551  Taj Express\n");
    printf("Departure             Arrival\n");
    printf("  09:00                15:25\n");
    printf("  1A      2A        3A\n");
    printf("  AVL     AVL       AVL\n");
    printf("  30      30        45\n");
    printf("Rs.5422   Rs.3812   Rs.1620\n");

}

int  Taj_Express(){

    int class,fare;
    
    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  09:00                                                    15:25\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected 1A\n");
            fare = 700;
            fprintf(filePointer,"%d                                           51551  Taj Express                  (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected 2A\n");
            fare = 800;
            fprintf(filePointer,"%d                                           51551  Taj Express                  (AC) 2A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 3A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            51551  Taj Express                  (AC) 3A \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}


void  Goa_Express(){


    printf("15121 Goa Express\n");
    printf("Departure             Arrival\n");
    printf("  15:30                20:39\n");
    printf("  1A      2A       3A\n");
    printf("  AVL     AVL      AVL\n");
    printf("  30      30       15\n");
    printf("Rs.5131   Rs.3515  Rs.1654\n");

}

int  Goa_Express_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");
    
    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  15:30                                                    20:39\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");
    
    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                        15121 Goa Express                                     (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           15121 Goa Express                  (AC) 2A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            15121 Goa Express                  (AC) 3A \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}


void  Lucknow_Mail(){

    printf("51512  Lucknow Mail\n");
    printf("Departure             Arrival\n");
    printf("  13:15                19:40\n");
    printf("  1A      2A       3A\n");
    printf("  AVL     AVL      AVL\n");
    printf("  30      30       56\n");
    printf("Rs.5511   Rs.3485  Rs.1602\n");

}

int Lucknow_Mail_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  13:15                                                    19:40\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           51512  Lucknow Mail                  (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           51512  Lucknow Mail                  (AC) 2A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 5342;
            fprintf(filePointer,"%d                                            51512  Lucknow Mail                  (AC) 3A \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

void  NDLS_Shatabdi(){

    printf("87397  NDLS Shatabdi\n");
    printf("Departure             Arrival\n");
    printf("  14:55                18:15\n");
    printf("  1A      2A       3A\n");
    printf("  AVL     AVL      AVL\n");
    printf("  11      15       20\n");
    printf("Rs.1234   Rs.900  Rs.723\n");

}

int NDLS_Shatabdi_Booking(){

    int class,fare;

    FILE *filePointer; 
    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                              Ticket Detail\n");
    fprintf(filePointer,"Departure                                                  Arrival\n");
    fprintf(filePointer,"  14:55                                                    18:15\n");
    fprintf(filePointer,"PNR                                             Train no./Name                      Class\n");

    printf("Select class1\n");
    scanf("%d",&class);

    switch (class){
        
        case 1:

            printf("you have selected CC\n");
            fare = 700;
            fprintf(filePointer,"%d                                           87397  NDLS Shatabdi                   (AC) 1A \n");
            return fare;
            break;

        case 2:

            printf("you have selected EC\n");
            fare = 800;
            fprintf(filePointer,"%d                                           87397  NDLS Shatabdi                   (AC) 2A \n");
            return fare;
            break;


        case 3:
            printf("you have selected 1A\n");
            fare = 1200;
            fprintf(filePointer,"%d                                            87397 NDLS Shatabdi                   (AC) 3A \n");
            return fare;
            break;
            


        default:

            printf("Your selected option is not avl\n");

    }
    fclose(filePointer);

}

void Station_Details(char** arrival, char** dess){

    FILE *filePointer; 

    filePointer = fopen("Untitled-1.txt","a");

    fprintf(filePointer,"                                      Journey Details\n");
    fprintf(filePointer,"%s.                                                                                         %s\n",*arrival,*dess);
    fclose(filePointer);
}


void cancelticket()
{
    // declaring pnr
    int Cancel_Confirmation;
    char pnr[10]; 
    int pnr_verify;

    printf("You can cancel your ticket here: \n");
    printf("Please enter your 10 digit PNR number: ");

    // input of pnr

        scanf("%d", &pnr);
  

    //pnr verification

    if(strlen(pnr) == 8){  
        printf("Are you sure you want to cancel your ticket\nWARNING! You cannot undo this action once proceeded.\n");

        printf("Press 1 for Yes and Press 2 for NO - ");
        scanf("%d", &Cancel_Confirmation);


        if (Cancel_Confirmation == 1){
            
            printf("Your ticket will be cancelled. Your refund will be processed within 2-3 business days.\n");
        }
        else if (Cancel_Confirmation == 2){
            
              printf("You request has been cancelled.\n");
        }

        printf("Have a nice day.\n");
    }

    else{
        
        printf("you enter a wrong pnr\n");
        cancelticket();
    }
        
    // printf("Your PNR is: %d\n",pnr);
    //printf("\nHave a nice day.\n");
}
   

void sameState(int* fare, int class){

    *fare = 1670/class-(class*98);
}

void differentState(int* fare, int class){

    *fare = (5890/class)-(class*113);
}

void trainfunction(char** ArrivalStation, int* total_fare, int* class){

 // printf("%s",*ArrivalStation);
    int train_select;

    if(*ArrivalStation == "Mumbai Central" || *ArrivalStation == "Pune Junction" || *ArrivalStation == "Aurangabad Station" || *ArrivalStation == "Nagpur Junction" || *ArrivalStation == "New Delhi" || *ArrivalStation == "Hazrat Nizamuddin" || *ArrivalStation == "Ahmedabad Junction" || *ArrivalStation == "Surat"){
      //printf("Iam in train function");
        CSMT_Rajdhani();
        AJMER_SHATABDI();  
        DEE_JP_DOUBLE_DECKER();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                CSMT_Rajdhani_Booking(&*class);
                          
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
                AJMER_SHATABDI_Booking(&*class);

                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 3:
                      
                DEE_JP_DOUBLE_DECKER_Booking(&*class);
                             
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            default:

                printf("You seleted wrong train\n");
                  
        }
    }
    else if(*ArrivalStation == "Jaipur Junction" || *ArrivalStation == "Chennai" || *ArrivalStation == "Madurai" || *ArrivalStation == "Gwalior Junction" || *ArrivalStation ==  "Bhopal Junction" || *ArrivalStation == "Indore Junction" || *ArrivalStation == "Kanpur Central" || *ArrivalStation == "Lucknow Junction"){
      
        Kerala_Express();
        Goa_Express();
        Taj_Express();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                Kerala_Express_Booking(&*class);
                          
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
                Goa_Express_Booking(&*class);

                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 3:
                      
                Taj_Express_Booking(&*class);
                             
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            default:

                printf("You seleted wrong train\n");
                  
        }      
    }

    else if(*ArrivalStation == "Kurla" || *ArrivalStation == "Ayodhya Junction" || *ArrivalStation == "Varanasi Junction" || *ArrivalStation == "Ujjain Junction" || *ArrivalStation == "Amritsar Junction" || *ArrivalStation == "Patiala" || *ArrivalStation == "Jalandhar"){

        Karnataka_Express();
        NDLS_Shatabdi();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                Karnataka_Express_Booking(&*class);
                          
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
                NDLS_Shatabdi_Booking(&*class);

                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;



            default:

                printf("You seleted wrong train\n");
                  
        }      
    }

    else if(*ArrivalStation == "Rajkot Junction" || *ArrivalStation == "Vadodara Junction" || *ArrivalStation == "Gandhinagar Capital" || *ArrivalStation == "Jodhpur Junction" || *ArrivalStation == "Udaipur" || *ArrivalStation == "Kota Junction" || *ArrivalStation == "Coimbatore" || *ArrivalStation == "Vellore"){
      
        Lucknow_Mail();
        Goa_Express();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                Lucknow_Mail_Booking(&*class);
                          
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:

                Goa_Express_Booking(&*class);
                    
                sameState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            default:

                printf("You seleted wrong train\n");
                  
        }      
    }
  
}

void trainfunctiondiff(char** ArrivalStation, int* total_fare, int* class){

 // printf("%s",*ArrivalStation);
    int train_select;

    if(*ArrivalStation == "Mumbai Central" || *ArrivalStation == "Pune Junction" || *ArrivalStation == "Aurangabad Station" || *ArrivalStation == "Nagpur Junction" || *ArrivalStation == "New Delhi" || *ArrivalStation == "Hazrat Nizamuddin" || *ArrivalStation == "Ahmedabad Junction" || *ArrivalStation == "Surat"){
    //  printf("Iam in train function");
        CSMT_Rajdhani();
        AJMER_SHATABDI();  
        DEE_JP_DOUBLE_DECKER();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                CSMT_Rajdhani_Booking(&*class);
                          
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
			   AJMER_SHATABDI(&*class);		
                
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 3:
                      
                DEE_JP_DOUBLE_DECKER_Booking(&*class);
                             
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            default:

                printf("You seleted wrong train\n");
                  
        }
    }
    else if(*ArrivalStation == "Jaipur Junction" || *ArrivalStation == "Chennai" || *ArrivalStation == "Madurai" || *ArrivalStation == "Gwalior Junction" || *ArrivalStation ==  "Bhopal Junction" || *ArrivalStation == "Indore Junction" || *ArrivalStation == "Kanpur Central" || *ArrivalStation == "Lucknow Junction"){
      
        Tamil_Nadu_Express();
        Kerala_Express();
        Taj_Express();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                Tamil_Nadu_Express_Booking(&*class);
                
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:

                Kerala_Express_Booking(&*class);
                    
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;
				
		   case 3:
                      
                Taj_Express_Booking(&*class);

				differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;


            default:

                printf("You seleted wrong train\n");
                  
        }	  
    }

    else if(*ArrivalStation == "Kurla" || *ArrivalStation == "Ayodhya Junction" || *ArrivalStation == "Varanasi Junction" || *ArrivalStation == "Ujjain Junction" || *ArrivalStation == "Amritsar Junction" || *ArrivalStation == "Patiala" || *ArrivalStation == "Jalandhar"){

        NDLS_Shatabdi();
        Goa_Express();

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                NDLS_Shatabdi_Booking(&*class);
                          
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
                Goa_Express_Booking(&*class);

                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            default:

                printf("You seleted wrong train\n");
                  
        }      
    }

    else if(*ArrivalStation == "Rajkot Junction" || *ArrivalStation == "Vadodara Junction" || *ArrivalStation == "Gandhinagar Capital" || *ArrivalStation == "Jodhpur Junction" || *ArrivalStation == "Udaipur" || *ArrivalStation == "Kota Junction" || *ArrivalStation == "Coimbatore" || *ArrivalStation == "Vellore"){

        printf ("Select a train\n");
        scanf("%d",&train_select);
     //   trainfunction(&ArrivalStation).  
          
        switch(train_select){
                
            case 1:
                      
                Karnataka_Express_Booking(&*class);
                          
                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;

            case 2:
                    
                Lucknow_Mail_Booking(&*class);

                differentState(&*total_fare,*class);
                fareofbooking(&*total_fare,*class);
                pay();
                break;


            default:

                printf("You seleted wrong train\n");
                  
        }      
    }
   
  
}

int main(){
  
    int Operation;
    // int train_select;

    char *ArrivalStation;
    char *DistinationStation;
    
    char* arrivalState [20];
    char* DestinationState [20];

    int total_fare,class;

    printf("1.Ticket Booking\n2.Cancel Ticket\n");
    scanf("%d",&Operation);

    switch(Operation){

        case 1:

            Information();
            
            printf("Select the Distination State\n");
            
            *arrivalState = States(&ArrivalStation);
            
            printf("Select the Arrival State\n");
            
            *DestinationState = States(&DistinationStation);

            Station_Details(&ArrivalStation,&DistinationStation);
            
      
            if (strcmp(*arrivalState,*DestinationState) == 0){
                if(strcmp(ArrivalStation,DistinationStation) == 0){
                    
                    printf("You have selected same station\n");
                }
                else{

                //   sameState(&total_fare, &class); 
                    trainfunction(&ArrivalStation,&total_fare,&class);;

                }  
            } 

            else{

                 //    differentState(&total_fare,&class);
                trainfunctiondiff(&ArrivalStation,&total_fare,&class);
            }
      
            break;

        case 2:
          
            cancelticket();
            break;

        default:

            printf("You have Seleleted wrong Option");    
    }

    return 0;
}