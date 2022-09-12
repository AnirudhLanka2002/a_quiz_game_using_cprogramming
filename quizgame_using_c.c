#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void main()
{
    system("color 0b");
    // HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTextAttribute(Console,FOREGROUND_RED);
    // SetConsoleTextAttribute(Console,FOREGROUND_RED| FOREGROUND_GREEN); 
    int counter,case1,cases2,count,i,n; 
    float score;  
    char tick;  
    char player_name[20];    
    void help();   
    void new_score(char [] , float);
    void score_board();
    void time_line();

    mainhome:  
    system("cls");
    printf("\t\t\t\t\tC PROGRAM FSA PROJECT\n");
    printf("\t\t\t\t\tA team project by:\n");
    printf("\t\t\t\t\t\t\tAnirudh Sai Lanka - PES2UG21CS073\n");
    printf("\t\t\t\t\t\t\tArya Tapikar - PES2UG21CS095\n");
    printf("\t\t\t\t\t\t\tArya Prashant - PES2UG21CS094\n");  
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t Please enter your choice:");
    printf("\n\t\t\t\t\t > Press S to start the game");  
    printf("\n\t\t\t\t\t > Press V to view the Score Timeline"); 
    printf("\n\t\t\t\t\t > press H for Help            "); 
    printf("\n\t\t\t\t\t > press R for Ranking           ");
    printf("\n\t\t\t\t\t > press Q to quit             ");  
    printf("\n\t\t\t\t\t________________________________________\n\n");
    tick=toupper(getch());  

    if (tick == 'V')
    {
        time_line();
        getch();
        goto mainhome;
    }
    else if(tick == 'H')
    {
        help(); 
        getch();
        goto mainhome;
    }
    else if(tick == 'Q')
    {
        exit(1);
    } 
    else if(tick =='S')
    {
        system("cls");  

        printf("\t\t\tRegister your name here: ");
        gets(player_name);
        for(int i=0; i<strlen(player_name); i++)
        {
            if(player_name[i] == ' ')
            {
                player_name[i] = '_';
            }
        }
        system("cls");
        printf("\t\t\t>Rules: \n");
        printf("\t\t\t>This game has 2 rounds: An eligibility check round and then the Actual game.\n");
        printf("\t\t\t>Marks will be displayed at the end and can be check later on from the main menu options.\n");
        printf("\t\t\t>If you are eligible, you will be given an option to start the actual game.\n");
        printf("\t\t\t>There is no negative marking so feel free to answer the question.\n");
        printf("\t\t\t>Just incase you are wondering...No, there are no lifelines or any thing. It is purely merit based.\n");
        printf("\t\t\t\t****Have fun and good luck Amigo****\n");
        printf("\n\n\t\t\t\t>>>READY TO START? PLEASE PRESS Y TO BEGIN\n");
        printf("NOT READY? NO PROBLEMO...PLEASE PRESS ANY OTHER KEY TO GO BACK TO MAIN MENU");
        if (toupper(getch()) == 'Y')
        {
            goto test1;
        }
        else 
        {
            goto mainhome;
            system("cls");
        }
    test1:
    system("cls");
    count=0;
    for(i=1;i<=3;i++)
    {
    system("cls");
    case1=i;


    switch(case1)
    {
    case 1:
    printf("\n\nWhich sport has a penalty shot?");
    printf("\n\nA.Tennis\t\tB.Cricket\n\nC.Football/Soccer\tD.Billiards");   
    if (toupper(getch())=='C')
        {
            printf("\n\nCorrect!!!");
            count++;
            getch();
            break;
        }
    else
        {
            printf("\n\nWrong!!! The correct answer is C.Football/Soccer");
            getch();
        break;
        }

    case 2:
    printf("\n\n\nWhich flag is a signal for the F1 driver to drive into the pits?");
    printf("\n\nA.Red Flag\t\tB.Green Flag\n\nC.Black Flag\t\tD.Yellow Flag");                     
    if (toupper(getch())=='C')
        {printf("\n\nCorrect!!!");
        count++;
        getch();
        break;}
    else
        {
        printf("\n\nWrong!!! The correct answer is C.Black Flag");     
        getch();
        break;
        }

    case 3:
    printf("\n\n\nWhich animal on it's own is the least efficient animal according to Steve Jobs?");
    printf("\n\nA.Polar Bear\tB.Human\n\nC.Snake\t\tD.Chicken/Rooster");   
    if (toupper(getch())=='B')
        {printf("\n\nCorrect!!!");
        count++;
        getch();
        break;}
    else
        {
            printf("\n\nWrong!!! The correct answer is B.Human");
            getch();
            break;
        }
    
    }
    }
    }  
    if(count>=2)
	{goto test2;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
    test2:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",player_name);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{
            goto main_game;
        }
    main_game:
        counter=0;
        for(i=1;i<=15;i++)
        {
        system("cls");
        cases2=i;

        switch(cases2)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");    
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            getch();
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is C.Cricket");
            getch();
            goto score;
            break;
            }

		case 2:
		printf("\n\n\nWhat is the name if Amazon's Commertial AI?");
		printf("\n\nA.Alexa\t\tB.Siri\n\nC.Laura\t\tD.Cara");  
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            }
		else
		    {
            printf("\n\nWrong!!! The correct answer is A.Alexa");
            getch();
		    goto score;
		    break;
		    }

        case 3:
		printf("\n\n\nWhat is the name of the best and most efficient computer chip for laptop?");
		printf("\n\nA.INTEL I9\t\tB.RYZEN 9\n\nC.M1\t\t\tD.RYZEN 7 5000 SERIES");                        
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");counter++;getch();
			break;
            }
		else
		    {
            printf("\n\nWrong!!! The correct answer is C.M1");getch();
		    goto score;
		    break;
            }

        case 4:
		printf("\n\n\nWhich is the user friendly and in demand coding language currently?");
		printf("\n\nA.Python\tB.C\n\nC.C++\t\tD.C#");            
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");counter++;getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is A.Python");getch();
            goto score;
            break;
            }

        case 5:
		printf("\n\n\nAccording to HRX...Which of the following qualities is the most important?");
		printf("\n\nA.Studying hard\t\tB.Never Give Up\n\nC.Never Lie\t\tD.None");                 
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            counter++;getch(); 
            break;
            }
		else
		    {
		    printf("\n\nWrong!!! The correct answer is B.Never Give Up");
            getch();
            goto score;
            break;
            }

		case 6:
		printf("\n\n\nWhich type of material is Kevlar?");
		printf("\n\nA.Resin\t\t\t\tB.Composite Material\n\nC.Steel Reinforcing\t\tD.None");  
		if (toupper(getch())=='B' )
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is B.Composite Material");
            goto score;
            getch();
            break;
            }

        case 7:
		printf("\n\n\nWhat is the company owned by Elon Musk that Works on making google accessible using the brain alone?");
		printf("\n\nA.Tesla\t\t\tB.Hyperlink\n\nC.Space X\t\tD.Neuralink");           
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");counter++;getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is D.Neuralink");getch();
            goto score;
            break;
            }

        case 8:
		printf("\n\n\nFood Energy is measured in which of the following units?");
		printf("\n\nA.Joules\t\tB.Calories\n\nC.Ergs\t\t\tD.None");    
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch(); 
            break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is B.Calories");
            getch();
            goto score;
            break;
            }

        case 9:
		printf("\n\n\nWhat is the healthy heart rate while resting/not doing any physically exhausting work?");
		printf("\n\nA.60 - 80\t\tB.70 - 90\n\nC.Less than 50\t\tD.More than 80");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            counter++; 
            getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is A.60 - 80");
            getch();
            goto score;
            break;
            }

        case 10:
		printf("\n\n\nWhat is the saltiest ocean/Sea in the world?");
		printf("\n\nA.Dead Sea\t\tB.Nile\n\nC.Narmada\t\tD.Atlantic Ocean");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            counter++;getch(); 
            break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is A.Dead Sea");
            getch();
            goto score;
            break;
            }

        case 11:
		printf("\n\n\nWhat is the name of shape of the wings of an airplane?");
		printf("\n\nA.Bent inwards\t\tB.Straight\n\nC.Aerofoil\t\tD.Aerodynamic");
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is C.Aerofoil");
            getch();
            goto score;
            break;
            }

        case 12:
		printf("\n\n\nWho has 'money' in his name?");
		printf("\n\nA.Floyd Mayweather\t\tB.Some Random dude\n\nC.Every Athlete/Artist\t\tD.LeBron James");
		if (toupper(getch())=='A')
            {
            printf("\n\nCorrect!!!");
            counter++;
            getch();
            break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is A.Floyd Mayweather");
            getch();
            goto score;break;
            }

		case 13:
		printf("\n\n\nName a factor that affects the measure of another Variable as it changes:");
		printf("\n\nA.Dependent Variables\t\tB.Absolute variables\n\nC.Einstein's variables\t\tD.Independent variables");
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is D.Independent variables");
            getch();
            
            goto score;break;
            }

        case 14:
		printf("\n\n\nWhat was the name of the crippling disease that Helen Keller encountered as mentioned in her book?");
		printf("\n\nA.Scarlet Fever\t\tB.Covid 19\n\nC.EBD\t\tD.AIDS");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is A.Scarlet Fever");
            getch();
            goto score; break;
            }

		case 15:
		printf("\n\n\nWhich Team uses the tagline 'EE Sala Cup Namade'?");
		printf("\n\nA.LSG\t\tB.RCB\n\nC.GT\t\tD.KKR");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            counter++;
            getch();
			break; goto score;
            }
		else
            {
            printf("\n\nWrong!!! The correct answer is B.RCB");
            getch();
            goto score;
            break;
            }
        }
        }
    score:
    system("cls");
    int score_1 = 0;
    score_1= counter*100.0;
    if(counter = 0.00)
    {
        printf("\n\n\t\tYour score is 0");
        printf("\n\tBetter luck next time");
    }
    else if(score_1>0.00 && score_1<1500.00)
        {
        printf("\n\n\t\t**************** CONGRATULATIONS *****************");
        printf("\n\t You won %d",score_1);
        getch(); 
        goto go_back;
        }

        else if(score_1==1500)
        {
        printf("\n\n\n \t\t**************** CONGRATULATIONS *****************");
        printf("\n\t\t\t\t You are a winner!!!\n");
        printf("\n\t\t You won %d\n",score_1);
        printf("\t\t Thank You!!\n");
        getch();
        goto go_back;
        }
        else
        {
        printf("\n\n\t******** BETTER LUCK NEXT TIME ********");
        printf("\n\t\t Thanks for your participation");
        goto go_back;
        }
    go_back:
    system("cls");
    printf("\n\nclick Y to play again\n");
    printf("\n\nPress any other key to go back to main menu");
    if(toupper(getch()) == 'Y')
        {
            goto main_game;
        }
        else{
            new_score(player_name,score_1);
            goto mainhome;
        }
}

