#include <graphics.h>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ifstream f;
	f.open("maze.txt");
		int m,n;
	for(int d=0;d<1;d++){
		f>>m;
		f>>n;
	}
	int q,r;
	q=m*10;
	r=n*10;
	initwindow(q,r);
	int a[q][r];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			f>>a[i][j];
			}
			}
			int i=m-1;
			int j=n-1;
		do{
				a[i][j]=2;
		  adv:if(a[i-1][j]==0){
		    i=i-1;
		    a[i][j]=2;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		delay(300);
		    goto adv;
	}
		  else if(a[i][j-1]==0){
		    j=j-1;	
		    a[i][j]=2;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		delay(300);
		    goto adv;
	}
		  else if(a[i][j+1]==0){
			j=j+1;
			a[i][j]=2;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		delay(300);
			goto adv;
	}
		  else if(a[i+1][j]==0){
			i=i+1;
			a[i][j]=2;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		delay(300);
			goto adv;
			
	}
	    else{
	    	if(a[i-1][j]==2){
	    		i=i-1;
	    		a[i][j]=3;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
	    	else if(a[i][j-1]==2){
	    		j=j-1;
	    		a[i][j]=3;
	    			    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
	    	else if(a[i][j+1]==2){
	    	j=j+1;
			a[i][j]=3;
				    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;	
	    	}
	    	else if(a[i+1][j]==2){
	    		a[i][j]=9;
	    		i=i+1;
	    		a[i][j]=3;
	    	for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
	    	else{
	    		if(a[i-1][j]==3){
	    	    a[i][j]=9;
	    		i=i-1;
	    		a[i][j]=4;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	        else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
	    		if(a[i][j-1]==3){
	    			a[i][j]=9;
	    		j=j-1;
	    		a[i][j]=4;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	        else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
			if(a[i][j+1]==3){
				a[i][j]=9;
	    		j=j+1;
	    		a[i][j]=4;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	        else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
		if(a[i+1][j]==3){
			    a[i][j]=9;
	    		i=i+1;
	    		a[i][j]=4;
	    							for(int k=0,i=0;k<r;k+=10,i++)
		{
		
			for(int t=0,j=0;t<q;t+=10,j++){
			if (a[i][j]==1){
			setfillstyle(1,14);
			bar(t,k,t+10,k+10);
	     }
			else if(a[i][j]==2){
			setfillstyle(1,5);
			bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==3){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	        else if(a[i][j]==4){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
	     	else if(a[i][j]==9){
	     		setfillstyle(1,5);
	     		bar(t,k,t+10,k+10);
	     	}
			 else{
			 	setfillstyle(1,0);
			 	bar(t,k,t+10,k+10);
			 } 	
			} 
		}
		goto adv;
	    	}
			else{
				return 0;
			}	    	
	    		
	    	}
	    }
	}while(i==0&&j==0);
		
	
	getch();
	
}
