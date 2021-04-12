if(max.empty() == true)
    {
        max.push(x);
        return;
    }
    
	if(max.size() > min.size())
	{
	    if(max.top() > x)
	    {
	        min.push(max.top());
	        max.pop();
	        max.push(x);
	    }
	    else
	    {
	        min.push(x);
	    }
	}
	else
	{
	    if(x < max.top())
	    {
	        max.push(x);
	    }
	    else
	    {
	        min.push(x);
	        max.push(min.top());
	        min.pop();
	    }
