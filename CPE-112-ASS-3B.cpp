INSTRUCTION:IF THE INDEX OF THE ARRAY IS PALINDROMIC PRIME CHANGE THE VALUE TO 143.

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class cpe1b{  // mao ni ang class na ginagamit 
		public:
		long input();
		long palindromic_prime(long x); // Function ni sya sa palindromic prime//
		void exam(long num[1000],long size); // function ni sya gamit ang long data  which nag void exam ka//
			long i,num,size;
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,index=0,temp,s,pdnumber,count1;; \\long na data type japon ang gamit para dako ang masud//
	};
int main() {
	long i,inp[1000],size; //nag initialize ni sya //
	cpe1b eyatot;
		cout<<"INPUT:"; //printf ni sya kung sa C pa which means nagpagawas ni//
	size=0;
		for(i=0;;i++){
			cin>>inp[i];
			
			if(inp[i]==0)
			{
				break;      //mao ni sya ang magpahunong basta makakita na syag zero(0)//
			}
size++;
		}
			eyatot.exam(inp,size); \\gitawag ang mga gipang initialize gamit ang object na eyatot//
			
}
	
	
	
	long cpe1b::palindromic_prime(long x)//gigamit nga 'palindromic_prime' si 'prime' para dri masud ang process ni prime  nga function para ready napd nig gamiton nasad ug tawag ni 'computer engineering' kang 'palindromic_prime'
}
	{              // process ni sya para ma determine kung ang range kay prime ba or dili//

		count=0;  //value is zero// 
		num=x;
		for(j=2;j<num;j++){     //
			if(num%j==0){
				count++;     
			}
		}
		if(count==0){
			pdtemp=num;      //mao sad ni sya gamiton para makuha ang binary //
			bin=0;
			base=1;
			
			for(;pdtemp>0;){
				rem=pdtemp%2;
				bin=bin+(rem*base);  //mao ni sya ang formula nga gamiton para makuha ang reverse sa binary// 
				base=base*10;
				pdtemp=pdtemp/2;
			}
			key=bin;
			temp=0;
			rev=0;
			for(;key!=0;){
				temp=key%10;
				key=key/10;
				rev=temp+(rev*10);
				
			}
	
			if(rev==bin){
		//	cout<<endl;          
		//	num[i]=143;
		//	cout<<num[i]<<" ";
			
				return 1;
			}
			else{
		//		cout<<num[i]<<" ";
				return 0;
			}
		}
		else{
			return 0;
		}
     	}

	void cpe1b::exam(long num[1000],long size){     //function 
	for(i=3;i<size;i++){
	
	if(palindromic_prime(i)==1){
		num[i]=143;
	
	}
}
for(i=0;i<size;i++){
	cout<<"index["<<i<<"] - "<<num[i]<<" "<<endl;   //output 
}

		


