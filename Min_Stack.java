class Stack{
	int top;
	int [] arr=new int[100];
	Stack()
	{
		top=-1;
	}
	
	public void push(int val)
	{
		
		arr[++top]=val;
		
	}
	
	public void converttomin()
	{
		int n=top;
		int cnt=0;
		while(cnt < n)
		{
			for(int i=0;i<=top;i++)
			{
				if(arr[i] < arr[i+1])
				{
					int temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
			cnt++;
		}
	
	}
	
	public void pop()
	{
		
	  converttomin();
	
		top--;
		 
		
	}
	
	public void top()
	{
		converttomin();
		System.out.println("The top element of stack is: "+arr[top]);
	}
	
	public void printStk()
	{
		converttomin();
		
	      for(int i=0;i<=top;i++)
	      {
	    	 
	    	 System.out.print(arr[i]+" ");
	      }
	}
	
	
}
public class Min_Stack {

	public static void main(String[] args) {
		Stack st=new Stack();
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		st.push(5);
		st.top();
		st.pop();
		st.printStk();
	
		
	}

}
