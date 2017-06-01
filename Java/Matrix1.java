public class Matrix1
{
	public static void main(String []args)
	{
		int a[][] = { {0, 2, 0}, {3, 4, 0}, {6, 7, 8} };
		int r[] = new int[3];
		int c[] = new int[3];
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(a[i][j] == 0)
				{
					r[i] = 1;
					c[j] = 1;
				}
			}
		}
		
		for(int i=0; i<3; i++)
		{
			if(r[i] == 1)
			{
				for(int j=0; j<3; j++)
				{
					a[i][j] = 0;
				}
			}
			if(c[i] == 1)
			{
				for(int j=0; j<3; j++)
				{
					a[j][i] = 0;
				}
			}
		}
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				System.out.print(a[i][j] + "\t");
			}
			System.out.println();
		}
	}
}
