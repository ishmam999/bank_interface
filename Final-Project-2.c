/*NAME      : Ishmam Islam  ,  
SUBJECT     :              PROGRAMMING
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	system("title Final Project");// For showing the tiitle as FINAL PROJECT.
	system("color 70");// Colouring background and font.
	
	int num, a, b , c , d , e , f , m , n , r , x , y[10]={1,2,3,4,5,6}, date, month, year, ndate, nmonth, nyear;
	double mi, k, l;
	char pnmbr[11], mnmbr[11], onmbr[11], nnmbr[11];
	char name[100], uname0[24],pswrd0[32],uname1[24],pswrd1[32],uname2[24], pswrd2[32] ;
	char title[4], fname[50], mname[50], sname[50], skip[2], fthrname[100], mthrname[100], msts[10], gndr[5], psprt[11], tob[50], cob[50], ntnlty[50], email[50], ocptn[50];
	char ntitle[4], nname[100], rltnwthn[100], npsprt[11], nntnlty[50], nocptn[50], nemail[50];
	int  randNo;
	
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t     WELCOME\n\n");
	printf("\t\t\t\t       TO\n\n");
	printf("\t\t\t       A I U B    B A N K\n\n\n\n\n\n\t\t\t\t\t\t");
	printf ("\n\n\tPlease write your name: (MR./MRS./MS./MISS) ");
	scanf("%s", name);// User will give his/her name as he/she prefers to call him/her.
	printf("\n\n\n\t\t\t\t\t\t");
	
	system("pause");//This function will pause the program. 
	
	LOOP: system("cls");//This function will open a new page.
	
	printf("\n\n\n\n\n\tHow can we help you Mr./Mrs. %s?\n\n", name);
	printf("\t\t1 ) Create an account\n\n");
	printf("\t\t2 ) Inquiry about packages\n\n");
	printf("\t\t3 ) Login System for Authorized Bankers\n\n");
	printf("\t\t4 ) Login System for customer\n\n");
	printf("\t\t5 ) About\n\n");
	printf("\t\t==> Press 0 to End This Program");
	printf("\n\n\t\t==> Kindly choose an option from above :  ");

	do
	{
		scanf("%d", &x);//User will choose an option.
		switch(x)
		{	
			case 1: system("cls");
			printf("\tWhat kind of account do you want to open?\n\n\n");
			printf("\t\t%d ) Current Account\n\n", y[0]);
			printf("\t\t%d ) Savings Account\n\n",y[1]);
			printf("\t\t%d ) Term Deposit Account\n\n",y[2]);
			printf("\t\t%d ) Special Savings(Pension) Account\n\n",y[3]);
			printf("\t\t%d ) Foreign Currency Deposit Account\n\n",y[4]);
			printf("\t\t%d ) Student Account\n\n",y[5]);
			printf("\t\t===> Press 0 to end this program.\n\n");
			printf("\t\t===> Kindly choose an option from above : ");
			scanf("%d",&c);//User will choose a package which type of account he/she wants to open.
			if(c==0)
			{
				goto END;//This option will end this program.
			}
			else if(c==1)
			{
				system("cls");
				//User will give his/her Personal and Nominee details.
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);// This funtion used for to run the next gets() function. Because program miss the first get() for buffering.
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *            : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\t\t\tNOMINEE DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");//User will give space among date,month and year.
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515010%d\n", randNo);//User will get an unique account number if he/she uses the 'CREATE AN ACCOUNT' option without ending this program completely. 
    			k = (double)10751501000000 + randNo;
	    		printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
	    		printf("  \nThanks for opening an account with us.\n");
	    		printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    		OPTION: scanf("%d", &d);
	    		switch(d)
    			{
	    			case 1 : goto LOOP;break;
	    			case 2 : goto END;break;
	    			default: printf("\a    Invalid!!! Please choose a valid option from above: ");// '\a' This will give a sound.
	    			goto OPTION;//This function takes the program to the line starts with "OPTION" .
				}
			}
			else if(c==2)
			{
				system("cls");
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *            : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\t\t\tNOMINEE DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515020%d\n", randNo);
    			k = (double)10751502000000 + randNo;
    			
				printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
    			printf("  Thanks for opening an account with us.\n");
    			printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    			scanf("%d", &d);
    			switch(d)
    			{
    				case 1 : goto LOOP; break;
    				case 2 : goto END; break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    				goto OPTION;
				}
				
			}
			else if(c==3)
			{
				system("cls");
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *            : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\t\t\tNOMINEE DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515030%d\n", randNo);
    			k = (double)10751503000000 + randNo;
    			
				printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
    			printf("  Thanks for opening an account with us.\n");
    			printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    			scanf("%d", &d);
    			switch(d)
    			{
    				case 1 : goto LOOP;break;
    				case 2 : goto END;break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    				goto OPTION;
				}
			}
			else if(c==4)
			{
				system("cls");
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *            : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\t\t\tNOMINEE DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515040%d\n", randNo);
    			k = (double)10751504000000 + randNo;
    			
				printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
    			printf("  Thanks for opening an account with us.\n");
    			printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    			scanf("%d", &d);
    			switch(d)
    			{
    				case 1 : goto LOOP;break;
    				case 2 : goto END;break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    				goto OPTION;
				}
		
			}
			else if(c==5)
			{
				system("cls");
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *  (IN US$)  : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\t\t\tNOMINEE DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515050%d\n", randNo);
    			k = (double)10751505000000 + randNo;

				printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
    			printf("  Thanks for opening an account with us.\n");
    			printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    			scanf("%d", &d);
    			switch(d)
    			{
    				case 1 : goto LOOP;break;
    				case 2 : goto END;break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    				goto OPTION;
				}
			}
			else if(c==6)
			{
				system("cls");
				printf("'*' INDICATED INFORMATION MUST BE GIVEN\n\n");
				printf("\t\t\t\tPERSONAL DETAILS :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &title);
				printf("  FIRST NAME *                : ");
				scanf("%s", &fname);
				printf("  FAMILY/SURNAME *            : ");
				scanf("%s", &sname);
				printf("  MIDDLE NAME                 : ");
				scanf("%s", &mname);
				printf("  FATHER'S NAME *             : ");
				gets(skip);
				gets(fthrname);
				printf("  MOTHER'S NAME *             : ");
				gets(mthrname);
				printf("  MARITAL STATUS*             : (Married/Unmarried/Divorced/Widow) ");
				scanf("%s", &msts);
				printf("  GENDER*(Male/Female/OTHER)  : ");
				scanf("%s", &gndr);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &psprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &date);
				scanf("%d", &month);
				scanf("%d", &year);
				printf("  TOWN/CITY OF BIRTH          : ");
				scanf("%s", &tob);
				printf("  COUNTRY OF BIRTH *          : ");
				scanf("%s", &cob);
				printf("  NATIONALITY *               : ");
				scanf("%s", &ntnlty);
				printf("  OCCUPATION *                : ");
				scanf("%s", &ocptn);
				printf("  MONTHLY INCOME *            : ");
				scanf("%lf", &mi);
				printf("  PHONE NUMBER *              : ");
				scanf("%s", &pnmbr);
				printf("  MOBILE NUMBER               : ");
				scanf("%s", &mnmbr);
				printf("  OFFICE NUMBER               : ");
				scanf("%s", &onmbr);
				printf("  E-MAIL ADDRESS *            : ");
				scanf("%s", &email);
				printf("\n\t\tNOMINEE(FATHER/MOTHER/LOCAL GUARDIAN) DETAILS   :\n\n");
				printf("  TITLE(MR./MRS./MS./MISS) *  : ");
				scanf("%s", &ntitle);
				printf("  FULL NAME *                 : ");
				gets(skip);
				gets(nname);
				printf("  PASSPORT NO *               : ");
				scanf("%s", &npsprt);
				printf("  DATE OF BIRTH*(DD MM YYYY)  : ");
				scanf("%d", &ndate);
				scanf("%d", &nmonth);
				scanf("%d", &nyear);
				printf("  CONTACT NUMBER *            : ");
				scanf("%s", &nnmbr);
				printf("  E-MAIL *                    : ");
				scanf("%s", &nemail);
				printf("  RELATION WITH NOMINEE *     : ");
				gets(skip);
				gets(rltnwthn);
				printf("  OCCUPATION   *              : ");
				gets(nocptn);
				printf("\n\n\tSIGN UP FOR LOG-IN SYSTEM OF OUR CUSTOMERS :\n");
				printf("\n\n\tUSERNAME            : ");
				scanf("%s" , &uname1);
				printf("\n\tPASSWORD            : ");
				scanf("%s" , &pswrd1);
				
				randNo = 12345 + rand() % (34521 - 12345 + 1);
     			printf("\n  Your account number : 107515060%d\n", randNo);
    			k = (double)10751506000000 + randNo;

				printf("  Please keep it down for future purpose.\n\n  ");
	    		printf("Kindly submit the required documents along with the amount of money in a week.\n");
				system("pause");
    			printf("  Thanks for opening an account with us.\n");
    			printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    			scanf("%d", &d);
    			switch(d)
    			{
    				case 1 : goto LOOP;break;
    				case 2 : goto END;break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    				goto OPTION;
				}
			}
			
			break;
		
			case 2: system("cls");
			printf("\tWhat kind of account do you want to know about?\n\n");
			printf("\t\t%d) Current Account\n\n", y[0]);
			printf("\t\t%d) Savings Account\n\n",y[1]);
			printf("\t\t%d) Term Deposit Account\n\n",y[2]);
			printf("\t\t%d) Special Savings(Pension) Account\n\n",y[3]);
			printf("\t\t%d) Foreign Currency Deposit Account\n\n",y[4]);
			printf("\t\t%d) Student Account\n\n",y[5]);
			
			printf("\t\tPlease choose an option from above : ");
			
			do
			{
				scanf("%d", &r);//User will get the information of any account which he/she wants to know.
			
				if(r==1)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("\t\n\n\n\tAIUB Bank operates Current Account on the principles of Dhaka. The \nBank commits to refund money deposited in these Accounts on the demand of customers. On the other hand the Bank takes permission from customers that the Bank \nmay utilize their money. Customers may operate these Accounts as their desires. No profit is disbursed in these Accounts and depositors do not bear any loss.\n\n");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
					printf("# Minimum deposit TK. 100.00\n# 2 Copies passport size photographs of every operators duly attested by \nintroducer\n# Identification proof like National ID Card/Passport\n# 1 copy photograph of nominee duly attested by the account holder.\n# Signature of Introducer");
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose an option from above: ");
	    			scanf("%d", &b);//User will choose whether he/she wants to run the program or end this.
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}
				else if(r==2)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("Savings account is opened under the Mudaraba principal of Islami Shariah. Under the above principal the clients is the Shaheb-Al Mal and the Bank is Mudarib. Mudaraba Saving’s accounts are mainly meant for Non-Trading customers who have some potential saving with small no. of transactions taking place. More than one person can open and operate a savings account. A guardian on behalf of a minor can open a Savings A/C. In which case a declaration stating the date of birth of the minor should be obtained from the guardian.\n");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
					printf("# 2 copies passport size photographs of account holder duly attested by introducer\n# 1 copy photograph of nominee duly attested by the accountholder\n# Identification proof like National ID Card/Passport/Chairman certificate\n# Initial deposit TK. 100.00\n# Introducer signature");			
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    			scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}
				
				else if(r==3)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("Term Deposit is a profit bearing account which offers returns by depositing money for fixed period of time based on Mudaraba concept. These deposits are repayable subject to a period of notice and hence known as time deposits or time liabilities meaning thereby that these are withdrawable subject to a period of notice and not on demand. TK.1,000.00 and multiple of TK. 50.00 for the period of 3 months, 6 months, 12 months, 24 months and 36 months can be deposited.");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
				    printf("# 2 copies passport size photographs of account holder duly attested by introducer\n# 1 copy photograph of nominee duly attested by the accountholder\n# Identification proof like National ID Card/Passport/Chairman certificate\n# Initial deposit TK. 1,000.00\n# Introducer signature");
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    			scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}
				else if(r==4)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("Special Savings (Pension) Account of 5-year or 10-year term may be opened for monthly deposits of TK 50.00, TK 100.00, TK 200.00, TK 300.00, TK 400.00, TK 500.00, TK 600.00, TK 700.00, TK 800.00, TK 900.00, TK 1000.00 and Multiple of thousand upto TK 20,000.00 only. After maturity of the account, the account holder will be paid his deposited amount with profit earned at a time or on installment basis. The parents or legal guardians shall be allowed to open this account jointly with a minor.\n");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
					printf("# 2 copies passport size photographs of account holder duly attested by introducer\n# 1 copy photograph of nominee duly attested by the accountholder\n# Identification proof like National ID Card/Passport/Chairman certificate\n# Initial deposit TK. 1,000.00\n# Introducer signature");
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    			scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}	
				
				else if(r==5)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("This Account may be opened by depositing minimum US $1,000/- at designated Branches of the Bank. Bangladeshi nationals residing, working and earning abroad, foreign national residing in Bangladesh and also foreign firms registered abroad and operating in Bangladesh foreign missions and their expatriate employees are eligible to open this Account. The Account-holder will get profit as per rules and regulation.");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
					printf("# 2 copies passport size photographs of account holder duly attested by introducer\n# 1 copy photograph of nominee duly attested by the accountholder\n# Identification proof like National ID Card/Passport/employer certificate\n# Minimum deposit US $1,000.00 \n# Introducer signature");
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    			scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}
				else if(r==6)
				{
					system("cls");
					//different colour for title
					printf("\n\t\t\t\tMAIN FEATURES\n\n");
					printf("With a view to grow up savings habit among the minor students, to gather knowledge about banking services and modern technology the Student Savings Account has been introduced. Special privileges have been offered in this account. The privilege to the minor students and encourage them to make savings in Banks that will be helpful for them to make a big savings little by little for completion of higher education. Any guardian can open this account in the name of students below 18 years of any educational institutions by showing Identity Card with TK 25.00 as initial deposit only.");
					printf("\n\t\t\t\tREQUIRED DOCUMENTS\n\n");
					printf("# 2 copies passport size photographs of operator and student.\n# 1 copy photograph of nominee(Father/Mother or Local Guardian) duly attested by the accountholder\n# Identification proof like Student ID Card/Passport/Chairman or School Authority certificate.\n# Minimum deposit TK 25.00\n# Introducer signature");
					printf("\n\n\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
	    			AFTERINQUIRY: scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==2)
					{
						goto END;
					}
					else
					{
						printf("\a    Invalid!!! Please choose a valid option from above : ");
						goto AFTERINQUIRY;
					}
				}
				
				else if(r==0)
				{
					goto END;
				}
				else
				{
					printf("\a    Invalid!!! Please choose a valid option from above : ");
				}
				
			}while(r<0 || r>6);
		
		break;
		
		case 3: system("cls");
		printf("\n  Welcome to our system for authorized stuff.\n\n  If you are not AUTHORIZED then please leave this program." );
		BLOG: printf("\n\n\t\tUsername: ");
		//Authorized stuff will only give the username and password.
		scanf("%s", &uname0);
		printf("\n\n\t\tPassword: ");
		scanf("%s", &pswrd0);
		e = strcmp(uname0, "IIUM");//This function compare the input with IIUM. 
		f = strcmp(pswrd0, "1234");//This function compare the input with 1234. 
			if( e==0 && f==0 )//If the both input match with what has given then this loop will run. 
			{
				printf("\n  As-Salamu Alaikum Wrt. Wbt." );
				
				ACCOUNT: printf("\n\n\t\tAccount No. : ");
				scanf("%lf", &l);//Authorized stuff will search customer details by the account number of customers.
				if( l == k ) {
					system("cls");
					printf("  Account No                    : %14.0f", k);
					printf("\n\t\t\t  PERSONAL DETAILS :\n\n");
					printf("  TITLE(MR./MRS./MS./MISS)    : %s", title);
					printf("\n  FIRST NAME *                : %s", fname);
					printf("\n  FAMILY/SURNAME *            : %s", sname);
					printf("\n  MIDDLE NAME                 : %s", mname);
					printf("\n  FATHER'S NAME *             : ");
					puts(fthrname);
					printf("  MOTHER'S NAME *             : ");
					puts(mthrname);
					printf("  MARITAL STATUS*             : %s", msts);
					printf("\n  GENDER*(Male/Female/OTHER)  : %s", gndr);
					printf("\n  PASSPORT NO *               : %s", psprt);
					printf("\n  DATE OF BIRTH*(DD MM YYYY)  : %2d %2d %4d", date , month , year);
					printf("\n  TOWN/CITY OF BIRTH          : %s", tob);
					printf("\n  COUNTRY OF BIRTH            : %s", cob);
					printf("\n  OCCUPATION *                : %s", ocptn);
					printf("\n  MONTHLY INCOME *            : %.2f", mi);
					printf("\n  PHONE NUMBER *              : %s", pnmbr);
					printf("\n  MOBILE NUMBER               : %s", mnmbr);
					printf("\n  OFFICE NUMBER               : %s", onmbr);
					printf("\n  E-MAIL ADDRESS *            : %s", email);
					printf("\n\n\t\t\tNOMINEE DETAILS     :\n\n");
					printf("  TITLE(MR./MRS./MS./MISS)    : %s", ntitle);
					printf("\n  FULL NAME *                 : ");
					puts(nname);
					printf("  PASSPORT NO *               : %s", npsprt);
					printf("\n  DATE OF BIRTH*(DD MM YYYY)  : %2d %2d %4d",ndate,nmonth,nyear);
					printf("\n  RELATION WITH NOMINEE *     : ");
					puts(rltnwthn);
					printf("  OCCUPATION *                : ");
					puts(nocptn);
					printf("  CONTACT NUMBER*             : %s",nnmbr);
					printf("\n  E-MAIL *                    : %s", nemail);
					printf("\n\n\t0=> End this Program\n\t1 => Go to Main page\n\t");
					scanf("%d", &b);
					if(b==1)
					{
						goto LOOP;
					}
					if(b==0)
					{
						goto END;
					}
				
				}
				else
				{
					printf("ACCOUNT NO. don't match.\n\n");
					printf("\t0 => End this Program\n\t1 => Go to Main page\n\t2=> Again input Account No\n\tPlease choose a option from above: ");
					CHOOSE2: scanf("%d", &d);
	    			switch(d)
	   				{
	   					case 0 : goto END;break;
						case 1 : goto LOOP;break;
	    				case 2 : goto ACCOUNT;break;
	    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
	    				goto CHOOSE2;
					}
				}
			}
			if( e!=0 || f!=0 )
			{
				printf("Username and Password don't match.\n\n");
				printf("\t0 => End this Program\n\t1 => Go to Main page\n\t2=> Try Again to sign-in\n\tPlease choose a option from above: ");
				CHOOSE3: scanf("%d", &d);
    			switch(d)
    			{
    				case 0 : goto END;break;
					case 1 : goto LOOP;break;
    				case 2 : goto BLOG;break;
    				default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    						 goto CHOOSE3;
				}
			}
			break;
		
		case 4: CLOG: printf("\n\n\n\tUSERNAME     : ");
				scanf("%s" , &uname2);
				printf("\n\tPASSWORD     : ");
				scanf("%s" , &pswrd2);
				n = strcmp(uname1, uname2);
				m = strcmp(pswrd1, pswrd2);
				if( n==0 && m==0 )
				{
					system("cls");
					printf("  Account No                    : %14.0f", k);
					printf("\n\t\t\t  PERSONAL DETAILS :\n\n");
					printf("  TITLE(MR./MRS./MS./MISS)    : %s", title);
					printf("\n  FIRST NAME *                : %s", fname);
					printf("\n  FAMILY/SURNAME *            : %s", sname);
					printf("\n  MIDDLE NAME                 : %s", mname);
					printf("\n  FATHER'S NAME *             : ");
					puts(fthrname);
					printf("  MOTHER'S NAME *             : ");
					puts(mthrname);
					printf("  MARITAL STATUS*             : %s", msts);
					printf("\n  GENDER*(Male/Female/OTHER)  : %s", gndr);
					printf("\n  PASSPORT NO *               : %s", psprt);
					printf("\n  DATE OF BIRTH*(DD MM YYYY)  : %2d %2d %4d", date , month , year);
					printf("\n  TOWN/CITY OF BIRTH          : %s", tob);
					printf("\n  COUNTRY OF BIRTH            : %s", cob);
					printf("\n  OCCUPATION                  : %s", ocptn);
					printf("\n  MONTHLY INCOME              : %.2f", mi);
					printf("\n  PHONE NUMBER                : %s", pnmbr);
					printf("\n  MOBILE NUMBER               : %s", mnmbr);
					printf("\n  OFFICE NUMBER               : %s", onmbr);
					printf("\n  E-MAIL ADDRESS              : %s", email);
					printf("\n\n\t\t\t  NOMINEE DETAILS     :\n\n");
					printf("  TITLE(MR./MRS./MS./MISS)    : %s", ntitle);
					printf("\n  FULL NAME *                 : ");
					puts(nname);
					printf("  PASSPORT NO *               : %s", npsprt);
					printf("\n  DATE OF BIRTH*(DD MM YYYY)  : %2d %2d %4d",ndate,nmonth,nyear);
					printf("\n  RELATION WITH NOMINEE       : ");
					puts(rltnwthn);
					printf("  OCCUPATION                  : ");
					puts(nocptn);
					printf("  CONTACT NUMBER*             : %s",nnmbr);
					printf("\n  E-MAIL *                    : %s", nemail);
					
					printf("\n  Thanks for opening an account with us.\n");
    				printf("\t1 => Go to Main page\n\t2 => End this Program\n\n  Please choose a option from above: ");
    				scanf("%d", &d);
    				switch(d)
    				{
    					case 1 : goto LOOP;break;
    					case 2 : goto END;break;
    					default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    					goto OPTION;
					}
					
				}
				
				if(n!=0 || m!=0)
				{
					printf("  Username and Password don't match.\n\n");
					printf("\t0 => End this Program\n\t1 => Go to Main page\n\t2=> Try Again to sign-in\n\tPlease choose a option from above: ");
					CHOOSE1: scanf("%d", &d);
    				switch(d)
    				{
    					case 0 : goto END;break;
						case 1 : goto LOOP;break;
    					case 2 : goto CLOG;break;
    					default: printf("\a    Invalid!!! Please choose a valid option from above: ");
    					goto CHOOSE1;
					}
				}
				break;
				
		
		case 5: system("cls");
		printf("\n\t\t\t\t  ABOUT AIUB BANK\n\n\t1) AIM\n\t2) VISION\n\t3) COMMITMENTS\n\t4) MEMBERS\n\n\t=> Press 0 to end this program\n\t=> Press 9 to return Main Page.");
		
		ABOUT: printf("\n\n\tPlease choose an option from above : ");
			scanf("%d", &a);
			
			if(a==0)
			{
				goto END;
			}
			if(a==1)
			{
				printf("\n\t\t\t\t\tAIM\n");
				printf("\n\tTo establish Islamic Banking through the introduction of a welfare oriented banking system and also ensure equity and justice in the field of all economic activities, achieve balanced growth and equitable development in through diversified investment operations particularly in the priority sectors and less developed areas of the country. To encourage socio-economic upliftment and financial services to the loss-income community particularly in the rural areas.");
				goto ABOUT;
			}	
			if(a==2)
			{
				printf("\n\t\t\t\t\tVISION\n");
				printf("Our vision is to always strive to achieve superior financial performance, be considered a leading Islamic Bank by reputation and performance.\n\n Our goal is to establish and maintain the modern banking techniques, to ensure soundness and development of the financial system based on Islamic principles and to become the strong and efficient organization with highly motivated professional, working for the benefit of people, based upon accountability, transparency and integrity in order to ensure stability of financial systems.\n\n We will try to encourage savings in the form of direct investment.\n\n We will also try to encourage investment particularly in projects which are more likely to lead to higher employment.");
				goto ABOUT;
			}
			if(a==3)
			{
				printf("\n\t\t\t\t   COMMITMENTS\n");
				printf("  =>To Shariah\n\n  =>To the Regulators\n\n  =>To the Shareholders\n\n  =>To the Community\n\n  =>To the Customers\n\n  =>To the Employees\n\n  =>To other stakeholders\n\n  =>To Environment\n");
				goto ABOUT;
			}
			if(a==4)
			{
				printf("\n\tIshmam Islam\n");
				printf("     14-28070-3     ");
				goto ABOUT;
			}
			if(a==9)
			{
				goto LOOP;
				
			}
			else
			{
				printf("\a\n\t\t    Invalid!!!");
				goto ABOUT;
			}
			
			break;
		
		default : printf("\a    Invalid!!! Please choose a valid option :");
		}
	}while(x<1 || x>5);
	
	END: printf("\n\t\t\tThank You Mr./Mrs./Ms./Miss %s\n", name);
	system("pause");
	return 0;
}