void help()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\t\tHELP");
    printf("\n\n\n\t\t=================================================================================================================================\n");
    printf("> \t\t\t> This game has 2 rounds: An eligibility check round and then the Actual game.\n");
    printf("> \t\t\t> Marks will be displayed at the end and can be check later on from the main menu options.\n");
    printf("> \t\t\t> If you are eligible, you will be given an option to start the actual game.\n");
    printf("> \t\t\t> There is no negative marking so feel free to answer the question.\n");
    printf("> \t\t\t> Just incase you are wondering...No, there are no lifelines or any thing. It is purely merit based.\n");
    printf(" \t\t\t\t**** Have fun and good luck Amigo ****\n");
}


void new_score(char player_name[20] , float score_1)
{
    system("cls");
    FILE *f;float sco;
    char n[20];f = fopen("scores.txt","r+");
    if (score_1 >= sco) 
    {
        sco = score_1;
        fclose(f);
        f=fopen("scores.txt","a+");
        time_t currentTime;
        time(&currentTime);
        fprintf(f,"%s %.2f %s\n",player_name,sco, ctime(&currentTime));
        
        fclose(f);   
    }
}

void time_line()
{
    system("cls");
    FILE *f; char line[100];
    f = fopen("scores.txt","r+"); printf("The Timeline:  \n");

    while(fgets(line,100,f) !=NULL)
    {
        printf("%s",line);
    }
}

