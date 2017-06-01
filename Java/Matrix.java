public class Matrix
{
	public static void main(String []args)
	{
		int a1[][] = { {1, 2, 0}, {3, 4, 0}, {6, 7, 8} };
		int a2[][] = new int[4][4];
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				a2[i][j] = a1[i][j];
			}
		}
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				if(a1[i][j] == 0)
				{
					for(int k=0; k<3; k++)
					{
						a2[i][k] = 0;
						a2[k][j] = 0;
					}
				}
			}
		}
		
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				System.out.print(a2[i][j] + "\t");
			}
			System.out.println("\n");
		}
	}
}
