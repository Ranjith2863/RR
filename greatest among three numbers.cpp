 #include<iostream.h>
 #include<conio.h>

 int largest(int,int,int);

 main()
    {
       clrscr();


       int value_1;
       int value_2;
       int value_3;
       int maximum;

       cout<<"\n Enter the value_1 =  ";
       cin>>value_1;

       cout<<"\n Enter the value_2 =  ";
       cin>>value_2;

       cout<<"\n Enter the value_3 =  ";
       cin>>value_3;

       maximum=largest(value_1,value_2,value_3);

       cout<<"\n The largest integer is = "<<maximum<<endl;

       getch();
       return 0;
    }

 /*************************************************************************///-------------------------  largest(int,int,int)  ----------------------///*************************************************************************/int largest(int x,int y,int z)
    {
       int largest=x;

       if(y>largest)
      largest=y;

       if(z>largest)
      largest=z;

       return largest;
    }
