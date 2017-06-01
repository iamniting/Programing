public class Matrix2
{
	public static void main(String []args)
	{
		int a[][] = { {1, 2, 0}, {3, 4, 5}, {6, 7, 8} };
		int row = 0;
		int col = 0;
		int v1, v2, one = 1;
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(a[i][j] == 0)
				{
					row = (row | (1<<i));
					col = (col | (1<<j));
				}
			}
		}
		
		for(int i=0; i<3; i++)
		{
			v1 = row & one;
			v2 = col & one;
			if(v1 == one)
			{
				for(int j=0; j<3; j++)
				{
					a[i][j] = 0;
				}
			}
			if(v2 == one)
			{
				for(int j=0; j<3; j++)
				{
					a[j][i] = 0;
				}
			}
			one = one << 1;
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
