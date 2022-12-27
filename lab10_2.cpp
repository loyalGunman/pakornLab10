void printO(int x,int y)
{
        if ((x <= 0)||(y <= 0))
        {
		    cout << "Invalid input";
	    }
	    else
	    {
        for(int i = 1; i <= x;i++)
        {
            for(int j = 1; j <= y;j++)
            {
                cout << 'O';
            }
            cout << "\n";
        }
    }
}
