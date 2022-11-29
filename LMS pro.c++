#include<iostream>
using namespace std;
struct zain{
	char name[19];
	int id;
   char auther[17];

};
int main()
{

	zain abc[200];
	int i=0;
	 string z,x;
	int n,h,m,k,q,f,j,o,l,b,e,y,xo;
	char g;
	cout<<"      -----------------------------------------------------------------"<<endl;
	cout<<"                     LIBRARY  MANAGEMENT SYSTEM                                     "<<endl;
	cout<<"     ------------------------------------------------------------------"<<endl;
	
	cout<<endl<<endl<<endl;
	
	do
	{
	
	
	
	cout<<" PRESS 1                        ISSUE THE BOOKS                                      "<<endl;
	
	cout<<" PRESS 2                         SEARCH THE BOOK                         "<<endl;
	
	cout<<" PRESS 3                       REPORTS OF LIST BOOK                                                  "<<endl;
	
	cout<<" PRESS 4                        EXIT THE PROGRAM                                                           "<<endl;
	
	
				cin>>n;
				
				
       switch(n)
    {
    	case 1:
    		{
    			do{
				
    			cout<<"   PRESS  1         ENTER  ISSUE BOOK DETAILS "<<endl;
    			cout<<"   PRESS  2            DELETE THE BOOK "<<endl;
    			cout<<"   PRESS  3           DISPLAY THE  BOOK "<<endl;
    			cout<<"   PRESS  4                  EXIT "<<endl;
    			cout<<endl<<endl;
    			cin>>h;
    			switch(h)
				{
					case 1:
						{
							
							cout<<"                               FIRST OPTION TO ADD BOOK NAME                                   "<<endl;
							cout<<endl<<endl;
							cout<<"                               SECOND OPTION TO ADD AUTHER NAME                                  "<<endl;
							cout<<endl<<endl;
							cout<<"                               THIRD OPTION TO ADD BOOK  ID                                      "<<endl;
							cout<<endl<<endl;
							do{
								
							cout<<'\t';
							cout<<"ENTER A BOOK NAME ::::";
						cin>>abc[i].name;
						    cout<<endl<<'\t'<<'\t';
								cout<<"ENTER A AUTHER NAME   ::::";
							cin>>abc[i].auther;
							cout<<endl<<'\t'<<'\t'<<'\t';
								cout<<"ENTER A BOOK ISBN ::::";
							cin>>abc[i].id;
							
							i++;
							cout<<endl<<endl;
							cout<<'\t'<<'\t'<<'\t'<<'\t'<<"PRESS 1  TO ISSUE BOOK AGAIN ::::";
							cin>>m;
						}while(m==1);
						
							break;
						}
						case 2:
							{
							cout<<endl<<endl<<'\t';	
							cout<<"ENTER THE ID OF BOOK THAT WE HAVE DELETED::::";
							cin>>xo;			
							  for(int j=0;j<=i-1;j++)
							  {
							  	if(abc[j].id==xo)
							  	{
							  		abc[j]=abc[j+1];
								  }
							  }
							  i--;
								
								break;	
							}
							
							case 3:
								{
									for(int j=0;j<=i-1;j++)
									{
										cout<<endl<<endl<<'\t'<<'\t';
										cout<<"DISPLAY BOOK NAME "<<endl<<endl;
										cout<<'\t'<<'\t'<<"**************BOOK NAME****************";
										cout<<'\t'<<'\t'<<abc[j].name<<endl<<endl<<'\t'<<'\t';
											cout<<'\t'<<'\t'<<"**************AUTHER NAME****************"<<endl<<endl;
											cout<<"DISPLAY BOOK AUTHER NAME "<<endl<<endl<<'\t'<<'\t'<<'\t';
										cout<<'\t'<<'\t'<<'\t'<<abc[j].auther<<endl;
											cout<<'\t'<<'\t'<<"**************BOOK ISBN****************"<<endl<<endl;
										
										cout<<"DISPLAY THE BOOK ISBN "<<endl;
										cout<<'\t'<<'\t'<<'\t'<<abc[j].id<<endl;
										
									}
								break;	
								}
								case 4:
									{
										cout<<"                               EXIT                       "<<endl;
									break;	
									}
									default :
										{
											cout<<"INVALID STATEMENT"<<endl;
										}
										break;
									}
									cout<<"AGAIN FIRST OPTION SELECT PRESS 1"<<endl;
									cin>>o;
								}while(o==1);
				
    		break;	
			}
			case 2:
				{
				    cout<<"1 PRESS    TO    SEARCH BOOK WITH ISBN"<<endl;
				    cout<<"2 PRESS     TO     SEARCH BOOK WITH NAME "<<endl;
				    cout<<"3  PRESS    TO     SEARCH BOOK WITH AUTHER NAME "<<endl;
				    cin>>e;
				    switch(e)
				    {
				    	case 1:
				    		{
				    			cout<<"ENTER A ID ";
				    			cin>>y;
				    			
	
	
	   
                            	for(int j=0;j<=i-1;j++)
                                  	{
	                              	if(abc[j].id==y)
	                             	{
	                      		        cout<<"THIS ID BOOK IS AVAILABLE IN THE LIST"<<endl;
	                              	}
	                              
	                                    	}
											
                              break;                  
				    		 	
							}
							case 2:
								{
										cout<<"ENTER A NAME OF BOOK ";
				    			cin>>z;
                            	for(int j=0;j<=i-1;j++)
                                  	{
	                              	if(abc[j].name==z)
	                             	{
	                      		        cout<<"THIS NAME BOOK IS AVAILABLE IN THE LIST"<<endl;
	                              	}
	                              
	                                    	}	
									
								break;	
								}
								case 3:
									{
											cout<<"ENTER A AUTHER NAME ";
				    			cin>>x;
                            	for(int j=0;j<=i-1;j++)
                                  	{
	                              	if(abc[j].auther==x)
	                             	{
	                      		        cout<<"THIS AUTHER NAME BOOK IS AVAILABLE IN THE LIST"<<endl;
	                      		        
	                              	}
	                              
	                                    	}	
										break;
										}
										default:
										{
											cout<<"INVALID STATEMENT "<<endl;
										}		
										break;					
					}
				break;	
				}
				case 3:
					{
						cout<<"THE TOTAL STENGTH OF BOOK IN LIBARARY "<<endl;
						for(int j=0;j<=i-1;j++)
						{
							cout<<"NAME OF BOOK"<<endl;
							cout<<abc[j].name<<endl;
							cout<<"DISPLAY AUTHER NAME "<<endl;
							cout<<abc[j].auther<<endl;
							cout<<"THE ID OF BOOK "<<endl;
							cout<<abc[j].id<<endl;
						}
					break;	
					}
					case 4:
						{
							cout<<"           EXIT                   ";
						break;	
						}
						default :
							{
							cout<<"invalid statement"<<endl;	
							}
						}
						cout<<"AGAIN SELECT TOTAL OPTION PRESS 1 ";
						cin>>b;
	
        }while(b=1);
	}
